/*
This script skims our data, without needing to be run in ROOT

To execute: 
g++ -g -O3 -Wall -Wextra -Wpedantic -Wno-unused-parameter -o skim_zmm skim_ZMM.cxx $(root-config --cflags --libs)
./skim_zmm

*/

#include <ROOT/RDataFrame.hxx>
#include <ROOT/RVec.hxx>
#include <ROOT/RDFHelpers.hxx>
#include <TLorentzVector.h>
#include <TStopwatch.h>
#include <TChain.h>
#include <Math/VectorUtil.h>

#include <string>
#include <vector>
#include <map>

// I think I'll need all the systematics too?
std::vector<std::string> variables = {
  "LeptonVeto", "Trigger_ditau", "METfilters",
  "PionTriplet_pdgId", "PionTriplet_trailingIsTrack", "PionTriplet_charge", "PionTriplet_CountOfItsKind",
  "PionTriplet_pion1_DM", "PionTriplet_pion2_DM",
  "PionTriplet_pion1_dxy", "PionTriplet_pion2_dxy", "PionTriplet_pion3_dxy",
  "PionTriplet_pion1_dz", "PionTriplet_pion2_dz", "PionTriplet_pion3_dz",
  "PionTriplet_LowestDeepTauVsEl", "PionTriplet_LowestDeepTauVsMu", "PionTriplet_LowestDeepTauVsJet",
  "PionTriplet_pion3_iso",
  "nTau", "nPionTrack", "nPionTriplet", "event",
  // *** TRAINING VARIABLES ***
  "PionTriplet_pt_Full", "PionTriplet_eta_Full", "PionTriplet_phi_Full", 
  "PionTriplet_MassInv_Full", 
  "PionTriplet_MassInv_12_Full", "PionTriplet_MassInv_23_Full", "PionTriplet_MassInv_13_Full",
  "PionTriplet_dR_12_Full", "PionTriplet_dR_13_Full", "PionTriplet_dR_23_Full",
  "PionTriplet_pion1_pt_Full", "PionTriplet_pion2_pt_Full", "PionTriplet_pion3_pt_Full",
  "HTT_m_vis", // just in case...
};
  
// Don't try to process the weighted variables for Data
std::vector<std::string> weightVars = {
  "Generator_weight", "XSecMCweight", "PUweight", "MuSFweight",
  "Weight_TTbar_NNLO", "StitchWeight_DY_NLO",
  // Need to add these
  "PionTriplet_TauSFweight_JetLoose_MuTight_ElVVLoose",
  "PionTriplet_genMatch_ABCD_FS",
};

/*
 * Declare additional variables
 */
