#define stitchStudy_cxx
#include "stitchStudy.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

#include "utils.C"

void stitchStudy::Loop() {
  if (fChain == 0) return;
  
  Long64_t nentries = fChain->GetEntriesFast();
  if (nentries == TTree::kMaxEntries)
    nentries = fChain->GetEntries();

  // Histogram Parking
  TH1F* hist = new TH1F( "hist", "", 100, 0, 1000);
  
  std::cout << ">>> Looping " << nentries << " Events" << std::endl;
  std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();
  Long64_t nbytes = 0, nb = 0;
  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    progressBar( jentry, nentries, start);
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;
    
    // Select dimuon events
    std::vector<int> goodIsoMuons = {};
    if (HLT_IsoMu24 && METfilters && (nMuon > 1)) {
      for (int nmu = 0; nmu < nMuon; ++nmu) {
        if ((goodIsoMuons.size() > 1) &&
	    (abs(Muon_pdgId[nmu]) == 13) &&
	    (Muon_pt[nmu] > 10) &&
	    (abs(Muon_eta[nmu]) < 2.4) &&
	    (abs(Muon_dxy[nmu]) < 0.045) &&
	    (abs(Muon_dz[nmu]) < 0.2) &&
	    (Muon_mediumId[nmu]) &&
	    (Muon_pfRelIso04_all[nmu] < 0.3)
	    ) 
	  goodIsoMuons.push_back(nmu);
      } // end loop over leptons
      
      if (goodIsoMuons.size() > 1) {
	TLorentzVector mu1( Muon_pt[goodIsoMuons[0]], Muon_eta[goodIsoMuons[0]], Muon_phi[goodIsoMuons[0]], 0.105);
	TLorentzVector mu2( Muon_pt[goodIsoMuons[1]], Muon_eta[goodIsoMuons[1]], Muon_phi[goodIsoMuons[1]], 0.105);
	hist->Fill( (mu1+mu2).Pt());
      } // goodIsoMuons
    } // good events
  } // event loop
}
