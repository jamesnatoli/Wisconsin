#define skim_cxx
#include "skim.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

#include <iostream>
#include <sstream>

void skim::Loop() {
  TFile newfile("small.root", "recreate");
  if (!newfile.IsOpen())
    std::cout << "Danger!" << std::endl;
  auto newtree = fChain->CloneTree(0);
  
  if (fChain == 0) return;

  Long64_t nentries = fChain->GetEntriesFast();
  std::stringstream ratio;
  
  Long64_t nbytes = 0, nb = 0;
  std::cout << nentries << " events processing" << std::endl;
  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;
    
    // Add various skimming criteria here
    // Currently is an example from Wto3pi Analysis
    
    if (nPionTriplet > 0)
      newtree->Fill();
  }
  newfile.Write();
  Long64_t newtree_nentries = newtree->GetEntriesFast();
  std::cout << newtree_nentries << " events passed ("
	    << ( 100 * newtree_nentries / nentries)
	    << "%)\n" << std::endl;
}

int main( int argc, char** argv) {
  // Create an object of our new class
  skim s;
  // And call the Loop() function on it 
  s.Loop();
}
