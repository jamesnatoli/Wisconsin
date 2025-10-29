#define skim_cxx
#include "skim.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

#include <iostream>
#include <sstream>

#define WTO3PI true
#define ZMM false

void skim::Loop() {
  TFile newfile("small.root", "recreate");
  if (!newfile.IsOpen())
    std::cout << "Danger!" << std::endl;
  auto newtree = fChain->CloneTree(0);
  
  if (fChain == 0) return;

  Long64_t nentries = fChain->GetEntriesFast();
  std::stringstream ratio;
  
  Long64_t nbytes = 0, nb = 0;
  std::cout << "Processing " << nentries << " events" << std::endl;
  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;
    if ((jentry % 100000) == 0)
      std::cout << "Processed: " << jentry << " / " << nentries << std::endl;
    
    
    // Add various skimming criteria here
    // Currently is an example from Wto3pi Analysis
    // we use preprocessor directives to avoid compile time errors with branch names
#if WTO3PI
    // std::cout << "passing?" << std::endl;
    if (Trigger_ditau) {
      bool pdgId_count   = false;
      bool charge_count  = false;
      bool track_count   = false;
      bool deepTau_count = false;
      bool iso_count     = false;
      bool DM0_count     = false;
      
      for (UInt_t i = 0; i < nPionTriplet; ++i) {
	if (pdgId_count || (abs(PionTriplet_pdgId[i]) == 15*15*15))
	  pdgId_count = true;
	if (charge_count || (abs(PionTriplet_charge[i]) == 1))
	  charge_count = true;
	if (track_count || PionTriplet_trailingIsTrack[i]) {
	  track_count = true;
	}
	if (DM0_count ||
	    ( (Tau_decayMode[Lepton_tauIdx[PionTriplet_FSpions1[i]]] == 0) &&
	      (Tau_decayMode[Lepton_tauIdx[PionTriplet_FSpions2[i]]] == 0) &&
	      (PionTriplet_trailingIsTrack[i] || (!PionTriplet_trailingIsTrack[i] && (Tau_decayMode[Lepton_tauIdx[PionTriplet_FSpions3[i]]] == 0)))
	      )
	    )
	  DM0_count = true;
	// if (deepTau_count || (PionTriplet_LowestDeepTauVsJet[i] >= 15))
	//   deepTau_count = true;
	// if (iso_count || (PionTriplet_pion3_iso[i] < 0.1))
	//   iso_count = true;
      }
      // if (Trigger_ditau && pdgId_count && !LeptonVeto && charge_count && deepTau_count && iso_count)
      // if (Trigger_ditau && !LeptonVeto && pdgId_count && charge_count && METfilters && DM0_count)
      // if (Trigger_ditau && !LeptonVeto && METfilters)
      if (Trigger_ditau)
	newtree->Fill();
    }
#endif
#if ZMM
    if (HLT_IsoMu24 && (HTT_pdgId==-13*13) && (Lepton_muIdx[FSLeptons[0]] != -1) && (Lepton_muIdx[FSLeptons[1]] != -1) && METfilters) {
      //(Sum$(abs(Lepton[Iteration$]_pdgId)==11 && Lepton[Iteration$]_iso<0.3)<1) && (Sum$(abs(Lepton[Iteration$]_pdgId)==13 && Lepton[Iteration$]_iso<0.3)<3))
      int nIsoElectrons = 0;
      int nIsoMuons = 0;
      for (int nlep = 0; nlep < nLepton; ++nlep) {
	if ( abs(Lepton_pdgId[nlep])==11 && Lepton_iso[nlep]<0.3)
	  nIsoElectrons++;
	if ( abs(Lepton_pdgId[nlep])==14 && Lepton_iso[nlep]<0.3)
	  nIsoMuons++;
      } // end loop over leptons
      // if ((nIsoElectrons < 1) && (nIsoMuons < 3))
      if (nIsoElectrons < 1)
	newtree->Fill();	      
    }
#endif
    // std::cout << "No skimming criteria given!!!" << std::endl;
    // continue;
    // newtree->Fill();
  } // end Loop
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
