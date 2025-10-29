import ROOT
import sys
import os
import argparse

ROOT.gROOT.SetBatch(True) # sets visual display off (i.e. no graphs/TCanvas)

if __name__ == "__main__": 

  parser = argparse.ArgumentParser(description='Look inside many root files in a directory') 
  parser.add_argument('-d', '--input_directory', dest='input_directory', action='store', 
                    help='the input directory to purge of empty root files') 
  args = parser.parse_args() 

  files = os.listdir(args.input_directory)
  shortFilename = files
  files = [args.input_directory + filestring for filestring in files]

  totalInDir = 0
  totalInDirPassing = 0
  for i, rootFile in enumerate(files):
    currentFile = ROOT.TFile.Open(rootFile, "READ") 
    tree      = currentFile.Get("Events")
    nInFile  = tree.GetEntries()
    print(f"{nInFile}\t{shortFilename[i]}")
    totalInDir += nInFile

    ditau_FS = 15*15
    mutau_FS = 13*15

    nInFilePassing = 0
    for entryNum in range (0, nInFile):
      tree.GetEntry(entryNum)
      FS          = getattr(tree, "HTT_pdgId")
      METfilters  = getattr(tree, "METfilters")
      HTT_SRevent = getattr(tree, "HTT_SRevent")
      HTT_SSevent = getattr(tree, "HTT_SSevent")
      HTT_ARevent = getattr(tree, "HTT_ARevent")
      nice_event  = (HTT_SRevent or HTT_SSevent or HTT_ARevent)
      if ( (abs(FS) == mutau_FS) and METfilters and nice_event):
        #print(FS, METfilters, nice_event, HTT_SRevent, HTT_SSevent, HTT_ARevent) # sanity check
        nInFilePassing += 1

    print(f"{nInFilePassing}\t{shortFilename[i]} passing FS, METfilters and (SR or SS or AR event)")
    totalInDirPassing += nInFilePassing

  print(f"Total in directory: {totalInDir}")
  print(f"Total in directory passing: {totalInDirPassing}")