template <typename T>
auto HighLevelVariables(T &df) {
  using namespace ROOT::VecOps;
  
  auto getDeltaR = [](RVec<Float_t> p1_pt, RVec<Float_t> p1_eta, RVec<Float_t> p1_phi, Float_t p1_mass,
		      RVec<Float_t> p2_pt, RVec<Float_t> p2_eta, RVec<Float_t> p2_phi, Float_t p2_mass) 
  {
    RVec<Float_t> deltaR;
    auto p1 = ROOT::Math::PtEtaPhiMVector( p1_pt[0], p1_eta[0], p1_phi[0], p1_mass);
    auto p2 = ROOT::Math::PtEtaPhiMVector( p2_pt[0], p2_eta[0], p2_phi[0], p2_mass);
    deltaR.push_back(ROOT::Math::VectorUtil::DeltaR( p1, p2));
    return deltaR;
  };

  auto getPartInvMass = [](RVec<Float_t> p1_pt, RVec<Float_t> p1_eta, RVec<Float_t> p1_phi, Float_t p1_mass,
			   RVec<Float_t> p2_pt, RVec<Float_t> p2_eta, RVec<Float_t> p2_phi, Float_t p2_mass)

  {
    RVec<Float_t> Mpart;
    auto p1 = ROOT::Math::PtEtaPhiMVector( p1_pt[0], p1_eta[0], p1_phi[0], p1_mass);
    auto p2 = ROOT::Math::PtEtaPhiMVector( p2_pt[0], p2_eta[0], p2_phi[0], p2_mass);

    auto ppart = p1 + p2;
    Mpart.push_back( ppart.M());
    return Mpart;
  };

  auto getW = [](RVec<Float_t> p1_pt, RVec<Float_t> p1_eta, RVec<Float_t> p1_phi,
		 RVec<Float_t> p2_pt, RVec<Float_t> p2_eta, RVec<Float_t> p2_phi,
		 RVec<Float_t> p3_pt, RVec<Float_t> p3_eta, RVec<Float_t> p3_phi)
  {
    RVec<Float_t> PtEtaPhiMVector;
    auto p1 = ROOT::Math::PtEtaPhiMVector( p1_pt[0], p1_eta[0], p1_phi[0], 0.1057128);
    auto p2 = ROOT::Math::PtEtaPhiMVector( p2_pt[0], p2_eta[0], p2_phi[0], 0.1057128);
    auto p3 = ROOT::Math::PtEtaPhiMVector( p3_pt[0], p3_eta[0], p3_phi[0], 0.13952637);
    
    auto W = p1 + p2 + p3;
    PtEtaPhiMVector.push_back( W.Pt());
    PtEtaPhiMVector.push_back( W.Eta());
    PtEtaPhiMVector.push_back( W.Phi());
    PtEtaPhiMVector.push_back( W.M());
    return PtEtaPhiMVector;
  };

  auto returnFloatVector = []( Float_t in_float) {
    RVec<Float_t> float_vec;
    float_vec.push_back(in_float);
    return float_vec;
  };
  
  return df
    // We'll need these masses later
    .Define("mass_Muon", "0.1057128f")
    .Define("mass_Pion", "0.13952637f")
    // Various combinations of 'pions'
    .Define("PionTriplet_dR_12_Full", getDeltaR,
	    {"PionTriplet_pion1_pt_Full", "PionTriplet_pion1_eta", "PionTriplet_pion1_phi", "mass_Muon",
	     "PionTriplet_pion2_pt_Full", "PionTriplet_pion2_eta", "PionTriplet_pion2_phi", "mass_Muon"})
    .Define("PionTriplet_dR_13_Full", getDeltaR,
	    {"PionTriplet_pion1_pt_Full", "PionTriplet_pion1_eta", "PionTriplet_pion1_phi", "mass_Muon",
	     "PionTriplet_pion3_pt_Full", "PionTriplet_pion3_eta", "PionTriplet_pion3_phi", "mass_Pion"})
    .Define("PionTriplet_dR_23_Full", getDeltaR,
	    {"PionTriplet_pion2_pt_Full", "PionTriplet_pion2_eta", "PionTriplet_pion2_phi", "mass_Muon",
	     "PionTriplet_pion3_pt_Full", "PionTriplet_pion3_eta", "PionTriplet_pion3_phi", "mass_Pion"})
    .Define("PionTriplet_MassInv_12_Full", getPartInvMass,
	    {"PionTriplet_pion1_pt_Full", "PionTriplet_pion1_eta", "PionTriplet_pion1_phi", "mass_Muon",
	     "PionTriplet_pion2_pt_Full", "PionTriplet_pion2_eta", "PionTriplet_pion2_phi", "mass_Muon"})
    .Define("PionTriplet_MassInv_13_Full", getPartInvMass,
	    {"PionTriplet_pion1_pt_Full", "PionTriplet_pion1_eta", "PionTriplet_pion1_phi", "mass_Muon",
	     "PionTriplet_pion3_pt_Full", "PionTriplet_pion3_eta", "PionTriplet_pion3_phi", "mass_Pion"})
    .Define("PionTriplet_MassInv_23_Full", getPartInvMass,
	    {"PionTriplet_pion2_pt_Full", "PionTriplet_pion2_eta", "PionTriplet_pion2_phi", "mass_Muon",
	     "PionTriplet_pion3_pt_Full", "PionTriplet_pion3_eta", "PionTriplet_pion3_phi", "mass_Pion"})
    // Here we'll fill a vector with pt, eta, phi, and inv mass... in that arrangement
    .Define("PionTriplet_PtEtaPhiM", getW,
	    {"PionTriplet_pion1_pt_Full", "PionTriplet_pion1_eta", "PionTriplet_pion1_phi",
	     "PionTriplet_pion2_pt_Full", "PionTriplet_pion2_eta", "PionTriplet_pion2_phi",
	     "PionTriplet_pion3_pt_Full", "PionTriplet_pion3_eta", "PionTriplet_pion3_phi"})
    // Now get those values, exactly how they were stored
    // they need to be wrapped in the RVec such that they are stored as arrays, even though they are single valued
    .Define( "dummy_float", "1.0")
    .Redefine("dummy_float", "PionTriplet_PtEtaPhiM[0]").Define("PionTriplet_pt_Full", returnFloatVector, {"dummy_float"})
    .Redefine("dummy_float", "PionTriplet_PtEtaPhiM[1]").Define("PionTriplet_eta_Full", returnFloatVector, {"dummy_float"})
    .Redefine("dummy_float", "PionTriplet_PtEtaPhiM[2]").Define("PionTriplet_phi_Full", returnFloatVector, {"dummy_float"})
    .Redefine("dummy_float", "PionTriplet_PtEtaPhiM[3]").Define("PionTriplet_MassInv_Full", returnFloatVector, {"dummy_float"});
}

