/*
This script skims our data, without needing to be run in ROOT

To execute: 
g++ -g -O3 -Wall -Wextra -Wpedantic -Wno-unused-parameter -o skim skim.cxx $(root-config --cflags --libs)
./skim

*/

#include "ROOT/RDataFrame.hxx"
#include "ROOT/RVec.hxx"
#include "TStopwatch.h"
#include "TChain.h"

#include <string>
#include <vector>
#include <map>

#define TRAIN  false
#define DATA   true
#define OTHERS true

std::vector<std::string> excludeSamples = {};
std::vector<std::string> includeSamples = {};

std::map<std::string, std::vector<std::string>> dataTakingEras = {
  { "2016preVFP",
    {"Bv1", "Bv2", "C", "D", "E", "F"}
  },
  { "2016postVFP",
    {"F", "G", "H"}
  },
  { "2017",
    {"B", "C", "D", "E", "F"}
  },
  { "2018",
    {"A", "B", "C", "D"}
  }, 
};


// I think I'll need all the systematics too?
std::vector<std::string> variables = {
  "event", // need this for splitting sample in 1/2
  "nTau", "nLepton", "nPionTrack", "nPionTriplet", "nJet", "nCleanJet", // need to save the size of other arrays
  "LeptonVeto", "Trigger_ditau", "METfilters", // event length vars
  // Triplet vars
  "PionTriplet_pdgId", "PionTriplet_trailingIsTrack", "PionTriplet_charge", "PionTriplet_CountOfItsKind", 
  "PionTriplet_pt_Full", "PionTriplet_pt_Track",
  "PionTriplet_eta_Full", "PionTriplet_eta_Track",
  "PionTriplet_phi_Full", "PionTriplet_phi_Track",
  "PionTriplet_MassInv_Full", "PionTriplet_MassInv_Track",
  "PionTriplet_MassInv_12_Full", "PionTriplet_MassInv_23_Full", "PionTriplet_MassInv_13_Full", 
  "PionTriplet_MassInv_12_Track", "PionTriplet_MassInv_23_Track", "PionTriplet_MassInv_13_Track",
  "PionTriplet_MassInv_l1met_Full", "PionTriplet_MassInv_l2met_Full", "PionTriplet_MassInv_l3met_Full", 
  "PionTriplet_MassInv_l1met_Track", "PionTriplet_MassInv_l2met_Track", "PionTriplet_MassInv_l3met_Track", 
  "PionTriplet_LowestDeepTauVsJet", "PionTriplet_LowestDeepTauVsEl", "PionTriplet_LowestDeepTauVsMu",
  "Lepton_tauIdx", "Tau_decayMode", "Tau_pt", "Tau_leadTkPtOverTauPt",
  "PionTriplet_FSpions1", "PionTriplet_FSpions2", "PionTriplet_FSpions3",
  // comparison vars
  "PionTriplet_dR_12_Full", "PionTriplet_dR_13_Full", "PionTriplet_dR_23_Full",
  "PionTriplet_dR_12_Track", "PionTriplet_dR_13_Track", "PionTriplet_dR_23_Track",
  "PionTriplet_deta_12_Full", "PionTriplet_deta_13_Full", "PionTriplet_deta_23_Full",
  "PionTriplet_deta_12_Track", "PionTriplet_deta_13_Track", "PionTriplet_deta_23_Track",
  "PionTriplet_dphi_12_Full", "PionTriplet_dphi_13_Full", "PionTriplet_dphi_23_Full",
  "PionTriplet_dphi_12_Track", "PionTriplet_dphi_13_Track", "PionTriplet_dphi_23_Track",
  // Individual pion vars
  "PionTriplet_pion1_dxy", "PionTriplet_pion2_dxy", "PionTriplet_pion3_dxy",
  "PionTriplet_pion1_dz", "PionTriplet_pion2_dz", "PionTriplet_pion3_dz",
  "PionTriplet_pion1_pt_Full", "PionTriplet_pion2_pt_Full", "PionTriplet_pion3_pt_Full",
  "PionTriplet_pion1_pt_Track", "PionTriplet_pion2_pt_Track", "PionTriplet_pion3_pt_Track",
  "PionTriplet_pion1_eta_Full", "PionTriplet_pion2_eta_Full", "PionTriplet_pion3_eta_Full",
  "PionTriplet_pion1_eta_Track", "PionTriplet_pion2_eta_Track", "PionTriplet_pion3_eta_Track",
  "PionTriplet_pion1_phi_Full", "PionTriplet_pion2_phi_Full", "PionTriplet_pion3_phi_Full",
  "PionTriplet_pion1_phi_Track", "PionTriplet_pion2_phi_Track", "PionTriplet_pion3_phi_Track", 
  "PionTriplet_pion3_iso",
  // Jet Vars
  "Jet_pt", "CleanJet_pt",
  // adding these...
  "LeadingJet_pt", "LeadingCleanJet_pt",
  // These get added by DeclareVariables()
  "PionTriplet_pion1_decayMode", "PionTriplet_pion2_decayMode", 
  "PionTriplet_pion1_rawDeepTau2017v2p1VSe", "PionTriplet_pion2_rawDeepTau2017v2p1VSe",
  "PionTriplet_pion1_rawDeepTau2017v2p1VSmu", "PionTriplet_pion2_rawDeepTau2017v2p1VSmu",
  "PionTriplet_pion1_rawDeepTau2017v2p1VSjet", "PionTriplet_pion2_rawDeepTau2017v2p1VSjet",
  "PionTriplet_pion1_idDeepTau2017v2p1VSe", "PionTriplet_pion2_idDeepTau2017v2p1VSe",
  "PionTriplet_pion1_idDeepTau2017v2p1VSmu", "PionTriplet_pion2_idDeepTau2017v2p1VSmu",
  "PionTriplet_pion1_idDeepTau2017v2p1VSjet", "PionTriplet_pion2_idDeepTau2017v2p1VSjet",
  "PionTriplet_pion1_leadTkPtOverTauPt", "PionTriplet_pion2_leadTkPtOverTauPt", 
  "PionTriplet_MaxDxy", "PionTriplet_MaxDz",
  // These get added by SelectPionTriplet()
  "FSpionTriplet", "FSpionTriplet_Idx",
};
  
