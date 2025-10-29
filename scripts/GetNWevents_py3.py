import os
import re
import ROOT
import sys

###### NOTE: This can run out of the box! It will loop over all samples in the given directory
#directory = "/hdfs/store/user/jnatoli/NanoTauAnalysis/samples/nano/Wto3pi_2018/" # "/eos/user/d/dmroy/TauAnalysis/analysis/Wto3pi_2018_cont2"
#channel = "Wto3pi_2018_step1"
#directory = "/hdfs/store/user/ballmond/NanoTauAnalysis/samples/nano/HTauTau_2018/HTauTau_2018_step1/"
#channel = "HTauTau_2018_step1"
#directory = "/hdfs/store/user/jnatoli/NanoTauAnalysis/samples/nano/Wto3pi_2018_additional/Wto3pi_2018_step1/"
#channel = "Wto3pi_2018_step1"
#directory = "/eos/user/b/ballmond/NanoTauAnalysis/samples/nano/HTauTau_2022/HTauTau_2022_step1/"
#channel = "HTauTau_2022_step1"
#directory = "/hdfs/store/user/ballmond/NanoTauAnalysis/samples/nano/HTauTau_2022/"+channel+"/"
#channel = ""
#directory = "/eos/cms/store/group/phys_higgs/HLepRare/skim_2024_v1/Run3_2022-bugged/"
channel = "Wto3pi_2023preBPix_step1"
directory = "/hdfs/store/user/jnatoli/NanoTauAnalysis/samples/nano/Wto3pi_2023_preBPix/"+channel+"/"
match = "HIG-WplusJetsTo3Pi-powhegMiNNLO-pythia8-photos-Run3Summer23"
#directory = "/hdfs/store/user/jnatoli/WJetsTo3PiGenForTraining/HIG-WplusJetsTo3Pi-powhegMiNNLO-pythia8-photos-Run3Summer22_FT/"


if len(sys.argv)>1:
  print("Using cmd line arguments!")
  directory = sys.argv[1]
  match = sys.argv[2]
  print(f'directory: {directory}')
  print(f'match: {match}')

rfiles = {}
sortedlist = []

for direc in os.listdir(directory):
  #rfiles[direc] = []
  for path, subdirs, files in os.walk(os.path.join(directory, direc)):
    if match in path or True:
      print(f'Matched *{match}* with {path}')
      for name in files:
        if (channel in name) and ("Run20" not in path) or True: # Filter data
          if direc not in rfiles:
            rfiles[direc] = []
            sortedlist.append(direc)
          rfiles[direc].append(os.path.join(path, name))
  if direc in rfiles: print(direc,":",len(rfiles[direc]),"files")

for direc in sortedlist:
  print("-------------------------------------------------------------------------")
  mydict = {}
  totentries = 0
  for filename in rfiles[direc]:
    try:
      ffile = ROOT.TFile(filename, "read")
    except KeyboardInterrupt as e:
      print( "Ok, goodbye")
      exit(0)
    except:
      print(filename,"FAILED!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!")
      continue
    tree = ffile.Get("Runs")
    entries = tree.GetEntries() # ("Lepton_pt[0]>30 && Lepton_pt[1]>20 && mll>20  & ptll>30 && PuppiMET_pt>30 && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) && "+WP)
    totentries += entries

    for i in range(entries):
      tree.GetEntry(i)
      try:
        evts = tree.genEventCount
      except:
        print(filename,"FAILED!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!")
        continue
      stuff = [evts, tree.genEventSumw, [i for i in tree.LHEScaleSumw], [i for i in tree.LHEPdfSumw]]
      if tree.genEventSumw > 1000000000000:
        print(f'Very Large Evt Weight: {tree.genEventSumw}, {filename}')
      try:
        key = evts
        key = evts+stuff[1]
        key = evts+stuff[1]+stuff[2][0]
      except IndexError:
        pass
      if key not in mydict:
        mydict[key] = [1, stuff, [filename]]
      else:
        mydict[key][0] += 1
        mydict[key][2].append(filename)
        if stuff != mydict[key][1]:
          print("DIFFERENT CONTENTS!")
          print("-", stuff)
          print("-", mydict[key][1])

  summ = 0
  sumw = 0.0
  dsumm = 0
  dsumw = 0.0
  for key in mydict:
    if mydict[key][0]>1: # or True
      #print "-----"
      #if mydict[key][1][0]==904000: print "THIS IS THE ONE"
      #print mydict[key][0],"x :",key
      #print mydict[key][1][0]
      #print mydict[key][1][1]/mydict[key][1][0]
      print(mydict[key][0],"x :",mydict[key][1][0]," | key",key)
      print(f'\t({mydict[key][2][0]}) & ({mydict[key][2][1]})')
    summ += mydict[key][1][0]
    sumw += mydict[key][1][1]
    dsumm += mydict[key][0]*mydict[key][1][0]
    dsumw += mydict[key][0]*mydict[key][1][1]

  print("**************************************")
  print("***",direc)
  print("**************************************")
  print("Entries:",totentries)
  print("Should have so many events:", summ)
  print("Weighted:", sumw)
  if summ!=dsumm or sumw!=dsumw:
    print('If "double-counting" is correct:')
    print("Should have so many events:", dsumm)
    print("Weighted:", dsumw)

exit()
    




