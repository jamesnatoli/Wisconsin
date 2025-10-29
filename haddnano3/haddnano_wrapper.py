#!/usr/bin/env python
import os
import sys
import math

import argparse
parser = argparse.ArgumentParser(description='hadd nano files.')
parser.add_argument('--maxfiles', required=False, type=int, default=250, help="Hadd at most this many files at a time.")
parser.add_argument('--outputname', required=True, type=str, help="Name of output.")
parser.add_argument('--outputdir', required=True, type=str, help="Where to store final (and temporary) file.")
parser.add_argument('--channel', required=True, type=str, help="Part of the rootfile names to be hadded.")
parser.add_argument('--tempdir', required=False, type=str, default="/scratch/"+os.environ['USER']+"/haddnano/", help="Where to write files before moving them to output directory.")
parser.add_argument('--inputdir', required=True, type=str, nargs='*', help="input directories")
parser.add_argument('--skip', required=False, type=int, default=-1, help="In case of problems: Skip already produced temporary intermediate files. For '--skip N', assumes that files '..._tempN.root' were already produced.")
parser.add_argument('--splitoutput', default=False, action='store_true', help="Instead of making a single output file, make multiple smaller ones")
parser.add_argument('--maxsize', required=False, type=int, default=800, help="Maximum (expected) size of outputs in MB. If 'splitoutput' is False but the output is larger than this value, 'splitoutput' will become True.")
args = parser.parse_args()

def RunCommand(command):
  print ("Running >>>",command[:200],"...")
  status = os.system(command)
  if status != 0:
    print ("Something went wrong! Status",status)
    #exit() ### Commented out for now: Assuming it's only going the catch the random Seg faults at the end of haddnano2
  print ("Done >>>",command[:200],"...")

def HaddCommand(inputs, outname):
  command = "python3 haddnano3.py "+outname+" "+" ".join(inputs)
  RunCommand(command)

def EnsureDir(direc):
  if not os.path.exists(direc):
    os.makedirs(direc)

outputname = args.outputname if args.outputname.endswith(".root") else args.outputname+".root"
outdir = args.outputdir if not args.tempdir else args.tempdir
maxfiles = args.maxfiles
splitoutput = args.splitoutput
EnsureDir(outdir)

filesToHadd = []
for direc in args.inputdir:
  filesToHadd += [os.path.join(direc, f) for f in os.listdir(direc) if os.path.isfile(os.path.join(direc, f)) and (args.channel in f) and f.endswith(".root")]
totalsize = 0.0
for file in filesToHadd:
  totalsize += float(os.path.getsize(file))/1024/1024
  #print float(os.path.getsize(file))/1024/1024
if totalsize > args.maxsize: splitoutput = True

recombine = False
if len(filesToHadd) < maxfiles and not splitoutput:
  HaddCommand(filesToHadd, os.path.join(outdir, args.outputname))
else:
  if splitoutput:
    maxfiles = min(maxfiles, int(args.maxsize/totalsize*len(filesToHadd)))
  nfiles = float(len(filesToHadd))
  splitinto = int(math.ceil(nfiles / maxfiles))
  filespertemp = int(math.ceil(nfiles / splitinto))
  nsteps = splitinto
  print ("==================================================")
  if splitoutput:
    if totalsize/splitinto < args.maxsize/2.0:
      # This happens if int(args.maxsize/totalsize*len(filesToHadd)) >> maxfiles
      # In this case, we need to make each part from multiple subparts
      recombine = True
      #finalfiles = int(math.ceil(totalsize/args.maxsize))
      finalfiles = int(math.ceil(float(splitinto)/int(args.maxsize/(totalsize/splitinto))))
      print ("Will first produce",splitinto,"separate output files, hadded from",filespertemp,"inputs each, with expected size of each output ",totalsize/1024/splitinto,"GB.")
      print ("And then, will merge these files into",int(finalfiles),"final outputs.")
      nsteps = splitinto+finalfiles
    else:
      print ("Going to produce",splitinto,"separate output files, hadded from",filespertemp,"inputs each. Expected size of each output:",totalsize/1024/splitinto,"GB.")
  else:
    print ("Going to produce 1 single hadded output file from all",len(filesToHadd),"inputs. Expected output size:",totalsize/1024,"GB.")
  print ("==================================================")
  tempfiles = []
  outputs = []
  for i in range(splitinto):
    print ("Step:",i+1,"/",nsteps)
    if i>args.skip: HaddCommand(filesToHadd[i*filespertemp:(i+1)*filespertemp], os.path.join(outdir, args.outputname.replace(".root", "_temp"+str(i)+".root")))
    tempfiles.append(os.path.join(outdir, args.outputname.replace(".root", "_temp"+str(i)+".root")))
    if splitoutput:
      EnsureDir(args.outputdir)
      RunCommand("mv "+os.path.join(outdir, args.outputname.replace(".root", "_temp"+str(i)+".root"))+" "+os.path.join(args.outputdir, args.outputname.replace(".root", "_part"+str(i+1)+".root")))
      outputs.append(os.path.join(args.outputdir, args.outputname.replace(".root", "_part"+str(i+1)+".root")))
  if not splitoutput:
    HaddCommand(tempfiles, os.path.join(outdir, args.outputname))
    for t in tempfiles:
      RunCommand("rm "+t)
    
if args.tempdir and not splitoutput:
  EnsureDir(args.outputdir)
  RunCommand("mv "+os.path.join(outdir, args.outputname)+" "+os.path.join(args.outputdir, args.outputname))

if recombine:
  nfiles = float(len(outputs))
  splitinto = finalfiles
  filespertemp = int(math.ceil(nfiles / splitinto))
  for i in range(splitinto):
    print ("Step:",i+1+(nsteps-finalfiles),"/",nsteps)
    if i>args.skip: HaddCommand(outputs[i*filespertemp:(i+1)*filespertemp], os.path.join(outdir, args.outputname.replace(".root", "_temp"+str(i)+".root")))
    for t in outputs[i*filespertemp:(i+1)*filespertemp]:
      RunCommand("rm "+t)
    RunCommand("mv "+os.path.join(outdir, args.outputname.replace(".root", "_temp"+str(i)+".root"))+" "+os.path.join(args.outputdir, args.outputname.replace(".root", "_part"+str(i+1)+".root")))

print ("Done!")
exit()