// Don't try to process the weighted variables for Data
std::vector<std::string> weightVars = {
  "XSecMCweight", "Generator_weight", "PUweight", "Weight_TTbar_NNLO",
  "PionTriplet_TauSFweight_JetLoose_MuTight_ElVVLoose", "PionTriplet_DxyDz_Weight",
  "LHE_Njets", "L1PreFiringWeight_Nom", "PionTriplet_genMatch_ABCD_FS", 
};

// Special DY
std::vector<std::string> StitchWeight_DY_NLO = {"StitchWeight_DY_NLO"};

std::vector<std::string> systematicVars = {
  // Tau Energy Scale
  "Tau_energyScale",
  "Tau_energyScale_DM0_up", "Tau_energyScale_DM0_down",
  "Tau_energyScale_DM1_up", "Tau_energyScale_DM1_down",
  // Tau SF Weight
  "PionTriplet_TauSFweight_ID_el_eta0to1.5_up", "PionTriplet_TauSFweight_ID_el_eta0to1.5_down",
  "PionTriplet_TauSFweight_ID_el_eta1.5to2.3_up", "PionTriplet_TauSFweight_ID_el_eta1.5to2.3_down",
  "PionTriplet_TauSFweight_ID_mu_eta0to0.4_up", "PionTriplet_TauSFweight_ID_mu_eta0to0.4_down",
  "PionTriplet_TauSFweight_ID_mu_eta0.4to0.8_up", "PionTriplet_TauSFweight_ID_mu_eta0.4to0.8_down",
  "PionTriplet_TauSFweight_ID_mu_eta0.8to1.2_up", "PionTriplet_TauSFweight_ID_mu_eta0.8to1.2_down",
  "PionTriplet_TauSFweight_ID_mu_eta1.2to1.7_up", "PionTriplet_TauSFweight_ID_mu_eta1.2to1.7_down",
  "PionTriplet_TauSFweight_ID_mu_eta1.7to2.3_up", "PionTriplet_TauSFweight_ID_mu_eta1.7to2.3_down",
  "PionTriplet_TauSFweight_ID_tau_stat1_DM0_up", "PionTriplet_TauSFweight_ID_tau_stat1_DM0_down",
  "PionTriplet_TauSFweight_ID_tau_stat1_DM1_up", "PionTriplet_TauSFweight_ID_tau_stat1_DM1_down",
  "PionTriplet_TauSFweight_ID_tau_stat2_DM0_up", "PionTriplet_TauSFweight_ID_tau_stat2_DM0_down",
  "PionTriplet_TauSFweight_ID_tau_stat2_DM1_up", "PionTriplet_TauSFweight_ID_tau_stat2_DM1_down",
  "PionTriplet_TauSFweight_ID_tau_syst_DM0_up", "PionTriplet_TauSFweight_ID_tau_syst_DM0_down",
  "PionTriplet_TauSFweight_ID_tau_syst_DM1_up", "PionTriplet_TauSFweight_ID_tau_syst_DM1_down",
  "PionTriplet_TauSFweight_ID_tau_syst_up", "PionTriplet_TauSFweight_ID_tau_syst_down",
  "PionTriplet_TauSFweight_ID_tau_syst_correlated_up", "PionTriplet_TauSFweight_ID_tau_syst_correlated_down",
  // Tau Trigger
  "PionTriplet_TauSFweight_Trig",
  "PionTriplet_TauSFweight_Trig_DM0_up", "PionTriplet_TauSFweight_Trig_DM0_down",
  "PionTriplet_TauSFweight_Trig_DM1_up", "PionTriplet_TauSFweight_Trig_DM1_down",
  "PionTriplet_TauSFweight_ID",
  // Pileup Weight
  "PUweight_up", "PUweight_down"
  // Photon Shower
  "PSWeight",
  // QCD Scale
  "LHEScaleWeight",
  // Cross Section
  "XSec_up", "XSec_down",
};

