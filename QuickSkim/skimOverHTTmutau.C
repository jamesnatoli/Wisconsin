#define skim_cxx
#include "skim.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

#include <iostream>

void skim::Loop() {
  TFile newfile("small.root", "recreate");
  if (!newfile.IsOpen())
    std::cout << "Danger!" << std::endl;
  auto newtree = fChain->CloneTree(0);
  
  if (fChain == 0) return;

  Long64_t nentries = fChain->GetEntriesFast();
  
  Long64_t nbytes = 0, nb = 0;
  std::cout << "Processing " << nentries << " events" << std::endl;
  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;

    // Add various skimming criteria here
 
    // general requirements
    //bool bad_event      = (HTT_SRevent || HTT_SSevent || HTT_ARevent); // removes DR_AR region! goofs FF estimate!
    bool pass_basic_filters = (METfilters) && (LeptonVeto==0);

    // FS skim
    bool FS_ditau  = (HTT_pdgId == -15*15 || HTT_pdgId == 15*15);
    bool FS_mutau  = (HTT_pdgId == -13*15 || HTT_pdgId == 13*15);
    bool FS_etau   = (HTT_pdgId == -11*15 || HTT_pdgId == 11*15);
    bool FS_dimuon = (HTT_pdgId == -13*13 || HTT_pdgId == 13*13);

    if (FS_mutau && pass_basic_filters) { 
      newtree->Fill();
    }
  }
  newfile.Write();
  std::cout << newtree->GetEntriesFast() << " events passed\n" << std::endl;
}

int main( int argc, char** argv) {
  skim s;
  s.Loop();
}

