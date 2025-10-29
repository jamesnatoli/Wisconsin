import ROOT
import sys

#ff = "/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Autumn18_102X_nAODv6_Full2018v6/MCl1loose2018v6__MCCorr2018v6__l2loose__l2tightOR2018v6/nanoLatino_GluGluToWWToTNTN__part0.root"
#ff = "/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv5_Full2016v6/MCl1loose2016v6__MCCorr2016v6__l2loose__l2tightOR2016v6/nanoLatino_GluGluWWTo2L2Nu_MCFM__part0.root"
#ff = "/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv5_Full2016v6/MCl1loose2016v6__MCCorr2016v6__l2loose__l2tightOR2016v6/nanoLatino_WWTo2L2Nu__part1.root"
#ff= "/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Autumn18_102X_nAODv6_Full2018v6/MCl1loose2018v6__MCCorr2018v6__l2loose__l2tightOR2018v6__HighMass2/nanoLatino_WpWmJJ_QCD_noTop__part0.root"
#ff = "/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Autumn18_102X_nAODv6_Full2018v6/MCl1loose2018v6__MCCorr2018v6__Semilep2018/nanoLatino_TTWjets__part0.root"
#ff = "/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Autumn18_102X_nAODv6_Full2018v6/MCl1loose2018v6__MCCorr2018v6__Semilep2018/nanoLatino_TTToSemiLeptonic__part0.root"
#ff = "/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Autumn18_102X_nAODv6_Full2018v6/MCl1loose2018v6__MCCorr2018v6__Semilep2018/nanoLatino_WJetsToLNu-2J__part0.root"
#ff = "/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Autumn18_102X_nAODv6_Full2018v6/MCl1loose2018v6__MCCorr2018v6__l2loose__l2tightOR2018v6/nanoLatino_ZGToLLG__part0.root"
#
#ff = "/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Autumn18_102X_nAODv7_Full2018v7/MCl1loose2018v7__MCCorr2018v7/nanoLatino_WJetsToLNu-LO_2J__part0.root"
#ff = "/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Autumn18_102X_nAODv7_Full2018v7/MCl1loose2018v7/nanoLatino_GluGluHToWWToLNuQQ_M1000__part0.root"

ff = "/hdfs/store/user/jnatoli/WJetsToRhoPiGeneration/HIG-WplusJetsToRhoPi-powhegMiNNLO-pythia8-photos-RunIISummer20UL18/RunIISummer20UL18NanoAODv9-106X_upgrade2018_realistic_v16_L1v1-v2/NANOAODSIM/HIG-WplusJetsToRhoPi-powhegMiNNLO-pythia8-photos-RunIISummer20UL18NanoAODv9_100_16174632_99.root"

if len(sys.argv)<2:
  print("Give the filepath are argument!")
  exit()
ff = sys.argv[1]

maxent = 50-1 if len(sys.argv)<3 else int(sys.argv[2])-1

# Test something if 1. Just print some full events if 0.
maketest = 0

file = ROOT.TFile(ff, "read")

tree = file.Get("Events")
entries = tree.GetEntries()

def TheTest(part,mom):
  #if mom==0 and ("W+" in part or "W-" in part): print "Test true!"
  # if ("Top" in part) or ("Higgs" in part): print("Test true!")
  return 


def gettype(id_):
  #if abs(id_) >0 and abs(id_) <7: typ = "Quark "+str(id_)
  if abs(id_)==1: typ = "Down "+str(id_)
  elif abs(id_)==2: typ = "Up "+str(id_)
  elif abs(id_)==3: typ = "Strange "+str(id_)
  elif abs(id_)==4: typ = "Charm "+str(id_)
  elif abs(id_)==5: typ = "Bottom "+str(id_)
  elif abs(id_)==6: typ = "Top "+str(id_)
  elif abs(id_)==11: typ = "Elec "+str(id_)
  elif abs(id_)==13: typ = "Muon "+str(id_)
  elif abs(id_)==15: typ = "Tau "+str(id_)
  elif abs(id_) >11 and abs(id_) <17: typ = "Neut "+str(id_)
  elif id_==21: typ = "Gluon"
  elif id_==22: typ = "Photon"
  elif id_==24: typ = "W+"
  elif id_==-24: typ = "W-"
  elif id_==25: typ = "Higgs"
  elif id_==23: typ = "Z"
  elif id_==111: typ = "pi0"
  elif id_==113: typ = "rho0"
  elif id_==211: typ = "pi+"
  elif id_==-211: typ = "pi-"
  elif id_==213: typ = "rho+"
  elif id_==-213: typ = "rho-"
  elif id_==221: typ = "eta+"
  elif id_==-221: typ = "eta-"
  else: typ = "part "+str(id_)
  return typ

#camefrom = {}
#wentto = {}
for i in range(entries):
  tree.GetEntry(i)
  ngen = int(tree.GetLeaf("nGenPart").GetValue())
  #for idx,g in enumerate(range(ngen)):
  #  mom = get "GenPart_genPartIdxMother"[idx]
  #  id_ = get "GenPart_pdgId"[idx]
  #  comesfrom = str(mom)+'.'+gettype("GenPart_pdgId"[mom])
  #  camefrom[idx] = [mom]
  if not maketest: print(f'{i+1} ==========')
  for idx,g in enumerate(range(ngen)):
    mom = int(tree.GetLeaf("GenPart_genPartIdxMother").GetValue(idx))
    momid_ = int(tree.GetLeaf("GenPart_pdgId").GetValue(mom))
    id_ = int(tree.GetLeaf("GenPart_pdgId").GetValue(idx))
    if not maketest:
      print(f'{idx}: particle {gettype(id_)} from {mom}')
    if maketest: # TheTest(gettype(id_),mom)
      if abs(momid_) == 113:
        print(f'{idx}: particle {gettype(id_)} has {gettype(momid_)} mother')

  if not maketest: print("LHE parts:")
  nlhe = int(tree.GetLeaf("nLHEPart").GetValue())
  for idx,g in enumerate(range(nlhe)):
    if not maketest: print(f'{idx}: LHE {int(tree.GetLeaf("LHEPart_pdgId").GetValue(idx))}')
  if not maketest: print('==============')
  if not maketest:
    if i>maxent: exit()