/*
 * Declare additional variables
 */
template <typename T>
auto DeclareVariables(T &df) {
  using namespace ROOT::VecOps;
  auto getTauPropertyInt = [](RVec<Int_t> tau_property, RVec<Int_t> lepton_tauidx, RVec<Int_t> fspions) 
  {
    RVec<Int_t> pion_property;
    for (unsigned int i = 0; i < fspions.size(); ++i)
      pion_property.push_back(tau_property[lepton_tauidx[fspions[i]]]);
    return pion_property;
  };

  auto getTauPropertyFloat = [](RVec<Float_t> tau_property, RVec<Int_t> lepton_tauidx, RVec<Int_t> fspions) 
  {
    RVec<Float_t> pion_propertyF;
    for (unsigned int i = 0; i < fspions.size(); ++i)
      pion_propertyF.push_back(tau_property[lepton_tauidx[fspions[i]]]);
    return pion_propertyF;
  };

  auto getTauPropertyUChar = [](RVec<UChar_t> tau_property, RVec<Int_t> lepton_tauidx, RVec<Int_t> fspions) 
  {
    RVec<UChar_t> pion_propertyC;
    for (unsigned int i = 0; i < fspions.size(); ++i)
      pion_propertyC.push_back(tau_property[lepton_tauidx[fspions[i]]]);
    return pion_propertyC;
  };
  
  auto maxPionPropertyFloat = [](RVec<Float_t> pi1_val, RVec<Float_t> pi2_val, RVec<Float_t> pi3_val, UInt_t ntrips) 
  {
    RVec<Float_t> pion_propertyF;
    for (unsigned int i = 0; i < ntrips; ++i)
      pion_propertyF.push_back( std::max( std::max( abs(pi1_val[i]), abs(pi2_val[i])), abs(pi3_val[i])));
    return pion_propertyF;
  };

  return df
    .Define("PionTriplet_pion1_decayMode", getTauPropertyInt, {"Tau_decayMode", "Lepton_tauIdx", "PionTriplet_FSpions1"})
    .Define("PionTriplet_pion2_decayMode", getTauPropertyInt, {"Tau_decayMode", "Lepton_tauIdx", "PionTriplet_FSpions2"})
    .Define("PionTriplet_pion1_rawDeepTau2017v2p1VSe", getTauPropertyFloat, {"Tau_rawDeepTau2017v2p1VSe", "Lepton_tauIdx", "PionTriplet_FSpions1"})
    .Define("PionTriplet_pion1_rawDeepTau2017v2p1VSmu", getTauPropertyFloat, {"Tau_rawDeepTau2017v2p1VSmu", "Lepton_tauIdx", "PionTriplet_FSpions1"})
    .Define("PionTriplet_pion1_rawDeepTau2017v2p1VSjet", getTauPropertyFloat, {"Tau_rawDeepTau2017v2p1VSjet", "Lepton_tauIdx", "PionTriplet_FSpions1"})
    .Define("PionTriplet_pion2_rawDeepTau2017v2p1VSe", getTauPropertyFloat, {"Tau_rawDeepTau2017v2p1VSe", "Lepton_tauIdx", "PionTriplet_FSpions2"})
    .Define("PionTriplet_pion2_rawDeepTau2017v2p1VSmu", getTauPropertyFloat, {"Tau_rawDeepTau2017v2p1VSmu", "Lepton_tauIdx", "PionTriplet_FSpions2"})
    .Define("PionTriplet_pion2_rawDeepTau2017v2p1VSjet", getTauPropertyFloat, {"Tau_rawDeepTau2017v2p1VSjet", "Lepton_tauIdx", "PionTriplet_FSpions2"})
    .Define("PionTriplet_pion1_idDeepTau2017v2p1VSe", getTauPropertyUChar, {"Tau_idDeepTau2017v2p1VSe", "Lepton_tauIdx", "PionTriplet_FSpions1"})
    .Define("PionTriplet_pion1_idDeepTau2017v2p1VSmu", getTauPropertyUChar, {"Tau_idDeepTau2017v2p1VSmu", "Lepton_tauIdx", "PionTriplet_FSpions1"})
    .Define("PionTriplet_pion1_idDeepTau2017v2p1VSjet", getTauPropertyUChar, {"Tau_idDeepTau2017v2p1VSjet", "Lepton_tauIdx", "PionTriplet_FSpions1"})
    .Define("PionTriplet_pion2_idDeepTau2017v2p1VSe", getTauPropertyUChar, {"Tau_idDeepTau2017v2p1VSe", "Lepton_tauIdx", "PionTriplet_FSpions2"})
    .Define("PionTriplet_pion2_idDeepTau2017v2p1VSmu", getTauPropertyUChar, {"Tau_idDeepTau2017v2p1VSmu", "Lepton_tauIdx", "PionTriplet_FSpions2"})
    .Define("PionTriplet_pion2_idDeepTau2017v2p1VSjet", getTauPropertyUChar, {"Tau_idDeepTau2017v2p1VSjet", "Lepton_tauIdx", "PionTriplet_FSpions2"})
    .Define("PionTriplet_pion1_leadTkPtOverTauPt", getTauPropertyFloat, {"Tau_leadTkPtOverTauPt", "Lepton_tauIdx", "PionTriplet_FSpions1"})
    .Define("PionTriplet_pion2_leadTkPtOverTauPt", getTauPropertyFloat, {"Tau_leadTkPtOverTauPt", "Lepton_tauIdx", "PionTriplet_FSpions2"})
    .Define("PionTriplet_MaxDxy", maxPionPropertyFloat, {"PionTriplet_pion1_dxy", "PionTriplet_pion2_dxy", "PionTriplet_pion3_dxy", "nPionTriplet"})
    .Define("PionTriplet_MaxDz", maxPionPropertyFloat, {"PionTriplet_pion1_dz", "PionTriplet_pion2_dz", "PionTriplet_pion3_dz", "nPionTriplet"})
    .Define("LeadingJet_pt", "Jet_pt[0]")
    .Define("LeadingCleanJet_pt", "CleanJet_pt[0]")
    .Define("Tau_pt_Track", "Tau_pt*Tau_leadTkPtOverTauPt");
}