// *** NOT USED ***
template <typename T>
auto SelectPionTriplet( T &df, const std::string& sample) {
  using namespace ROOT::VecOps;
  std::cout << "Selecting Triplet..." << std::endl;
  
  auto buildTriplet = [](RVec<Int_t> charge, RVec<Int_t> lep_pdgId, RVec<Int_t> pdgId, RVec<Bool_t> isTrack,
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
	  (selectedTriplet < 0)
	  ) {
	selectedTriplet = idx;
      }
    }
    return selectedTriplet;
  };
}


int skim( std::string infile) {
  using namespace ROOT::VecOps;
  
  // for multithreading
  ROOT::EnableImplicitMT();
  const auto poolSize = ROOT::GetThreadPoolSize();
  std::cout << "Pool size: " << poolSize << std::endl;

  std::cout << "\n>>> Processing file(s): " << infile << std::endl;
  TStopwatch time;
  time.Start();

  // load the root files in to a dataframe
  ROOT::RDataFrame df("Events", infile);
  std::cout << "Number of events: " << *df.Count() << std::endl;

  auto returnIntVector = []( Int_t in_int) {
    RVec<Int_t> int_vec;
    int_vec.push_back(in_int);
    return int_vec;
  };

  auto returnFloatVector = []( Float_t in_float) {
    RVec<Float_t> float_vec;
    float_vec.push_back(in_float);
    return float_vec;
  };

  auto returnFloatVector_0 = []( RVec<Float_t> f_col) {
    RVec<Float_t> float_vec;
    float_vec.push_back(f_col[0]);
    return float_vec;
  };

  auto returnFloatVector_1 = []( RVec<Float_t> f_col) {
    RVec<Float_t> float_vec;
    float_vec.push_back(f_col[1]);
    return float_vec;
  };

  auto returnCharVector_0 = []( RVec<UChar_t> uc_col) {
    RVec<UChar_t> uchar_vec;
    uchar_vec.push_back(uc_col[0]);
    return uchar_vec;
  };

  auto returnFloatVectorFromChar_0 = []( RVec<UChar_t> uc_col) {
    RVec<Float_t> float_vec;
    float_vec.push_back( (Float_t)uc_col[0]);
    return float_vec;
  };
  
  auto df_selected = df
    .Filter( "HTT_pdgId==-13*13")
    .Filter( "Trigger_SingleMuon")
    .Filter( "!LeptonVeto")
    .Filter( "nLepton == 3")
    .Filter( "nTau == 1")
    .Define( "dummy_int_minus", "-1").Define("dummy_int_zero", "0").Define("dummy_int_one", "1")
    .Define( "dummy_pdgId", "Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2]").Define( "PionTriplet_pdgId", returnIntVector, {"dummy_pdgId"})
    .Define( "PionTriplet_trailingIsTrack", "ROOT::VecOps::RVec<Bool_t>(1)") // dummy
    // .Define( "PionTriplet_trailingIsTrack", returnIntVector, {"dummy_int_one"}) // dummy
    .Define( "dummy_charge", "(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2]) / abs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])").Define( "PionTriplet_charge", returnIntVector, {"dummy_charge"})
    .Define( "PionTriplet_CountOfItsKind", returnIntVector, {"dummy_int_zero"})
    /*
      .Define( "mask_tau", "Lepton_tauIdx > -1")
      .Define( "mask_mu", "Lepton_muIdx > -1")
      .Define( "tauIdx_fromLeptons", "Lepton_tauIdx[mask_tau]")
      .Define( "muIdx_fromLeptons", "Lepton_muIdx[mask_mu]");
    */
    .Define( "PionTriplet_pion1_DM", returnIntVector, {"dummy_int_zero"}) // dummy
    .Define( "PionTriplet_pion2_DM", returnIntVector, {"dummy_int_zero"}) // dummy
    .Define( "PionTriplet_pion1_dxy", returnFloatVector_0, {"Muon_dxy"})
    .Define( "PionTriplet_pion2_dxy", returnFloatVector_1, {"Muon_dxy"})
    .Define( "PionTriplet_pion3_dxy", returnFloatVector_0, {"Tau_dxy"}) 
    .Define( "PionTriplet_pion1_dz", returnFloatVector_0, {"Muon_dz"})
    .Define( "PionTriplet_pion2_dz", returnFloatVector_1, {"Muon_dz"})
    .Define( "PionTriplet_pion3_dz", returnFloatVector_0, {"Tau_dz"})
    .Define( "PionTriplet_pion1_pt_Full", returnFloatVector_0, {"Muon_pt"})
    .Define( "PionTriplet_pion2_pt_Full", returnFloatVector_1, {"Muon_pt"})
    .Define( "PionTriplet_pion3_pt_Full", returnFloatVector_0, {"Tau_pt"})
    .Define( "PionTriplet_pion1_eta", returnFloatVector_0, {"Muon_eta"})
    .Define( "PionTriplet_pion2_eta", returnFloatVector_1, {"Muon_eta"})
    .Define( "PionTriplet_pion3_eta", returnFloatVector_0, {"Tau_eta"})
    .Define( "PionTriplet_pion1_phi", returnFloatVector_0, {"Muon_phi"})
    .Define( "PionTriplet_pion2_phi", returnFloatVector_1, {"Muon_phi"})
    .Define( "PionTriplet_pion3_phi", returnFloatVector_0, {"Tau_phi"}) 
    .Define( "PionTriplet_LowestDeepTauVsEl", returnCharVector_0, {"Tau_idDeepTau2017v2p1VSe"})
    .Define( "PionTriplet_LowestDeepTauVsMu", returnCharVector_0, {"Tau_idDeepTau2017v2p1VSmu"})
    .Define( "PionTriplet_LowestDeepTauVsJet", returnCharVector_0, { "Tau_idDeepTau2017v2p1VSjet"})
    .Define( "PionTriplet_pion3_iso", returnFloatVectorFromChar_0, {"Tau_decayMode"})
    .Define( "nPionTrack", returnIntVector, {"dummy_int_zero"})
    .Define( "nPionTriplet", returnIntVector, {"dummy_int_one"});
  
  auto df_HighLevelVariables = HighLevelVariables( df_selected);

  // this is neat and solves our problem :)
  auto df_weighted = ROOT::RDF::RNode(df_HighLevelVariables);
  if (infile.find("Run") != std::string::npos) {
    df_weighted = df_HighLevelVariables;
  } else {
    df_weighted = df_HighLevelVariables
      .Redefine( "dummy_float", "1.0f").Define( "PionTriplet_TauSFweight_JetLoose_MuTight_ElVVLoose", returnFloatVector, {"dummy_float"}) // dummy
      .Define( "L1PreFiringWeight_Nom", "1")
      .Define( "PionTriplet_genMatch_ABCD_FS", "ROOT::VecOps::RVec<Bool_t>(1)");
  }
  
  // df_MusAndTaus.Display({"", ""}, 25)->Print();
  ROOT::RDF::Experimental::AddProgressBar(df_weighted);

  // only add the weight variables to the MC samples
  std::vector<std::string> finalVariables = {};
  finalVariables.insert( finalVariables.end(), variables.begin(), variables.end());
  if (infile.find("Run") == std::string::npos) {
    std::cout << "Adding weight variables..." << std::endl;
    finalVariables.insert( finalVariables.end(), weightVars.begin(), weightVars.end());
  } 

  // save the new dataframe to a ROOT file
  std::string prefix = "root_files/";
  std::string outfile  = prefix + infile.substr( infile.rfind("/"));

  // clean outfile
  if (outfile.find("_part") != std::string::npos)
    outfile = outfile.substr( 0, outfile.find("_part")) + ".root";

  df_weighted.Snapshot( "Events", outfile, finalVariables);
  finalVariables.clear();
  
  std::cout << "Created file: " << outfile << std::endl;
  time.Stop();  
  time.Print();
  return 0;
}

int main( int argc, char** argv) {

  std::vector<std::string> files_to_process = {
    // "/hdfs/store/user/dmroy/NanoTauAnalysis/analysis/HTauTau_2022preEE_Hlep/DY/DYJetsToLL_M-50_NLO_HTauTau_2022preEE_Hlep_part10*.root",
    "/hdfs/store/user/dmroy/NanoTauAnalysis/analysis/HTauTau_2022preEE_Hlep/DY/DYJetsToLL_M-50_NLO_HTauTau_2022preEE_Hlep_part*.root",
    "/hdfs/store/user/dmroy/NanoTauAnalysis/analysis/HTauTau_2022preEE_Hlep/Data/Muon_Run2022C_HTauTau_2022preEE_Hlep_part*.root",
    "/hdfs/store/user/dmroy/NanoTauAnalysis/analysis/HTauTau_2022preEE_Hlep/Data/Muon_Run2022D_HTauTau_2022preEE_Hlep_part*.root",
  };

  for (auto files : files_to_process)
    skim( files);
  
  std::cout << "\nAll Done :)" << std::endl;
}
