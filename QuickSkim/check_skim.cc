#include "TROOT.h"
#include "TFile.h"
#include "TTree.h"

#include <string>
#include <iostream>
#include <glob.h>

// compile
// g++ -Wall -g `root-config --glibs --cflags` check_skim.cc -o check_skim.exe
// use
// ./check_skim.exe "/eos/user/b/ballmond/NanoTauAnalysis/analysis/HTauTau_2022_fromstep1_skimmed/DY/"

std::pair<int, int> check_skim(const char* filename) { 

  TFile *_file0 = TFile::Open(filename);
  TTree* tree = (TTree*)_file0->Get("Events");

  int nEvents = tree->GetEntries();
  // count AR events
  /*
  int nEventsPassing = tree->Draw("run", "(HTT_ARevent) & \
                                  (METfilters) & (LeptonVeto==0) & abs(HTT_pdgId)==15*15 & (Trigger_ditau)\
                                  ", "goff");
  */
  // count SS events
  int nEventsPassing = tree->Draw("run", "(HTT_SSevent) & \
                                  (METfilters) & (LeptonVeto==0) & abs(HTT_pdgId)==15*15 & (Trigger_ditau)\
                                  ", "goff");

// dimuon cuts
/*
  int nEventsPassing = tree->Draw("HLT_IsoMu24", \
         "((METfilters) & (HTT_pdgId==-13*13) & (HLT_IsoMu24) & \
         (Lepton_pt[FSLeptons[0]] > 26) & (Lepton_pt[FSLeptons[1]] > 20) & \
         (Lepton_iso[FSLeptons[0]] < 0.15) & (Lepton_iso[FSLeptons[1]] < 0.15) & \
         (HTT_dR > 0.5) & (HTT_m_vis > 20) & \
         (Sum$(abs(Lepton[Iteration$]_pdgId)==11 & Lepton[Iteration$]_iso<0.3)<1) & \
         (Sum$(abs(Lepton[Iteration$]_pdgId)==13 & Lepton[Iteration$]_iso<0.3)<3) & \
         (Lepton[FSLeptons[0]]_muIdx!=-1) & (Lepton[FSLeptons[1]]_muIdx!=-1))*Generator_weight\
         ", "goff");
         // "This should work" --Dennis
*/
         // checked that precut (last line) has no effect on final yield
         //(check_manual_lepton_veto(nLepton, Lepton_pdgId, Lepton_iso) > 0)\
         
// mutau cuts
/*
  int nEventsPassing = tree->Draw("HTT_SRevent", \
  "(LeptonVeto==0) && (HTT_SRevent) && (Trigger_mutau) && \
   (METfilters) && (abs(HTT_pdgId)==13*15) &&\
  (kinematic_cuts(Muon_pt[Lepton_muIdx[FSLeptons[0]] + Lepton_muIdx[FSLeptons[1]] + 1],\
                   Muon_eta[Lepton_muIdx[FSLeptons[0]] + Lepton_muIdx[FSLeptons[1]] + 1],\
                   Tau_pt[Lepton_tauIdx[FSLeptons[0]] + Lepton_tauIdx[FSLeptons[1]] + 1],\
                   Tau_eta[Lepton_tauIdx[FSLeptons[0]] + Lepton_tauIdx[FSLeptons[1]] + 1],\
                   HLT_IsoMu24, HLT_IsoMu27,\
                   HLT_IsoMu20_eta2p1_LooseDeepTauPFTauHPS27_eta2p1_CrossL1) > 0) &&\
  (Tau_idDeepTau2018v2p5VSjet[Lepton_tauIdx[FSLeptons[0]] + Lepton_tauIdx[FSLeptons[1]] + 1] >= 5) &&\
  (Tau_idDeepTau2018v2p5VSmu[Lepton_tauIdx[FSLeptons[0]]  + Lepton_tauIdx[FSLeptons[1]] + 1] >= 4) &&\
  (Tau_idDeepTau2018v2p5VSe[Lepton_tauIdx[FSLeptons[0]]   + Lepton_tauIdx[FSLeptons[1]] + 1] >= 1) &&\
  (alternate_mt(Muon_pt[Lepton_muIdx[FSLeptons[0]] + Lepton_muIdx[FSLeptons[1]] + 1],\
                Muon_eta[Lepton_muIdx[FSLeptons[0]] + Lepton_muIdx[FSLeptons[1]] + 1],\
                Muon_phi[Lepton_muIdx[FSLeptons[0]] + Lepton_muIdx[FSLeptons[1]] + 1],\
                Muon_mass[Lepton_muIdx[FSLeptons[0]] + Lepton_muIdx[FSLeptons[1]] + 1],\
                PuppiMET_pt, PuppiMET_phi) < 50.0)\
  ", "goff");
*/
  
  //int nEventsPassing = tree->Draw("HTT_SRevent", "METfilters && abs(HTT_pdgId)==13*13 && HLT_IsoMu24", "goff");
  
  return std::make_pair(nEvents, nEventsPassing);

}

int main(int argc, char** argv)
{

  gROOT->LoadMacro("simple_function.C");

  std::string path = *(argv + 1);
  path.append("*"); // wildcard to grab all files in directory from argument

  int totalEvents = 0;
  int totalEventsPassing = 0;
  glob_t glob_result;
  glob(path.c_str(), GLOB_TILDE, NULL, &glob_result);
  for(unsigned int i=0; i<glob_result.gl_pathc; ++i){
    std::cout << glob_result.gl_pathv[i] << std::endl;
    std::pair<int, int> values = check_skim(glob_result.gl_pathv[i]);
    std::cout << values.first << '\t' << "Events in file" << std::endl;
    std::cout << values.second << '\t' << "Events in file passing criteria" << std::endl;
    totalEvents += values.first;
    totalEventsPassing += values.second;
    std::cout << totalEvents << '\t' << "Partial sum, total events scanned" << std::endl;
    std::cout << totalEventsPassing << '\t' << "Partial sum, total events passing" << std::endl;
  } 

  std::cout << totalEvents << '\t' << "Total events in directory" << std::endl;
  std::cout << totalEventsPassing << '\t' << '\t' << "Total events in directory passing criteria" << std::endl;

}