template <typename T>
auto SelectPionTriplet( T &df, const std::string& sample) {
  using namespace ROOT::VecOps;
  std::cout << "Selecting Triplet..." << std::endl;

  // adds an index for the triplet number
  auto getCount = [](UInt_t nPionTriplet) 
  {
    RVec<Int_t> FSpion_Idx;
    for (unsigned int i = 0; i < nPionTriplet; ++i)
      FSpion_Idx.push_back( i);
    return FSpion_Idx;
  };
  
  auto selectTriplet_sig = [](RVec<Int_t> charge, RVec<Int_t> pdgId, RVec<Bool_t> isTrack,
			      RVec<Float_t> VSe, RVec<Float_t> VSmu, RVec<Float_t> VSjet,
			      RVec<Float_t> dR_12, RVec<Float_t> dR_13, RVec<Float_t> dR_23,
			      RVec<Int_t> p1DM, RVec<Int_t> p2DM, RVec<Float_t> p3Iso,
			      RVec<Float_t> p1_trkRatio, RVec<Float_t> p2_trkRatio)
  {
    int selectedTriplet = -1;
    for (unsigned int idx = 0; idx < charge.size(); ++idx) {
      if ((abs(charge[idx]) == 1) && (abs(pdgId[idx]) == 15*15*15) && (isTrack[idx]) &&
	  (VSe[idx] >= 3) && (VSmu[idx] >= 15) &&
	  (std::min(std::min(dR_12[idx], dR_23[idx]), dR_13[idx]) > 0.3) && 
	  (p1DM[idx] <= 0) && (p2DM[idx] <= 0) &&
	  // (VSjet[idx] >= 1) && (p3Iso[idx] < 0.1) &&
	  // (p1_trkRatio[idx] > 0.95) && (p2_trkRatio[idx] > 0.95) && 
	  (selectedTriplet < 0)
	  ) {
	selectedTriplet = idx;
      }
    }
    return selectedTriplet;
  };

  auto selectTriplet_mc = [](RVec<Int_t> charge, RVec<Int_t> pdgId, RVec<Bool_t> isTrack,
			     RVec<Float_t> VSe, RVec<Float_t> VSmu, RVec<Float_t> VSjet,
			     RVec<Float_t> dR_12, RVec<Float_t> dR_13, RVec<Float_t> dR_23,
			     RVec<Int_t> p1DM, RVec<Int_t> p2DM, RVec<Float_t> p3Iso,
			     RVec<Float_t> p1_trkRatio, RVec<Float_t> p2_trkRatio,
			     RVec<Bool_t> ABCD)
  {
    int selectedTriplet = -1;
    for (unsigned int idx = 0; idx < charge.size(); ++idx) {
      if ((abs(charge[idx]) == 1) && (abs(pdgId[idx]) == 15*15*15) && (isTrack[idx]) &&
	  (VSe[idx] >= 3) && (VSmu[idx] >= 15) && (VSjet[idx] >= 1) &&
	  (std::min(std::min(dR_12[idx], dR_23[idx]), dR_13[idx]) > 0.3) && 
	  (p1DM[idx] <= 0) && (p2DM[idx] <= 0) &&
	  // (p1_trkRatio[idx] > 0.95) && (p2_trkRatio[idx] > 0.95) && 
	  !ABCD[idx] &&
	  (selectedTriplet < 0)
	  ) {
	selectedTriplet = idx;
      }
    }
    return selectedTriplet;
  };
  
  // apply different requirements to the backgrounds
  auto selectTriplet_bkg = [](RVec<Int_t> charge, RVec<Int_t> pdgId, RVec<Bool_t> isTrack,
			      RVec<Float_t> VSe, RVec<Float_t> VSmu, RVec<Float_t> VSjet,
			      RVec<Float_t> dR_12, RVec<Float_t> dR_13, RVec<Float_t> dR_23,
			      RVec<Int_t> p1DM, RVec<Int_t> p2DM, RVec<Float_t> p3Iso,
			      RVec<Float_t> p1_trkRatio, RVec<Float_t> p2_trkRatio)
  {
    int selectedTriplet = -1;
    for (unsigned int idx = 0; idx < charge.size(); ++idx) {
      if ((abs(charge[idx]) == 3) && (abs(pdgId[idx]) == 15*15*15) && (isTrack[idx]) &&
	  (VSe[idx] >= 3) && (VSmu[idx] >= 15) && (VSjet[idx] >= 1) &&
	  (std::min(std::min(dR_12[idx], dR_23[idx]), dR_13[idx]) > 0.3) &&
	  (p1DM[idx] <= 0) && (p2DM[idx] <= 0) &&
	  // (p1_trkRatio[idx] > 0.95) && (p2_trkRatio[idx] > 0.95) && 
	  // ( // select regions B, C and D
	  //  ( (VSjet[idx] >= 15) && !(p3Iso[idx] < 0.1)) ||
	  //  (!(VSjet[idx] >= 15) &&  (p3Iso[idx] < 0.1)) ||
	  //  (!(VSjet[idx] >= 15) && !(p3Iso[idx] < 0.1))
	  //   ) &&
	  (selectedTriplet < 0)
	  ) {
	selectedTriplet = idx;
      }
    }
    return selectedTriplet;
  };
    // apply different requirements to the backgrounds
  auto selectTriplet_data = [](RVec<Int_t> charge, RVec<Int_t> pdgId, RVec<Bool_t> isTrack,
			       RVec<Float_t> VSe, RVec<Float_t> VSmu, RVec<Float_t> VSjet,
			       RVec<Float_t> dR_12, RVec<Float_t> dR_13, RVec<Float_t> dR_23,
			       RVec<Int_t> p1DM, RVec<Int_t> p2DM, RVec<Float_t> p3Iso,
			       RVec<Float_t> p1_trkRatio, RVec<Float_t> p2_trkRatio)
  {
    int selectedTriplet = -1;
    for (unsigned int idx = 0; idx < charge.size(); ++idx) {
      if ((abs(charge[idx]) == 1) && (abs(pdgId[idx]) == 15*15*15) && (isTrack[idx]) &&
	  (VSe[idx] >= 3) && (VSmu[idx] >= 15) && (VSjet[idx] >= 1) &&
	  (std::min(std::min(dR_12[idx], dR_23[idx]), dR_13[idx]) > 0.3) &&
	  (p1DM[idx] <= 0) && (p2DM[idx] <= 0) &&
	  // (p1_trkRatio[idx] > 0.95) && (p2_trkRatio[idx] > 0.95) && 
	  // ( // select regions B, C and D
	  // ( (VSjet[idx] >= 15) && !(p3Iso[idx] < 0.1)) && // ||
	  //  (!(VSjet[idx] >= 15) &&  (p3Iso[idx] < 0.1)) ||
	  //  (!(VSjet[idx] >= 15) && !(p3Iso[idx] < 0.1))
	  //   ) &&
	  (selectedTriplet < 0)
	  ) {
	selectedTriplet = idx;
      }
    }
    return selectedTriplet;
  };
  
  // to pass to function that selects triplet
  std::vector<std::string> cutVarsInOrder = { 
    "PionTriplet_charge", "PionTriplet_pdgId", "PionTriplet_trailingIsTrack",
    "PionTriplet_LowestDeepTauVsEl", "PionTriplet_LowestDeepTauVsMu", "PionTriplet_LowestDeepTauVsJet",
    "PionTriplet_dR_12_Track", "PionTriplet_dR_13_Track", "PionTriplet_dR_23_Track",
    "PionTriplet_pion1_decayMode", "PionTriplet_pion2_decayMode", "PionTriplet_pion3_iso",
    "PionTriplet_pion1_leadTkPtOverTauPt", "PionTriplet_pion2_leadTkPtOverTauPt",
  };

  // get the index of the triplet
  auto df1 = df.Define("FSpionTriplet_Idx", getCount, {"nPionTriplet"});

  if (sample == "Data_FT")  {
    // cutVarsInOrder.push_back();
    df1 = df1.Define("FSpionTriplet", selectTriplet_bkg, cutVarsInOrder);
  } else if (sample.find("Tau_Run") != std::string::npos) {
    // cutVarsInOrder.push_back("PionTriplet_pion3_iso");
    df1 = df1.Define("FSpionTriplet", selectTriplet_data, cutVarsInOrder);
  } else if ((sample.find("Wto3pi") != std::string::npos) || (sample.find("WJetsTo3Pi") != std::string::npos)) {
    // cutVarsInOrder.push_back("PionTriplet_pion3_iso");
    df1 = df1.Define("FSpionTriplet", selectTriplet_sig, cutVarsInOrder);
  } else {
    cutVarsInOrder.push_back("PionTriplet_genMatch_ABCD_FS");
    df1 = df1.Define("FSpionTriplet", selectTriplet_mc, cutVarsInOrder);
  }
  
  // // I'm sorry, but we have to do this :( only way to use the 'auto' type  
  // auto selectFunction = (sample == "Data_FT") ? selectTriplet_bkg : selectTriplet_sig;
  // 
  // // select a triplet
  // auto df2 = df1.Define("FSpionTriplet", selectFunction, cutVarsInOrder); 

  // remove events without a valid triplet
  auto df3 = df1.Filter("FSpionTriplet >= 0");

  return df3;
}

