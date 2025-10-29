#include "TMath.h"
#include "TLorentzVector.h"

//Bool_t check_manual_lepton_veto(Int_t nLepton, Int_t Lepton_pdgId[nLepton], Int_t Lepton_iso[nLepton]){
//Bool_t check_manual_lepton_veto(Int_t nLepton, Int_t Lepton_pdgId[], Int_t Lepton_iso[]){
Bool_t check_manual_lepton_veto(Int_t nLepton, int Lepton_pdgId[], int Lepton_iso[]){

  bool pass_manual_lepton_veto = false;

  std::cout << nLepton << std::endl;
  //std::cout << Lepton_pdgId << std::endl;
  //std::cout << Lepton_pdgId.size() << std::endl;

  return pass_manual_lepton_veto;
}

Float_t alternate_mt(Float_t lep_pt, Float_t lep_eta, Float_t lep_phi, Float_t lep_mass,
                     Float_t MET_pt, Float_t MET_phi) {

  Float_t mt = TMath::Sqrt(2 * lep_pt * MET_pt * (1 - TMath::Cos(TVector2::Phi_mpi_pi(lep_phi-MET_phi))));
  /*
  TLorentzVector Lep_vec, MET_vec;
  Lep_vec.SetPtEtaPhiM(lep_pt, lep_eta, lep_phi, lep_mass);
  MET_vec.SetPtEtaPhiM(MET_pt, 0, MET_phi, 0);

  Float_t met_x = MET_vec.Pt()*TMath::Cos(MET_vec.Phi());
  Float_t met_y = MET_vec.Pt()*TMath::Sin(MET_vec.Phi());
  Float_t met_pt = TMath::Sqrt(met_x*met_x + met_y*met_y);
  Float_t sum_pt_2 = (Lep_vec.Pt() + met_pt) * (Lep_vec.Pt() + met_pt);
  Float_t sum_px_2 = (Lep_vec.Px() + met_x)  * (Lep_vec.Px() + met_x);
  Float_t sum_py_2 = (Lep_vec.Py() + met_y)  * (Lep_vec.Py() + met_y);
  Float_t mt2 = sum_pt_2 - sum_px_2 - sum_py_2;
  Float_t mt = 9999;
  //Float_t mt = TMath::Sqrt( sum_pt_2 - sum_px_2 - sum_py_2 );
  if (mt2 < 0) {
    std::cout << "weird value" << std::endl;
    std::cout << mt2 << std::endl;
    mt = 0;
  }
  else {
    mt = TMath::Sqrt( mt2 );
  }
  //mt = TMath::Sqrt(mt2);
  */
  return mt;

}

Float_t kinematic_cuts(Float_t muPt, Float_t muEta, Float_t tauPt, Float_t tauEta,
                       Int_t trg24mu, Int_t trg27mu, Int_t crosstrg) {
  bool passTauPtAndEta  = ((tauPt > 30.0) and (abs(tauEta) < 2.3));
  bool pass25MuPt = ((trg24mu) and (muPt > 25.0) and (abs(muEta) < 2.4));
  bool pass28MuPt = ((trg27mu) and (muPt > 28.0) and (abs(muEta) < 2.4));
  bool passMuPtCrossTrigger = ((crosstrg) and (((21.0 < muPt) and (muPt < 25.0)) and (abs(muEta) < 2.1))\
                                          and ((tauPt > 32.0)       and (abs(tauEta) < 2.1)) );
  bool pass = false;
  if (passTauPtAndEta and (pass25MuPt or pass28MuPt or passMuPtCrossTrigger)) pass = true;
  return pass;
}