template <typename T>
auto flatten( T &df, const std::string& sample) {
  const std::string eventCuts = "Trigger_ditau * METfilters * !LeptonVeto";

  auto df1 = df.Filter(eventCuts); // Cuts to remove whole events
  auto df2 = DeclareVariables(df1); // add variables
  auto dfSelected = SelectPionTriplet(df2, sample); // select triplet

  return dfSelected;
}

int skim( std::string samplesBasePath, std::string channel, std::string outchannel) {
  std::map<std::string, std::string> sampleNames = {
    // {"DYJetsToLL_M-50_NLO",           "DY"},
    // {"DYJetsToLL_M-10to50_NLO",       "DY"},
    // {"DYJetsToLL_M-50_Pt650-Inf_NLO", "DY"},
    // {"DYJetsToLL_M-50_Pt50-100_NLO",  "DY"},
    // {"DYJetsToLL_M-50_Pt400-650_NLO", "DY"},
    // {"DYJetsToLL_M-50_Pt250-400_NLO", "DY"},
    // {"DYJetsToLL_M-50_Pt100-250_NLO", "DY"},
    // {"DYJetsToLL_M-50_Pt0-50_NLO",    "DY"},
    // // {"DY1JetsToLL_M-50",            "DY"},
    // // {"DY2JetsToLL_M-50",            "DY"},
    // // {"DY3JetsToLL_M-50",            "DY"},
    // // {"DY4JetsToLL_M-50",            "DY"},
    // // {"DYJetsToLL_M-10to50",         "DY"},
    // // {"DYJetsToLL_M-50",             "DY"},
    // {"ST_s-channel_hadronicDecays", "ST"},
    // {"ST_s-channel_leptonDecays",   "ST"},
    // {"ST_t-channel_antitop",        "ST"},
    // {"ST_t-channel_top",            "ST"},
    // {"ST_tW_antitop",               "ST"},
    // {"ST_tW_top",                   "ST"},
    {"SignalWJetsTo3Pi_Minus",      "Wto3pi"},
    {"SignalWJetsTo3Pi_Plus",       "Wto3pi"},
    // {"TTTo2L2Nu",                   "TT"},
    // {"TTToHadronic",                "TT"},
    // {"TTToSemiLeptonic",            "TT"},
    // {"TTW",                         "TTV"},
    // {"TTZ",                         "TTV"},
    // // We'll add data seperately
    // {"W0JetsToLNu",                "W+Jets"},
    // {"W1JetsToLNu",                "W+Jets"},
    // {"W2JetsToLNu",                "W+Jets"},
    // {"WJetsToLNu",                 "W+Jets"},
    // {"WWTo1L1Nu2Q",                "VV"},
    // {"WWTo2L2Nu",                  "VV"},
    // {"WWTo4Q",                     "VV"},
    // {"WWW",                        "VVV"},
    // {"WWZ",                        "VVV"},
    // {"WZTo1L1Nu2Q",                "VV"},
    // {"WZTo1L3Nu",                  "VV"},
    // {"WZTo2L2Q",                   "VV"},
    // {"WZTo3L1Nu",                  "VV"},
    // {"WZZ",                        "VVV"},
    // {"ZZTo2L2Nu",                  "VV"},
    // {"ZZTo2L2Q",                   "VV"},
    // {"ZZTo2Nu2Q",                  "VV"},
    // {"ZZTo4L",                     "VV"},
    // {"ZZTo4Q",                     "VV"},
    // {"ZZZ",                        "VVV"},
  };

  // filename --> directory
  std::map<std::string, std::string> trainingSamples = {
    // We'll add data seperately
    // {"Tau_Run", "Data"}, 
    // {"SignalWJetsTo3Pi_Minus_FT", "Wto3pi"},
    // {"SignalWJetsTo3Pi_Plus_FT",  "Wto3pi"},
  };
  
  // for multithreading
  ROOT::EnableImplicitMT();
  const auto poolSize = ROOT::GetThreadPoolSize();
  std::cout << "Pool size: " << poolSize << std::endl;

  // Store the lists of filenames mapped to a sample label
  std::map<std::string, std::vector<std::string>> sampleLists = {};

  // Take care of data (annoying)...
#if DATA
  for (auto& dataYear : dataTakingEras) {
    if (channel.find( dataYear.first) != std::string::npos) {
      for (auto& era : dataYear.second) {
	std::string fullEntry = "Tau_Run";
	if (dataYear.first.find("2016") != std::string::npos)
	  fullEntry += "2016" + era;
	else
	  fullEntry += dataYear.first + era;
	trainingSamples[fullEntry] = "Data";
	sampleNames[fullEntry] = "Data";
      }
    }
  }
#endif

#if TRAIN
  // treat the training samples especially
  for (auto &names : trainingSamples) {
    std::string filePath = samplesBasePath + names.second + "/" + names.first + "_" + channel + "*.root";
    std::string label = names.second + "_FT";
    if (sampleLists.find(label) != sampleLists.end())
      sampleLists[label].push_back( filePath);
    else
      sampleLists[label] = { filePath};
  }
#endif

  // now map the rest
#if OTHERS
  bool skipMe = false;
  for (auto &names : sampleNames) {

    // Filter?
    for (auto ex : excludeSamples) {
      if (names.first.find(ex) != std::string::npos) {
	skipMe = true;
	std::cout << "Excluding... " << names.first << std::endl;
      }
    }
    
    for (auto in : includeSamples) {
      if (names.first.find(in) == std::string::npos) {
	skipMe = true;
      } else {
	std::cout << "Including... " << names.first << std::endl;
	skipMe = false;
      }
    }

    if (skipMe)
      continue;

    std::string filePath = samplesBasePath + names.second + "/" + names.first + "_" + channel + "*.root";
    if (sampleLists.find(names.first) != sampleLists.end())
      sampleLists[names.first].push_back( filePath);
    else
      sampleLists[names.first] = { filePath};
  }
#endif

  for (auto &i : sampleLists) {
    std::cout << i.first << "-->" << std::endl;
    for (auto ele : i.second)
      std::cout << "\t" << ele << std::endl;
  }

  std::vector<std::string> finalVariables = {};
  for (auto &sample : sampleLists) {
    std::cout << "\n>>> Processing sample: " << sample.first << std::endl;
    TStopwatch time;
    time.Start();

    // load the root files in to a dataframe
    // ROOT::RDataFrame df("Events", samplesBasePath + sample.second + "/" + sample.first + ".root");
    ROOT::RDataFrame df("Events", sample.second);
    std::cout << "Number of events: " << *df.Count() << std::endl;
    float entriesBefore = *df.Count();

    // do the work
    auto dfFinal = flatten(df, sample.first);

    // check for missing variables to avoid errors in Snapshot()
    auto colNames = dfFinal.GetColumnNames();
    std::vector<std::string> missingVars;
    for (auto finalVar : finalVariables)
      if ( std::find( colNames.begin(), colNames.end(), finalVar) == colNames.end())
	missingVars.push_back( finalVar);
    
    if (missingVars.size() > 0) {
      for (auto missVar : missingVars)
	std::cout << "Missing: " << missVar << std::endl;
      return -1;
    }

    // only add the weight variables to the MC samples
    finalVariables.insert( finalVariables.end(), variables.begin(), variables.end());
    if ((sample.first != "Data") && (sample.first != "Data_FT") &&
	(sample.first.find("Tau_Run") == std::string::npos)) {
      if (sample.first.find("DY") == std::string::npos) {
	finalVariables.insert( finalVariables.end(), weightVars.begin(), weightVars.end());
      } else {
	std::cout << "Adding StitchWeight_DY_NLO..." << std::endl;
	finalVariables.insert( finalVariables.end(), weightVars.begin(), weightVars.end());
	finalVariables.insert( finalVariables.end(), StitchWeight_DY_NLO.begin(), StitchWeight_DY_NLO.end());
      }
    }
    
    // get the cutflow report
    auto report = dfFinal.Report();
    float entriesAfter = *dfFinal.Count();
    std::cout << "Remaining events: " << *dfFinal.Count() << std::endl;
    
    float ratio = (entriesAfter > 0) ? (entriesAfter / entriesBefore) : 0;
    std::cout << "Selection Fraction: " << ratio << std::endl;

    // save the flattened dataframe to a ROOT file
    std::string prefix = "root_files/";
    std::string outname  = prefix + sample.first + "_" + outchannel + "_SkimSel.root";
    dfFinal.Snapshot( "Events", outname, finalVariables);
    finalVariables.clear();
    std::cout << "Created file: " << outname << std::endl;
    time.Stop();

    // if (*dfFinal.Count() == 0) {
    //   TFile* temp = TFile::Open( outname.c_str(), "UPDATE");
    //   if (!temp->Get("Events")) {
    // 	std::cout << "No TTree named 'Events', adding to file: " << outname << std::endl;
    // 	TTree tree("Events", "Events");
    // 	tree.Write();	
    //   }
    // }
    
    report->Print();
    time.Print();
  } //  end sample loop
  return 0;
}

int main( int argc, char** argv) {
  std::string samplesBasePath = "/hdfs/store/user/jnatoli/NanoTauAnalysis/analysis/";
  std::string tag = "";
    
  // skim( samplesBasePath + "Wto3pi_2018_fromstep1/", "Wto3pi_2018_GEN_TYPE_TEST", "Wto3pi_2018" + tag + "_ABCD_FS");
  skim( samplesBasePath + "Wto3pi_2017_fromstep1/", "Wto3pi_2017_ABCD_FS", "Wto3pi_2017" + tag + "_ABCD_FS");
  skim( samplesBasePath + "Wto3pi_2016_postVFP_fromstep1/", "Wto3pi_2016postVFP_ABCD_FS", "Wto3pi_2016postVFP" + tag + "_ABCD_FS");
  skim( samplesBasePath + "Wto3pi_2016_preVFP_fromstep1/", "Wto3pi_2016preVFP_ABCD_FS", "Wto3pi_2016preVFP" + tag + "_ABCD_FS");
  
  std::cout << "\nAll Done :)" << std::endl;
}
