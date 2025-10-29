//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Jun  8 16:16:57 2023 by ROOT version 6.24/08
// from TTree Events/Events
// found on file: /hdfs/store/user/jnatoli/NanoTauAnalysis/analysis/Wto3pi_2018_fromstep1//W+Jets/W1JetsToLNu_Wto3pi_2018.root
//////////////////////////////////////////////////////////

#ifndef skim_h
#define skim_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class skim {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   UInt_t          run;
   UInt_t          luminosityBlock;
   ULong64_t       event;
   UInt_t          nboostedTau;
   Float_t         boostedTau_chargedIso[4];   //[nboostedTau]
   Float_t         boostedTau_eta[4];   //[nboostedTau]
   Float_t         boostedTau_leadTkDeltaEta[4];   //[nboostedTau]
   Float_t         boostedTau_leadTkDeltaPhi[4];   //[nboostedTau]
   Float_t         boostedTau_leadTkPtOverTauPt[4];   //[nboostedTau]
   Float_t         boostedTau_mass[4];   //[nboostedTau]
   Float_t         boostedTau_neutralIso[4];   //[nboostedTau]
   Float_t         boostedTau_phi[4];   //[nboostedTau]
   Float_t         boostedTau_photonsOutsideSignalCone[4];   //[nboostedTau]
   Float_t         boostedTau_pt[4];   //[nboostedTau]
   Float_t         boostedTau_puCorr[4];   //[nboostedTau]
   Float_t         boostedTau_rawAntiEle2018[4];   //[nboostedTau]
   Float_t         boostedTau_rawIso[4];   //[nboostedTau]
   Float_t         boostedTau_rawIsodR03[4];   //[nboostedTau]
   Float_t         boostedTau_rawMVAnewDM2017v2[4];   //[nboostedTau]
   Float_t         boostedTau_rawMVAoldDM2017v2[4];   //[nboostedTau]
   Float_t         boostedTau_rawMVAoldDMdR032017v2[4];   //[nboostedTau]
   Int_t           boostedTau_charge[4];   //[nboostedTau]
   Int_t           boostedTau_decayMode[4];   //[nboostedTau]
   Int_t           boostedTau_jetIdx[4];   //[nboostedTau]
   Int_t           boostedTau_rawAntiEleCat2018[4];   //[nboostedTau]
   UChar_t         boostedTau_idAntiEle2018[4];   //[nboostedTau]
   UChar_t         boostedTau_idAntiMu[4];   //[nboostedTau]
   UChar_t         boostedTau_idMVAnewDM2017v2[4];   //[nboostedTau]
   UChar_t         boostedTau_idMVAoldDM2017v2[4];   //[nboostedTau]
   UChar_t         boostedTau_idMVAoldDMdR032017v2[4];   //[nboostedTau]
   Float_t         CaloMET_phi;
   Float_t         CaloMET_pt;
   Float_t         CaloMET_sumEt;
   Float_t         ChsMET_phi;
   Float_t         ChsMET_pt;
   Float_t         ChsMET_sumEt;
   UInt_t          nCorrT1METJet;
   Float_t         CorrT1METJet_area[33];   //[nCorrT1METJet]
   Float_t         CorrT1METJet_eta[33];   //[nCorrT1METJet]
   Float_t         CorrT1METJet_muonSubtrFactor[33];   //[nCorrT1METJet]
   Float_t         CorrT1METJet_phi[33];   //[nCorrT1METJet]
   Float_t         CorrT1METJet_rawPt[33];   //[nCorrT1METJet]
   Float_t         DeepMETResolutionTune_phi;
   Float_t         DeepMETResolutionTune_pt;
   Float_t         DeepMETResponseTune_phi;
   Float_t         DeepMETResponseTune_pt;
   UInt_t          nElectron;
   Float_t         Electron_dEscaleDown[8];   //[nElectron]
   Float_t         Electron_dEscaleUp[8];   //[nElectron]
   Float_t         Electron_dEsigmaDown[8];   //[nElectron]
   Float_t         Electron_dEsigmaUp[8];   //[nElectron]
   Float_t         Electron_deltaEtaSC[8];   //[nElectron]
   Float_t         Electron_dr03EcalRecHitSumEt[8];   //[nElectron]
   Float_t         Electron_dr03HcalDepth1TowerSumEt[8];   //[nElectron]
   Float_t         Electron_dr03TkSumPt[8];   //[nElectron]
   Float_t         Electron_dr03TkSumPtHEEP[8];   //[nElectron]
   Float_t         Electron_dxy[8];   //[nElectron]
   Float_t         Electron_dxyErr[8];   //[nElectron]
   Float_t         Electron_dz[8];   //[nElectron]
   Float_t         Electron_dzErr[8];   //[nElectron]
   Float_t         Electron_eCorr[8];   //[nElectron]
   Float_t         Electron_eInvMinusPInv[8];   //[nElectron]
   Float_t         Electron_energyErr[8];   //[nElectron]
   Float_t         Electron_eta[8];   //[nElectron]
   Float_t         Electron_hoe[8];   //[nElectron]
   Float_t         Electron_ip3d[8];   //[nElectron]
   Float_t         Electron_jetPtRelv2[8];   //[nElectron]
   Float_t         Electron_jetRelIso[8];   //[nElectron]
   Float_t         Electron_mass[8];   //[nElectron]
   Float_t         Electron_miniPFRelIso_all[8];   //[nElectron]
   Float_t         Electron_miniPFRelIso_chg[8];   //[nElectron]
   Float_t         Electron_mvaFall17V2Iso[8];   //[nElectron]
   Float_t         Electron_mvaFall17V2noIso[8];   //[nElectron]
   Float_t         Electron_pfRelIso03_all[8];   //[nElectron]
   Float_t         Electron_pfRelIso03_chg[8];   //[nElectron]
   Float_t         Electron_phi[8];   //[nElectron]
   Float_t         Electron_pt[8];   //[nElectron]
   Float_t         Electron_r9[8];   //[nElectron]
   Float_t         Electron_scEtOverPt[8];   //[nElectron]
   Float_t         Electron_sieie[8];   //[nElectron]
   Float_t         Electron_sip3d[8];   //[nElectron]
   Float_t         Electron_mvaTTH[8];   //[nElectron]
   Int_t           Electron_charge[8];   //[nElectron]
   Int_t           Electron_cutBased[8];   //[nElectron]
   Int_t           Electron_jetIdx[8];   //[nElectron]
   Int_t           Electron_pdgId[8];   //[nElectron]
   Int_t           Electron_photonIdx[8];   //[nElectron]
   Int_t           Electron_tightCharge[8];   //[nElectron]
   Int_t           Electron_vidNestedWPBitmap[8];   //[nElectron]
   Int_t           Electron_vidNestedWPBitmapHEEP[8];   //[nElectron]
   Bool_t          Electron_convVeto[8];   //[nElectron]
   Bool_t          Electron_cutBased_HEEP[8];   //[nElectron]
   Bool_t          Electron_isPFcand[8];   //[nElectron]
   UChar_t         Electron_jetNDauCharged[8];   //[nElectron]
   UChar_t         Electron_lostHits[8];   //[nElectron]
   Bool_t          Electron_mvaFall17V2Iso_WP80[8];   //[nElectron]
   Bool_t          Electron_mvaFall17V2Iso_WP90[8];   //[nElectron]
   Bool_t          Electron_mvaFall17V2Iso_WPL[8];   //[nElectron]
   Bool_t          Electron_mvaFall17V2noIso_WP80[8];   //[nElectron]
   Bool_t          Electron_mvaFall17V2noIso_WP90[8];   //[nElectron]
   Bool_t          Electron_mvaFall17V2noIso_WPL[8];   //[nElectron]
   UChar_t         Electron_seedGain[8];   //[nElectron]
   UInt_t          nFsrPhoton;
   Float_t         FsrPhoton_dROverEt2[3];   //[nFsrPhoton]
   Float_t         FsrPhoton_eta[3];   //[nFsrPhoton]
   Float_t         FsrPhoton_phi[3];   //[nFsrPhoton]
   Float_t         FsrPhoton_pt[3];   //[nFsrPhoton]
   Float_t         FsrPhoton_relIso03[3];   //[nFsrPhoton]
   Int_t           FsrPhoton_muonIdx[3];   //[nFsrPhoton]
   UInt_t          nGenJetAK8;
   Float_t         GenJetAK8_eta[5];   //[nGenJetAK8]
   Float_t         GenJetAK8_mass[5];   //[nGenJetAK8]
   Float_t         GenJetAK8_phi[5];   //[nGenJetAK8]
   Float_t         GenJetAK8_pt[5];   //[nGenJetAK8]
   UInt_t          nGenJet;
   Float_t         GenJet_eta[25];   //[nGenJet]
   Float_t         GenJet_mass[25];   //[nGenJet]
   Float_t         GenJet_phi[25];   //[nGenJet]
   Float_t         GenJet_pt[25];   //[nGenJet]
   UInt_t          nGenPart;
   Float_t         GenPart_eta[116];   //[nGenPart]
   Float_t         GenPart_mass[116];   //[nGenPart]
   Float_t         GenPart_phi[116];   //[nGenPart]
   Float_t         GenPart_pt[116];   //[nGenPart]
   Int_t           GenPart_genPartIdxMother[116];   //[nGenPart]
   Int_t           GenPart_pdgId[116];   //[nGenPart]
   Int_t           GenPart_status[116];   //[nGenPart]
   Int_t           GenPart_statusFlags[116];   //[nGenPart]
   UInt_t          nSubGenJetAK8;
   Float_t         SubGenJetAK8_eta[9];   //[nSubGenJetAK8]
   Float_t         SubGenJetAK8_mass[9];   //[nSubGenJetAK8]
   Float_t         SubGenJetAK8_phi[9];   //[nSubGenJetAK8]
   Float_t         SubGenJetAK8_pt[9];   //[nSubGenJetAK8]
   Float_t         Generator_binvar;
   Float_t         Generator_scalePDF;
   Float_t         Generator_weight;
   Float_t         Generator_x1;
   Float_t         Generator_x2;
   Float_t         Generator_xpdf1;
   Float_t         Generator_xpdf2;
   Int_t           Generator_id1;
   Int_t           Generator_id2;
   Float_t         GenVtx_x;
   Float_t         GenVtx_y;
   Float_t         GenVtx_z;
   UInt_t          nGenVisTau;
   Float_t         GenVisTau_eta[3];   //[nGenVisTau]
   Float_t         GenVisTau_mass[3];   //[nGenVisTau]
   Float_t         GenVisTau_phi[3];   //[nGenVisTau]
   Float_t         GenVisTau_pt[3];   //[nGenVisTau]
   Int_t           GenVisTau_charge[3];   //[nGenVisTau]
   Int_t           GenVisTau_genPartIdxMother[3];   //[nGenVisTau]
   Int_t           GenVisTau_status[3];   //[nGenVisTau]
   Float_t         genWeight;
   Float_t         LHEWeight_originalXWGTUP;
   UInt_t          nLHEPdfWeight;
   Float_t         LHEPdfWeight[103];   //[nLHEPdfWeight]
   UInt_t          nLHEReweightingWeight;
   Float_t         LHEReweightingWeight[1];   //[nLHEReweightingWeight]
   UInt_t          nLHEScaleWeight;
   Float_t         LHEScaleWeight[9];   //[nLHEScaleWeight]
   UInt_t          nPSWeight;
   Float_t         PSWeight[4];   //[nPSWeight]
   UInt_t          nIsoTrack;
   Float_t         IsoTrack_dxy[14];   //[nIsoTrack]
   Float_t         IsoTrack_dz[14];   //[nIsoTrack]
   Float_t         IsoTrack_eta[14];   //[nIsoTrack]
   Float_t         IsoTrack_pfRelIso03_all[14];   //[nIsoTrack]
   Float_t         IsoTrack_pfRelIso03_chg[14];   //[nIsoTrack]
   Float_t         IsoTrack_phi[14];   //[nIsoTrack]
   Float_t         IsoTrack_pt[14];   //[nIsoTrack]
   Float_t         IsoTrack_miniPFRelIso_all[14];   //[nIsoTrack]
   Float_t         IsoTrack_miniPFRelIso_chg[14];   //[nIsoTrack]
   Int_t           IsoTrack_charge[14];   //[nIsoTrack]
   Int_t           IsoTrack_fromPV[14];   //[nIsoTrack]
   Int_t           IsoTrack_pdgId[14];   //[nIsoTrack]
   Bool_t          IsoTrack_isHighPurityTrack[14];   //[nIsoTrack]
   Bool_t          IsoTrack_isPFcand[14];   //[nIsoTrack]
   Bool_t          IsoTrack_isFromLostTrack[14];   //[nIsoTrack]
   UInt_t          nJet;
   Float_t         Jet_area[33];   //[nJet]
   Float_t         Jet_btagDeepB[33];   //[nJet]
   Float_t         Jet_btagDeepCvB[33];   //[nJet]
   Float_t         Jet_btagDeepCvL[33];   //[nJet]
   Float_t         Jet_btagDeepFlavB[33];   //[nJet]
   Float_t         Jet_btagDeepFlavCvB[33];   //[nJet]
   Float_t         Jet_btagDeepFlavCvL[33];   //[nJet]
   Float_t         Jet_btagDeepFlavQG[33];   //[nJet]
   Float_t         Jet_chEmEF[33];   //[nJet]
   Float_t         Jet_chFPV0EF[33];   //[nJet]
   Float_t         Jet_chHEF[33];   //[nJet]
   Float_t         Jet_eta[33];   //[nJet]
   Float_t         Jet_hfsigmaEtaEta[33];   //[nJet]
   Float_t         Jet_hfsigmaPhiPhi[33];   //[nJet]
   Float_t         Jet_mass[33];   //[nJet]
   Float_t         Jet_muEF[33];   //[nJet]
   Float_t         Jet_muonSubtrFactor[33];   //[nJet]
   Float_t         Jet_neEmEF[33];   //[nJet]
   Float_t         Jet_neHEF[33];   //[nJet]
   Float_t         Jet_phi[33];   //[nJet]
   Float_t         Jet_pt[33];   //[nJet]
   Float_t         Jet_puIdDisc[33];   //[nJet]
   Float_t         Jet_qgl[33];   //[nJet]
   Float_t         Jet_rawFactor[33];   //[nJet]
   Float_t         Jet_bRegCorr[33];   //[nJet]
   Float_t         Jet_bRegRes[33];   //[nJet]
   Float_t         Jet_cRegCorr[33];   //[nJet]
   Float_t         Jet_cRegRes[33];   //[nJet]
   Int_t           Jet_electronIdx1[33];   //[nJet]
   Int_t           Jet_electronIdx2[33];   //[nJet]
   Int_t           Jet_hfadjacentEtaStripsSize[33];   //[nJet]
   Int_t           Jet_hfcentralEtaStripSize[33];   //[nJet]
   Int_t           Jet_jetId[33];   //[nJet]
   Int_t           Jet_muonIdx1[33];   //[nJet]
   Int_t           Jet_muonIdx2[33];   //[nJet]
   Int_t           Jet_nElectrons[33];   //[nJet]
   Int_t           Jet_nMuons[33];   //[nJet]
   Int_t           Jet_puId[33];   //[nJet]
   UChar_t         Jet_nConstituents[33];   //[nJet]
   Float_t         L1PreFiringWeight_Dn;
   Float_t         L1PreFiringWeight_ECAL_Dn;
   Float_t         L1PreFiringWeight_ECAL_Nom;
   Float_t         L1PreFiringWeight_ECAL_Up;
   Float_t         L1PreFiringWeight_Muon_Nom;
   Float_t         L1PreFiringWeight_Muon_StatDn;
   Float_t         L1PreFiringWeight_Muon_StatUp;
   Float_t         L1PreFiringWeight_Muon_SystDn;
   Float_t         L1PreFiringWeight_Muon_SystUp;
   Float_t         L1PreFiringWeight_Nom;
   Float_t         L1PreFiringWeight_Up;
   Float_t         LHE_HT;
   Float_t         LHE_HTIncoming;
   Float_t         LHE_Vpt;
   Float_t         LHE_AlphaS;
   UChar_t         LHE_Njets;
   UChar_t         LHE_Nb;
   UChar_t         LHE_Nc;
   UChar_t         LHE_Nuds;
   UChar_t         LHE_Nglu;
   UChar_t         LHE_NpNLO;
   UChar_t         LHE_NpLO;
   UInt_t          nLHEPart;
   Float_t         LHEPart_pt[6];   //[nLHEPart]
   Float_t         LHEPart_eta[6];   //[nLHEPart]
   Float_t         LHEPart_phi[6];   //[nLHEPart]
   Float_t         LHEPart_mass[6];   //[nLHEPart]
   Float_t         LHEPart_incomingpz[6];   //[nLHEPart]
   Int_t           LHEPart_pdgId[6];   //[nLHEPart]
   Int_t           LHEPart_status[6];   //[nLHEPart]
   Int_t           LHEPart_spin[6];   //[nLHEPart]
   UInt_t          nLowPtElectron;
   Float_t         LowPtElectron_ID[8];   //[nLowPtElectron]
   Float_t         LowPtElectron_convVtxRadius[8];   //[nLowPtElectron]
   Float_t         LowPtElectron_deltaEtaSC[8];   //[nLowPtElectron]
   Float_t         LowPtElectron_dxy[8];   //[nLowPtElectron]
   Float_t         LowPtElectron_dxyErr[8];   //[nLowPtElectron]
   Float_t         LowPtElectron_dz[8];   //[nLowPtElectron]
   Float_t         LowPtElectron_dzErr[8];   //[nLowPtElectron]
   Float_t         LowPtElectron_eInvMinusPInv[8];   //[nLowPtElectron]
   Float_t         LowPtElectron_embeddedID[8];   //[nLowPtElectron]
   Float_t         LowPtElectron_energyErr[8];   //[nLowPtElectron]
   Float_t         LowPtElectron_eta[8];   //[nLowPtElectron]
   Float_t         LowPtElectron_hoe[8];   //[nLowPtElectron]
   Float_t         LowPtElectron_mass[8];   //[nLowPtElectron]
   Float_t         LowPtElectron_miniPFRelIso_all[8];   //[nLowPtElectron]
   Float_t         LowPtElectron_miniPFRelIso_chg[8];   //[nLowPtElectron]
   Float_t         LowPtElectron_phi[8];   //[nLowPtElectron]
   Float_t         LowPtElectron_pt[8];   //[nLowPtElectron]
   Float_t         LowPtElectron_ptbiased[8];   //[nLowPtElectron]
   Float_t         LowPtElectron_r9[8];   //[nLowPtElectron]
   Float_t         LowPtElectron_scEtOverPt[8];   //[nLowPtElectron]
   Float_t         LowPtElectron_sieie[8];   //[nLowPtElectron]
   Float_t         LowPtElectron_unbiased[8];   //[nLowPtElectron]
   Int_t           LowPtElectron_charge[8];   //[nLowPtElectron]
   Int_t           LowPtElectron_convWP[8];   //[nLowPtElectron]
   Int_t           LowPtElectron_pdgId[8];   //[nLowPtElectron]
   Bool_t          LowPtElectron_convVeto[8];   //[nLowPtElectron]
   UChar_t         LowPtElectron_lostHits[8];   //[nLowPtElectron]
   Float_t         GenMET_phi;
   Float_t         GenMET_pt;
   Float_t         MET_MetUnclustEnUpDeltaX;
   Float_t         MET_MetUnclustEnUpDeltaY;
   Float_t         MET_covXX;
   Float_t         MET_covXY;
   Float_t         MET_covYY;
   Float_t         MET_phi;
   Float_t         MET_pt;
   Float_t         MET_significance;
   Float_t         MET_sumEt;
   Float_t         MET_sumPtUnclustered;
   UInt_t          nMuon;
   Float_t         Muon_dxy[10];   //[nMuon]
   Float_t         Muon_dxyErr[10];   //[nMuon]
   Float_t         Muon_dxybs[10];   //[nMuon]
   Float_t         Muon_dz[10];   //[nMuon]
   Float_t         Muon_dzErr[10];   //[nMuon]
   Float_t         Muon_eta[10];   //[nMuon]
   Float_t         Muon_ip3d[10];   //[nMuon]
   Float_t         Muon_jetPtRelv2[10];   //[nMuon]
   Float_t         Muon_jetRelIso[10];   //[nMuon]
   Float_t         Muon_mass[10];   //[nMuon]
   Float_t         Muon_miniPFRelIso_all[10];   //[nMuon]
   Float_t         Muon_miniPFRelIso_chg[10];   //[nMuon]
   Float_t         Muon_pfRelIso03_all[10];   //[nMuon]
   Float_t         Muon_pfRelIso03_chg[10];   //[nMuon]
   Float_t         Muon_pfRelIso04_all[10];   //[nMuon]
   Float_t         Muon_phi[10];   //[nMuon]
   Float_t         Muon_pt[10];   //[nMuon]
   Float_t         Muon_ptErr[10];   //[nMuon]
   Float_t         Muon_segmentComp[10];   //[nMuon]
   Float_t         Muon_sip3d[10];   //[nMuon]
   Float_t         Muon_softMva[10];   //[nMuon]
   Float_t         Muon_tkRelIso[10];   //[nMuon]
   Float_t         Muon_tunepRelPt[10];   //[nMuon]
   Float_t         Muon_mvaLowPt[10];   //[nMuon]
   Float_t         Muon_mvaTTH[10];   //[nMuon]
   Int_t           Muon_charge[10];   //[nMuon]
   Int_t           Muon_jetIdx[10];   //[nMuon]
   Int_t           Muon_nStations[10];   //[nMuon]
   Int_t           Muon_nTrackerLayers[10];   //[nMuon]
   Int_t           Muon_pdgId[10];   //[nMuon]
   Int_t           Muon_tightCharge[10];   //[nMuon]
   Int_t           Muon_fsrPhotonIdx[10];   //[nMuon]
   UChar_t         Muon_highPtId[10];   //[nMuon]
   Bool_t          Muon_highPurity[10];   //[nMuon]
   Bool_t          Muon_inTimeMuon[10];   //[nMuon]
   Bool_t          Muon_isGlobal[10];   //[nMuon]
   Bool_t          Muon_isPFcand[10];   //[nMuon]
   Bool_t          Muon_isStandalone[10];   //[nMuon]
   Bool_t          Muon_isTracker[10];   //[nMuon]
   UChar_t         Muon_jetNDauCharged[10];   //[nMuon]
   Bool_t          Muon_looseId[10];   //[nMuon]
   Bool_t          Muon_mediumId[10];   //[nMuon]
   Bool_t          Muon_mediumPromptId[10];   //[nMuon]
   UChar_t         Muon_miniIsoId[10];   //[nMuon]
   UChar_t         Muon_multiIsoId[10];   //[nMuon]
   UChar_t         Muon_mvaId[10];   //[nMuon]
   UChar_t         Muon_mvaLowPtId[10];   //[nMuon]
   UChar_t         Muon_pfIsoId[10];   //[nMuon]
   UChar_t         Muon_puppiIsoId[10];   //[nMuon]
   Bool_t          Muon_softId[10];   //[nMuon]
   Bool_t          Muon_softMvaId[10];   //[nMuon]
   Bool_t          Muon_tightId[10];   //[nMuon]
   UChar_t         Muon_tkIsoId[10];   //[nMuon]
   Bool_t          Muon_triggerIdLoose[10];   //[nMuon]
   UInt_t          nPhoton;
   Float_t         Photon_dEscaleDown[8];   //[nPhoton]
   Float_t         Photon_dEscaleUp[8];   //[nPhoton]
   Float_t         Photon_dEsigmaDown[8];   //[nPhoton]
   Float_t         Photon_dEsigmaUp[8];   //[nPhoton]
   Float_t         Photon_eCorr[8];   //[nPhoton]
   Float_t         Photon_energyErr[8];   //[nPhoton]
   Float_t         Photon_eta[8];   //[nPhoton]
   Float_t         Photon_hoe[8];   //[nPhoton]
   Float_t         Photon_mass[8];   //[nPhoton]
   Float_t         Photon_mvaID[8];   //[nPhoton]
   Float_t         Photon_mvaID_Fall17V1p1[8];   //[nPhoton]
   Float_t         Photon_pfRelIso03_all[8];   //[nPhoton]
   Float_t         Photon_pfRelIso03_chg[8];   //[nPhoton]
   Float_t         Photon_phi[8];   //[nPhoton]
   Float_t         Photon_pt[8];   //[nPhoton]
   Float_t         Photon_r9[8];   //[nPhoton]
   Float_t         Photon_sieie[8];   //[nPhoton]
   Int_t           Photon_charge[8];   //[nPhoton]
   Int_t           Photon_cutBased[8];   //[nPhoton]
   Int_t           Photon_cutBased_Fall17V1Bitmap[8];   //[nPhoton]
   Int_t           Photon_electronIdx[8];   //[nPhoton]
   Int_t           Photon_jetIdx[8];   //[nPhoton]
   Int_t           Photon_pdgId[8];   //[nPhoton]
   Int_t           Photon_vidNestedWPBitmap[8];   //[nPhoton]
   Bool_t          Photon_electronVeto[8];   //[nPhoton]
   Bool_t          Photon_isScEtaEB[8];   //[nPhoton]
   Bool_t          Photon_isScEtaEE[8];   //[nPhoton]
   Bool_t          Photon_mvaID_WP80[8];   //[nPhoton]
   Bool_t          Photon_mvaID_WP90[8];   //[nPhoton]
   Bool_t          Photon_pixelSeed[8];   //[nPhoton]
   UChar_t         Photon_seedGain[8];   //[nPhoton]
   Float_t         Pileup_nTrueInt;
   Float_t         Pileup_pudensity;
   Float_t         Pileup_gpudensity;
   Int_t           Pileup_nPU;
   Int_t           Pileup_sumEOOT;
   Int_t           Pileup_sumLOOT;
   Float_t         PuppiMET_phi;
   Float_t         PuppiMET_phiJERDown;
   Float_t         PuppiMET_phiJERUp;
   Float_t         PuppiMET_phiJESDown;
   Float_t         PuppiMET_phiJESUp;
   Float_t         PuppiMET_phiUnclusteredDown;
   Float_t         PuppiMET_phiUnclusteredUp;
   Float_t         PuppiMET_pt;
   Float_t         PuppiMET_ptJERDown;
   Float_t         PuppiMET_ptJERUp;
   Float_t         PuppiMET_ptJESDown;
   Float_t         PuppiMET_ptJESUp;
   Float_t         PuppiMET_ptUnclusteredDown;
   Float_t         PuppiMET_ptUnclusteredUp;
   Float_t         PuppiMET_sumEt;
   Float_t         RawMET_phi;
   Float_t         RawMET_pt;
   Float_t         RawMET_sumEt;
   Float_t         RawPuppiMET_phi;
   Float_t         RawPuppiMET_pt;
   Float_t         RawPuppiMET_sumEt;
   Float_t         fixedGridRhoFastjetAll;
   Float_t         fixedGridRhoFastjetCentral;
   Float_t         fixedGridRhoFastjetCentralCalo;
   Float_t         fixedGridRhoFastjetCentralChargedPileUp;
   Float_t         fixedGridRhoFastjetCentralNeutral;
   UInt_t          nGenIsolatedPhoton;
   Float_t         GenIsolatedPhoton_eta[3];   //[nGenIsolatedPhoton]
   Float_t         GenIsolatedPhoton_mass[3];   //[nGenIsolatedPhoton]
   Float_t         GenIsolatedPhoton_phi[3];   //[nGenIsolatedPhoton]
   Float_t         GenIsolatedPhoton_pt[3];   //[nGenIsolatedPhoton]
   UInt_t          nTau;
   Float_t         Tau_chargedIso[7];   //[nTau]
   Float_t         Tau_dxy[7];   //[nTau]
   Float_t         Tau_dz[7];   //[nTau]
   Float_t         Tau_eta[7];   //[nTau]
   Float_t         Tau_leadTkDeltaEta[7];   //[nTau]
   Float_t         Tau_leadTkDeltaPhi[7];   //[nTau]
   Float_t         Tau_leadTkPtOverTauPt[7];   //[nTau]
   Float_t         Tau_mass[7];   //[nTau]
   Float_t         Tau_neutralIso[7];   //[nTau]
   Float_t         Tau_phi[7];   //[nTau]
   Float_t         Tau_photonsOutsideSignalCone[7];   //[nTau]
   Float_t         Tau_pt[7];   //[nTau]
   Float_t         Tau_puCorr[7];   //[nTau]
   Float_t         Tau_rawDeepTau2017v2p1VSe[7];   //[nTau]
   Float_t         Tau_rawDeepTau2017v2p1VSjet[7];   //[nTau]
   Float_t         Tau_rawDeepTau2017v2p1VSmu[7];   //[nTau]
   Float_t         Tau_rawIso[7];   //[nTau]
   Float_t         Tau_rawIsodR03[7];   //[nTau]
   Int_t           Tau_charge[7];   //[nTau]
   Int_t           Tau_decayMode[7];   //[nTau]
   Int_t           Tau_jetIdx[7];   //[nTau]
   Bool_t          Tau_idAntiEleDeadECal[7];   //[nTau]
   UChar_t         Tau_idAntiMu[7];   //[nTau]
   Bool_t          Tau_idDecayModeOldDMs[7];   //[nTau]
   UChar_t         Tau_idDeepTau2017v2p1VSe[7];   //[nTau]
   UChar_t         Tau_idDeepTau2017v2p1VSjet[7];   //[nTau]
   UChar_t         Tau_idDeepTau2017v2p1VSmu[7];   //[nTau]
   Float_t         TkMET_phi;
   Float_t         TkMET_pt;
   Float_t         TkMET_sumEt;
   UInt_t          nTrigObj;
   Float_t         TrigObj_pt[35];   //[nTrigObj]
   Float_t         TrigObj_eta[35];   //[nTrigObj]
   Float_t         TrigObj_phi[35];   //[nTrigObj]
   Float_t         TrigObj_l1pt[35];   //[nTrigObj]
   Float_t         TrigObj_l1pt_2[35];   //[nTrigObj]
   Float_t         TrigObj_l2pt[35];   //[nTrigObj]
   Int_t           TrigObj_id[35];   //[nTrigObj]
   Int_t           TrigObj_l1iso[35];   //[nTrigObj]
   Int_t           TrigObj_l1charge[35];   //[nTrigObj]
   Int_t           TrigObj_filterBits[35];   //[nTrigObj]
   Int_t           genTtbarId;
   UInt_t          nOtherPV;
   Float_t         OtherPV_z[3];   //[nOtherPV]
   Float_t         PV_ndof;
   Float_t         PV_x;
   Float_t         PV_y;
   Float_t         PV_z;
   Float_t         PV_chi2;
   Float_t         PV_score;
   Int_t           PV_npvs;
   Int_t           PV_npvsGood;
   Int_t           boostedTau_genPartIdx[4];   //[nboostedTau]
   UChar_t         boostedTau_genPartFlav[4];   //[nboostedTau]
   Int_t           Electron_genPartIdx[8];   //[nElectron]
   UChar_t         Electron_genPartFlav[8];   //[nElectron]
   Int_t           GenJetAK8_partonFlavour[5];   //[nGenJetAK8]
   UChar_t         GenJetAK8_hadronFlavour[5];   //[nGenJetAK8]
   Int_t           GenJet_partonFlavour[25];   //[nGenJet]
   UChar_t         GenJet_hadronFlavour[25];   //[nGenJet]
   Float_t         GenVtx_t0;
   Int_t           Jet_genJetIdx[33];   //[nJet]
   Int_t           Jet_hadronFlavour[33];   //[nJet]
   Int_t           Jet_partonFlavour[33];   //[nJet]
   Int_t           LowPtElectron_genPartIdx[8];   //[nLowPtElectron]
   UChar_t         LowPtElectron_genPartFlav[8];   //[nLowPtElectron]
   Int_t           Muon_genPartIdx[10];   //[nMuon]
   UChar_t         Muon_genPartFlav[10];   //[nMuon]
   Int_t           Photon_genPartIdx[8];   //[nPhoton]
   UChar_t         Photon_genPartFlav[8];   //[nPhoton]
   Float_t         MET_fiducialGenPhi;
   Float_t         MET_fiducialGenPt;
   Int_t           Tau_genPartIdx[7];   //[nTau]
   UChar_t         Tau_genPartFlav[7];   //[nTau]
   Bool_t          Flag_HBHENoiseFilter;
   Bool_t          Flag_HBHENoiseIsoFilter;
   Bool_t          Flag_CSCTightHaloFilter;
   Bool_t          Flag_CSCTightHaloTrkMuUnvetoFilter;
   Bool_t          Flag_CSCTightHalo2015Filter;
   Bool_t          Flag_globalTightHalo2016Filter;
   Bool_t          Flag_globalSuperTightHalo2016Filter;
   Bool_t          Flag_HcalStripHaloFilter;
   Bool_t          Flag_hcalLaserEventFilter;
   Bool_t          Flag_EcalDeadCellTriggerPrimitiveFilter;
   Bool_t          Flag_EcalDeadCellBoundaryEnergyFilter;
   Bool_t          Flag_ecalBadCalibFilter;
   Bool_t          Flag_goodVertices;
   Bool_t          Flag_eeBadScFilter;
   Bool_t          Flag_ecalLaserCorrFilter;
   Bool_t          Flag_trkPOGFilters;
   Bool_t          Flag_chargedHadronTrackResolutionFilter;
   Bool_t          Flag_muonBadTrackFilter;
   Bool_t          Flag_BadChargedCandidateFilter;
   Bool_t          Flag_BadPFMuonFilter;
   Bool_t          Flag_BadPFMuonDzFilter;
   Bool_t          Flag_hfNoisyHitsFilter;
   Bool_t          Flag_BadChargedCandidateSummer16Filter;
   Bool_t          Flag_BadPFMuonSummer16Filter;
   Bool_t          Flag_trkPOG_manystripclus53X;
   Bool_t          Flag_trkPOG_toomanystripclus53X;
   Bool_t          Flag_trkPOG_logErrorTooManyClusters;
   Bool_t          Flag_METFilters;
   Bool_t          L1Reco_step;
   Bool_t          HLTriggerFirstPath;
   Bool_t          HLT_DoubleMu3_Trk_Tau3mu;
   Bool_t          HLT_DoubleMu3_TkMu_DsTau3Mu;
   Bool_t          HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_CrossL1;
   Bool_t          HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_CrossL1;
   Bool_t          HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_CrossL1;
   Bool_t          HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1;
   Bool_t          HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1;
   Bool_t          HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1;
   Bool_t          HLT_IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_CrossL1;
   Bool_t          HLT_IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_CrossL1;
   Bool_t          HLT_IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_CrossL1;
   Bool_t          HLT_IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1;
   Bool_t          HLT_IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1;
   Bool_t          HLT_IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1;
   Bool_t          HLT_IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1;
   Bool_t          HLT_IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1;
   Bool_t          HLT_IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1;
   Bool_t          HLT_IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1;
   Bool_t          HLT_IsoMu27_LooseChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1;
   Bool_t          HLT_IsoMu27_MediumChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1;
   Bool_t          HLT_IsoMu27_TightChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1;
   Bool_t          HLT_IsoMu20;
   Bool_t          HLT_IsoMu24;
   Bool_t          HLT_IsoMu24_eta2p1;
   Bool_t          HLT_IsoMu27;
   Bool_t          HLT_IsoMu30;
   Bool_t          HLT_Mu12;
   Bool_t          HLT_Mu15;
   Bool_t          HLT_Mu20;
   Bool_t          HLT_Mu27;
   Bool_t          HLT_Mu50;
   Bool_t          HLT_Mu55;
   Bool_t          HLT_OldMu100;
   Bool_t          HLT_TkMu100;
   Bool_t          HLT_IsoMu24_TwoProngs35;
   Bool_t          HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15;
   Bool_t          HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1;
   Bool_t          HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15;
   Bool_t          HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1;
   Bool_t          HLT_DoubleMu3_Trk_Tau3mu_NoL1Mass;
   Bool_t          HLT_Mu8;
   Bool_t          HLT_Mu17;
   Bool_t          HLT_Mu19;
   Bool_t          HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr;
   Bool_t          HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90;
   Bool_t          HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100;
   Bool_t          HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110;
   Bool_t          HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120;
   Bool_t          HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130;
   Bool_t          HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET140;
   Bool_t          HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr;
   Bool_t          HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr;
   Bool_t          HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1;
   Bool_t          HLT_MediumChargedIsoPFTau200HighPtRelaxedIso_Trk50_eta2p1;
   Bool_t          HLT_MediumChargedIsoPFTau220HighPtRelaxedIso_Trk50_eta2p1;
   Bool_t          HLT_IsoMu27_MET90;
   Bool_t          HLT_DoubleTightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg;
   Bool_t          HLT_DoubleMediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg;
   Bool_t          HLT_DoubleMediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg;
   Bool_t          HLT_DoubleTightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg;
   Bool_t          HLT_DoubleMediumChargedIsoPFTauHPS40_Trk1_eta2p1_Reg;
   Bool_t          HLT_DoubleTightChargedIsoPFTauHPS40_Trk1_eta2p1_Reg;
   Bool_t          HLT_DoubleMediumChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg;
   Bool_t          HLT_DoubleTightChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg;
   Bool_t          HLT_VBF_DoubleLooseChargedIsoPFTauHPS20_Trk1_eta2p1;
   Bool_t          HLT_VBF_DoubleMediumChargedIsoPFTauHPS20_Trk1_eta2p1;
   Bool_t          HLT_VBF_DoubleTightChargedIsoPFTauHPS20_Trk1_eta2p1;
   Bool_t          HLTriggerFinalPath;
   Bool_t          L1simulation_step;
   Bool_t          METfilters;
   Float_t         PUweight;
   Float_t         PUweight_up;
   Float_t         PUweight_down;
   Int_t           ProcessID;
   Float_t         XSec;
   Float_t         XSec_up;
   Float_t         XSec_down;
   Int_t           NEvents;
   Float_t         NWEvents;
   Float_t         XSecMCweight;
   Bool_t          Trigger_ditau;
   Bool_t          Trigger_ditau_mass;
   Float_t         Tau_energyScale[7];   //[nTau]
   Float_t         Tau_energyScale_DM0_up[7];   //[nTau]
   Float_t         Tau_energyScale_DM0_down[7];   //[nTau]
   Float_t         Tau_energyScale_DM1_up[7];   //[nTau]
   Float_t         Tau_energyScale_DM1_down[7];   //[nTau]
   Float_t         Tau_energyScale_DM2_up[7];   //[nTau]
   Float_t         Tau_energyScale_DM2_down[7];   //[nTau]
   Float_t         Tau_energyScale_DM10_up[7];   //[nTau]
   Float_t         Tau_energyScale_DM10_down[7];   //[nTau]
   Float_t         Tau_energyScale_DM11_up[7];   //[nTau]
   Float_t         Tau_energyScale_DM11_down[7];   //[nTau]
   UInt_t          nPionTrack;
   Float_t         PionTrack_pt[4];   //[nPionTrack]
   Float_t         PionTrack_eta[4];   //[nPionTrack]
   Float_t         PionTrack_phi[4];   //[nPionTrack]
   Int_t           PionTrack_pdgId[4];   //[nPionTrack]
   Int_t           PionTrack_charge[4];   //[nPionTrack]
   Int_t           PionTrack_isotrackIdx[4];   //[nPionTrack]
   UInt_t          nLepton;
   Float_t         Lepton_pt[6];   //[nLepton]
   Float_t         Lepton_eta[6];   //[nLepton]
   Float_t         Lepton_phi[6];   //[nLepton]
   Float_t         Lepton_mass[6];   //[nLepton]
   Int_t           Lepton_pdgId[6];   //[nLepton]
   Float_t         Lepton_iso[6];   //[nLepton]
   Int_t           Lepton_elIdx[6];   //[nLepton]
   Int_t           Lepton_muIdx[6];   //[nLepton]
   Int_t           Lepton_tauIdx[6];   //[nLepton]
   Bool_t          LeptonVeto;
   UInt_t          nCleanJet;
   Float_t         CleanJet_pt[16];   //[nCleanJet]
   Float_t         CleanJet_eta[16];   //[nCleanJet]
   Float_t         CleanJet_phi[16];   //[nCleanJet]
   Float_t         CleanJet_mass[16];   //[nCleanJet]
   Int_t           CleanJet_jetIdx[16];   //[nCleanJet]
   Int_t           Lepton_TrigObjIdx[6];   //[nLepton]
   UInt_t          nPionTriplet;
   Int_t           PionTriplet_pdgId[3];   //[nPionTriplet]
   Int_t           PionTriplet_charge[3];   //[nPionTriplet]
   Bool_t          PionTriplet_trailingIsTrack[3];   //[nPionTriplet]
   Int_t           PionTriplet_FSpions1[3];   //[nPionTriplet]
   Int_t           PionTriplet_FSpions2[3];   //[nPionTriplet]
   Int_t           PionTriplet_FSpions3[3];   //[nPionTriplet]
   Int_t           PionTriplet_CountOfItsKind[3];   //[nPionTriplet]
   Bool_t          PionTriplet_TriggerMatched[3];   //[nPionTriplet]
   Int_t           PionTripletCount_TauHasSignal;
   Int_t           PionTripletCount_TauHasBadCharge;
   Int_t           PionTripletCount_TauHasMuons;
   Int_t           PionTripletCount_TrackHasSignal;
   Int_t           PionTripletCount_TrackHasBadCharge;
   Int_t           PionTripletCount_TrackHasMuons;
   Float_t         PionTriplet_TauSFweight[3];   //[nPionTriplet]
   Float_t         PionTriplet_TauSFweight_ID[3];   //[nPionTriplet]
   Float_t         PionTriplet_TauSFweight_ID_tau_pT20to25_up[3];   //[nPionTriplet]
   Float_t         PionTriplet_TauSFweight_ID_tau_pT20to25_down[3];   //[nPionTriplet]
   Float_t         PionTriplet_TauSFweight_ID_tau_pT25to30_up[3];   //[nPionTriplet]
   Float_t         PionTriplet_TauSFweight_ID_tau_pT25to30_down[3];   //[nPionTriplet]
   Float_t         PionTriplet_TauSFweight_ID_tau_pT30to35_up[3];   //[nPionTriplet]
   Float_t         PionTriplet_TauSFweight_ID_tau_pT30to35_down[3];   //[nPionTriplet]
   Float_t         PionTriplet_TauSFweight_ID_tau_pT35to40_up[3];   //[nPionTriplet]
   Float_t         PionTriplet_TauSFweight_ID_tau_pT35to40_down[3];   //[nPionTriplet]
   Float_t         PionTriplet_TauSFweight_ID_tau_pT40toInf_up[3];   //[nPionTriplet]
   Float_t         PionTriplet_TauSFweight_ID_tau_pT40toInf_down[3];   //[nPionTriplet]
   Float_t         PionTriplet_TauSFweight_ID_mu_eta0to0_4_up[3];   //[nPionTriplet]
   Float_t         PionTriplet_TauSFweight_ID_mu_eta0to0_4_down[3];   //[nPionTriplet]
   Float_t         PionTriplet_TauSFweight_ID_mu_eta0_4to0_8_up[3];   //[nPionTriplet]
   Float_t         PionTriplet_TauSFweight_ID_mu_eta0_4to0_8_down[3];   //[nPionTriplet]
   Float_t         PionTriplet_TauSFweight_ID_mu_eta0_8to1_2_up[3];   //[nPionTriplet]
   Float_t         PionTriplet_TauSFweight_ID_mu_eta0_8to1_2_down[3];   //[nPionTriplet]
   Float_t         PionTriplet_TauSFweight_ID_mu_eta1_2to1_7_up[3];   //[nPionTriplet]
   Float_t         PionTriplet_TauSFweight_ID_mu_eta1_2to1_7_down[3];   //[nPionTriplet]
   Float_t         PionTriplet_TauSFweight_ID_mu_eta1_7to2_3_up[3];   //[nPionTriplet]
   Float_t         PionTriplet_TauSFweight_ID_mu_eta1_7to2_3_down[3];   //[nPionTriplet]
   Float_t         PionTriplet_TauSFweight_ID_el_eta0to1_5_up[3];   //[nPionTriplet]
   Float_t         PionTriplet_TauSFweight_ID_el_eta0to1_5_down[3];   //[nPionTriplet]
   Float_t         PionTriplet_TauSFweight_ID_el_eta1_5to2_3_up[3];   //[nPionTriplet]
   Float_t         PionTriplet_TauSFweight_ID_el_eta1_5to2_3_down[3];   //[nPionTriplet]
   Float_t         PionTriplet_TauSFweight_Trig[3];   //[nPionTriplet]
   Float_t         PionTriplet_TauSFweight_Trig_DM0_up[3];   //[nPionTriplet]
   Float_t         PionTriplet_TauSFweight_Trig_DM0_down[3];   //[nPionTriplet]
   Float_t         PionTriplet_TauSFweight_Trig_DM1_up[3];   //[nPionTriplet]
   Float_t         PionTriplet_TauSFweight_Trig_DM1_down[3];   //[nPionTriplet]
   UInt_t          nGenLepton;
   Float_t         GenLepton_pt[27];   //[nGenLepton]
   Float_t         GenLepton_eta[27];   //[nGenLepton]
   Float_t         GenLepton_phi[27];   //[nGenLepton]
   Float_t         GenLepton_mass[27];   //[nGenLepton]
   Int_t           GenLepton_pdgId[27];   //[nGenLepton]
   Int_t           GenLepton_status[27];   //[nGenLepton]
   Int_t           GenLepton_statusFlags[27];   //[nGenLepton]
   Int_t           GenLepton_genPartIdxMother[27];   //[nGenLepton]
   UInt_t          nGenNeutrino;
   Float_t         GenNeutrino_pt[13];   //[nGenNeutrino]
   Float_t         GenNeutrino_eta[13];   //[nGenNeutrino]
   Float_t         GenNeutrino_phi[13];   //[nGenNeutrino]
   Float_t         GenNeutrino_mass[13];   //[nGenNeutrino]
   Int_t           GenNeutrino_pdgId[13];   //[nGenNeutrino]
   Int_t           GenNeutrino_status[13];   //[nGenNeutrino]
   Int_t           GenNeutrino_statusFlags[13];   //[nGenNeutrino]
   Int_t           GenNeutrino_genPartIdxMother[13];   //[nGenNeutrino]
   UInt_t          nGenPhoton;
   Float_t         GenPhoton_pt[21];   //[nGenPhoton]
   Float_t         GenPhoton_eta[21];   //[nGenPhoton]
   Float_t         GenPhoton_phi[21];   //[nGenPhoton]
   Float_t         GenPhoton_mass[21];   //[nGenPhoton]
   Int_t           GenPhoton_pdgId[21];   //[nGenPhoton]
   Int_t           GenPhoton_status[21];   //[nGenPhoton]
   Int_t           GenPhoton_statusFlags[21];   //[nGenPhoton]
   Int_t           GenPhoton_genPartIdxMother[21];   //[nGenPhoton]
   UInt_t          nGenHiggs;
   Float_t         GenHiggs_pt[1];   //[nGenHiggs]
   Float_t         GenHiggs_eta[1];   //[nGenHiggs]
   Float_t         GenHiggs_phi[1];   //[nGenHiggs]
   Float_t         GenHiggs_mass[1];   //[nGenHiggs]
   Int_t           GenHiggs_pdgId[1];   //[nGenHiggs]
   Int_t           GenHiggs_status[1];   //[nGenHiggs]
   Int_t           GenHiggs_statusFlags[1];   //[nGenHiggs]
   Int_t           GenHiggs_genPartIdxMother[1];   //[nGenHiggs]
   UInt_t          nGenW;
   Float_t         GenW_pt[1];   //[nGenW]
   Float_t         GenW_eta[1];   //[nGenW]
   Float_t         GenW_phi[1];   //[nGenW]
   Float_t         GenW_mass[1];   //[nGenW]
   Int_t           GenW_pdgId[1];   //[nGenW]
   Int_t           GenW_status[1];   //[nGenW]
   Int_t           GenW_statusFlags[1];   //[nGenW]
   Int_t           GenW_genPartIdxMother[1];   //[nGenW]
   UInt_t          nGenPion;
   Float_t         GenPion_pt[8];   //[nGenPion]
   Float_t         GenPion_eta[8];   //[nGenPion]
   Float_t         GenPion_phi[8];   //[nGenPion]
   Float_t         GenPion_mass[8];   //[nGenPion]
   Int_t           GenPion_pdgId[8];   //[nGenPion]
   Int_t           GenPion_status[8];   //[nGenPion]
   Int_t           GenPion_statusFlags[8];   //[nGenPion]
   Int_t           GenPion_genPartIdxMother[8];   //[nGenPion]
   Int_t           Lepton_genMatchMuon[6];   //[nLepton]
   Float_t         Lepton_genMatchMuon_deltaR[6];   //[nLepton]
   Int_t           Lepton_genMatchElectron[6];   //[nLepton]
   Float_t         Lepton_genMatchElectron_deltaR[6];   //[nLepton]
   Int_t           Lepton_genMatchPion[6];   //[nLepton]
   Float_t         Lepton_genMatchPion_deltaR[6];   //[nLepton]
   Int_t           PionTrack_genMatchPion[4];   //[nPionTrack]
   Float_t         PionTrack_genMatchPion_deltaR[4];   //[nPionTrack]
   Bool_t          PionTriplet_genMatch[3];   //[nPionTriplet]
   UInt_t          nGenFSLeptons;
   Int_t           GenFSLeptons[1];   //[nGenFSLeptons]
   Float_t         GenTauTriplet_MassInv;
   Float_t         GenTauTriplet_pt;
   Float_t         GenTauTriplet_eta;
   Float_t         GenTauTriplet_phi;
   Float_t         GenTauTriplet_dR_12;
   Float_t         GenTauTriplet_dR_13;
   Float_t         GenTauTriplet_dR_23;
   Float_t         Weight_DY_Zpt;
   Float_t         Weight_TTbar_NNLO;
   Bool_t          TauEmbedding_veto;
   Float_t         PionTriplet_MassInv[3];   //[nPionTriplet]
   Float_t         PionTriplet_MassInv_12[3];   //[nPionTriplet]
   Float_t         PionTriplet_MassInv_13[3];   //[nPionTriplet]
   Float_t         PionTriplet_MassInv_23[3];   //[nPionTriplet]
   Float_t         PionTriplet_pt[3];   //[nPionTriplet]
   Float_t         PionTriplet_eta[3];   //[nPionTriplet]
   Float_t         PionTriplet_phi[3];   //[nPionTriplet]
   Float_t         PionTriplet_ptll_12[3];   //[nPionTriplet]
   Float_t         PionTriplet_ptll_13[3];   //[nPionTriplet]
   Float_t         PionTriplet_ptll_23[3];   //[nPionTriplet]
   Float_t         PionTriplet_MassInv_l1met[3];   //[nPionTriplet]
   Float_t         PionTriplet_MassInv_l2met[3];   //[nPionTriplet]
   Float_t         PionTriplet_MassInv_l3met[3];   //[nPionTriplet]
   Float_t         PionTriplet_pion1_pt[3];   //[nPionTriplet]
   Float_t         PionTriplet_pion2_pt[3];   //[nPionTriplet]
   Float_t         PionTriplet_pion3_pt[3];   //[nPionTriplet]
   Float_t         PionTriplet_pion1_eta[3];   //[nPionTriplet]
   Float_t         PionTriplet_pion2_eta[3];   //[nPionTriplet]
   Float_t         PionTriplet_pion3_eta[3];   //[nPionTriplet]
   Float_t         PionTriplet_pion1_phi[3];   //[nPionTriplet]
   Float_t         PionTriplet_pion2_phi[3];   //[nPionTriplet]
   Float_t         PionTriplet_pion3_phi[3];   //[nPionTriplet]
   Int_t           PionTriplet_pion1_absPdgId[3];   //[nPionTriplet]
   Int_t           PionTriplet_pion2_absPdgId[3];   //[nPionTriplet]
   Int_t           PionTriplet_pion3_absPdgId[3];   //[nPionTriplet]
   Float_t         PionTriplet_pion1_iso[3];   //[nPionTriplet]
   Float_t         PionTriplet_pion2_iso[3];   //[nPionTriplet]
   Float_t         PionTriplet_pion3_iso[3];   //[nPionTriplet]
   Float_t         PionTriplet_pion1_dxy[3];   //[nPionTriplet]
   Float_t         PionTriplet_pion2_dxy[3];   //[nPionTriplet]
   Float_t         PionTriplet_pion3_dxy[3];   //[nPionTriplet]
   Float_t         PionTriplet_pion1_dz[3];   //[nPionTriplet]
   Float_t         PionTriplet_pion2_dz[3];   //[nPionTriplet]
   Float_t         PionTriplet_pion3_dz[3];   //[nPionTriplet]
   Float_t         PionTriplet_LowestDeepTauVsEl[3];   //[nPionTriplet]
   Float_t         PionTriplet_LowestDeepTauVsMu[3];   //[nPionTriplet]
   Float_t         PionTriplet_LowestDeepTauVsJet[3];   //[nPionTriplet]
   Float_t         PionTriplet_dR_12[3];   //[nPionTriplet]
   Float_t         PionTriplet_dR_13[3];   //[nPionTriplet]
   Float_t         PionTriplet_dR_23[3];   //[nPionTriplet]
   Float_t         PionTriplet_deta_12[3];   //[nPionTriplet]
   Float_t         PionTriplet_deta_13[3];   //[nPionTriplet]
   Float_t         PionTriplet_deta_23[3];   //[nPionTriplet]
   Float_t         PionTriplet_dphi_12[3];   //[nPionTriplet]
   Float_t         PionTriplet_dphi_13[3];   //[nPionTriplet]
   Float_t         PionTriplet_dphi_23[3];   //[nPionTriplet]

   // List of branches
   TBranch        *b_run;   //!
   TBranch        *b_luminosityBlock;   //!
   TBranch        *b_event;   //!
   TBranch        *b_nboostedTau;   //!
   TBranch        *b_boostedTau_chargedIso;   //!
   TBranch        *b_boostedTau_eta;   //!
   TBranch        *b_boostedTau_leadTkDeltaEta;   //!
   TBranch        *b_boostedTau_leadTkDeltaPhi;   //!
   TBranch        *b_boostedTau_leadTkPtOverTauPt;   //!
   TBranch        *b_boostedTau_mass;   //!
   TBranch        *b_boostedTau_neutralIso;   //!
   TBranch        *b_boostedTau_phi;   //!
   TBranch        *b_boostedTau_photonsOutsideSignalCone;   //!
   TBranch        *b_boostedTau_pt;   //!
   TBranch        *b_boostedTau_puCorr;   //!
   TBranch        *b_boostedTau_rawAntiEle2018;   //!
   TBranch        *b_boostedTau_rawIso;   //!
   TBranch        *b_boostedTau_rawIsodR03;   //!
   TBranch        *b_boostedTau_rawMVAnewDM2017v2;   //!
   TBranch        *b_boostedTau_rawMVAoldDM2017v2;   //!
   TBranch        *b_boostedTau_rawMVAoldDMdR032017v2;   //!
   TBranch        *b_boostedTau_charge;   //!
   TBranch        *b_boostedTau_decayMode;   //!
   TBranch        *b_boostedTau_jetIdx;   //!
   TBranch        *b_boostedTau_rawAntiEleCat2018;   //!
   TBranch        *b_boostedTau_idAntiEle2018;   //!
   TBranch        *b_boostedTau_idAntiMu;   //!
   TBranch        *b_boostedTau_idMVAnewDM2017v2;   //!
   TBranch        *b_boostedTau_idMVAoldDM2017v2;   //!
   TBranch        *b_boostedTau_idMVAoldDMdR032017v2;   //!
   TBranch        *b_CaloMET_phi;   //!
   TBranch        *b_CaloMET_pt;   //!
   TBranch        *b_CaloMET_sumEt;   //!
   TBranch        *b_ChsMET_phi;   //!
   TBranch        *b_ChsMET_pt;   //!
   TBranch        *b_ChsMET_sumEt;   //!
   TBranch        *b_nCorrT1METJet;   //!
   TBranch        *b_CorrT1METJet_area;   //!
   TBranch        *b_CorrT1METJet_eta;   //!
   TBranch        *b_CorrT1METJet_muonSubtrFactor;   //!
   TBranch        *b_CorrT1METJet_phi;   //!
   TBranch        *b_CorrT1METJet_rawPt;   //!
   TBranch        *b_DeepMETResolutionTune_phi;   //!
   TBranch        *b_DeepMETResolutionTune_pt;   //!
   TBranch        *b_DeepMETResponseTune_phi;   //!
   TBranch        *b_DeepMETResponseTune_pt;   //!
   TBranch        *b_nElectron;   //!
   TBranch        *b_Electron_dEscaleDown;   //!
   TBranch        *b_Electron_dEscaleUp;   //!
   TBranch        *b_Electron_dEsigmaDown;   //!
   TBranch        *b_Electron_dEsigmaUp;   //!
   TBranch        *b_Electron_deltaEtaSC;   //!
   TBranch        *b_Electron_dr03EcalRecHitSumEt;   //!
   TBranch        *b_Electron_dr03HcalDepth1TowerSumEt;   //!
   TBranch        *b_Electron_dr03TkSumPt;   //!
   TBranch        *b_Electron_dr03TkSumPtHEEP;   //!
   TBranch        *b_Electron_dxy;   //!
   TBranch        *b_Electron_dxyErr;   //!
   TBranch        *b_Electron_dz;   //!
   TBranch        *b_Electron_dzErr;   //!
   TBranch        *b_Electron_eCorr;   //!
   TBranch        *b_Electron_eInvMinusPInv;   //!
   TBranch        *b_Electron_energyErr;   //!
   TBranch        *b_Electron_eta;   //!
   TBranch        *b_Electron_hoe;   //!
   TBranch        *b_Electron_ip3d;   //!
   TBranch        *b_Electron_jetPtRelv2;   //!
   TBranch        *b_Electron_jetRelIso;   //!
   TBranch        *b_Electron_mass;   //!
   TBranch        *b_Electron_miniPFRelIso_all;   //!
   TBranch        *b_Electron_miniPFRelIso_chg;   //!
   TBranch        *b_Electron_mvaFall17V2Iso;   //!
   TBranch        *b_Electron_mvaFall17V2noIso;   //!
   TBranch        *b_Electron_pfRelIso03_all;   //!
   TBranch        *b_Electron_pfRelIso03_chg;   //!
   TBranch        *b_Electron_phi;   //!
   TBranch        *b_Electron_pt;   //!
   TBranch        *b_Electron_r9;   //!
   TBranch        *b_Electron_scEtOverPt;   //!
   TBranch        *b_Electron_sieie;   //!
   TBranch        *b_Electron_sip3d;   //!
   TBranch        *b_Electron_mvaTTH;   //!
   TBranch        *b_Electron_charge;   //!
   TBranch        *b_Electron_cutBased;   //!
   TBranch        *b_Electron_jetIdx;   //!
   TBranch        *b_Electron_pdgId;   //!
   TBranch        *b_Electron_photonIdx;   //!
   TBranch        *b_Electron_tightCharge;   //!
   TBranch        *b_Electron_vidNestedWPBitmap;   //!
   TBranch        *b_Electron_vidNestedWPBitmapHEEP;   //!
   TBranch        *b_Electron_convVeto;   //!
   TBranch        *b_Electron_cutBased_HEEP;   //!
   TBranch        *b_Electron_isPFcand;   //!
   TBranch        *b_Electron_jetNDauCharged;   //!
   TBranch        *b_Electron_lostHits;   //!
   TBranch        *b_Electron_mvaFall17V2Iso_WP80;   //!
   TBranch        *b_Electron_mvaFall17V2Iso_WP90;   //!
   TBranch        *b_Electron_mvaFall17V2Iso_WPL;   //!
   TBranch        *b_Electron_mvaFall17V2noIso_WP80;   //!
   TBranch        *b_Electron_mvaFall17V2noIso_WP90;   //!
   TBranch        *b_Electron_mvaFall17V2noIso_WPL;   //!
   TBranch        *b_Electron_seedGain;   //!
   TBranch        *b_nFsrPhoton;   //!
   TBranch        *b_FsrPhoton_dROverEt2;   //!
   TBranch        *b_FsrPhoton_eta;   //!
   TBranch        *b_FsrPhoton_phi;   //!
   TBranch        *b_FsrPhoton_pt;   //!
   TBranch        *b_FsrPhoton_relIso03;   //!
   TBranch        *b_FsrPhoton_muonIdx;   //!
   TBranch        *b_nGenJetAK8;   //!
   TBranch        *b_GenJetAK8_eta;   //!
   TBranch        *b_GenJetAK8_mass;   //!
   TBranch        *b_GenJetAK8_phi;   //!
   TBranch        *b_GenJetAK8_pt;   //!
   TBranch        *b_nGenJet;   //!
   TBranch        *b_GenJet_eta;   //!
   TBranch        *b_GenJet_mass;   //!
   TBranch        *b_GenJet_phi;   //!
   TBranch        *b_GenJet_pt;   //!
   TBranch        *b_nGenPart;   //!
   TBranch        *b_GenPart_eta;   //!
   TBranch        *b_GenPart_mass;   //!
   TBranch        *b_GenPart_phi;   //!
   TBranch        *b_GenPart_pt;   //!
   TBranch        *b_GenPart_genPartIdxMother;   //!
   TBranch        *b_GenPart_pdgId;   //!
   TBranch        *b_GenPart_status;   //!
   TBranch        *b_GenPart_statusFlags;   //!
   TBranch        *b_nSubGenJetAK8;   //!
   TBranch        *b_SubGenJetAK8_eta;   //!
   TBranch        *b_SubGenJetAK8_mass;   //!
   TBranch        *b_SubGenJetAK8_phi;   //!
   TBranch        *b_SubGenJetAK8_pt;   //!
   TBranch        *b_Generator_binvar;   //!
   TBranch        *b_Generator_scalePDF;   //!
   TBranch        *b_Generator_weight;   //!
   TBranch        *b_Generator_x1;   //!
   TBranch        *b_Generator_x2;   //!
   TBranch        *b_Generator_xpdf1;   //!
   TBranch        *b_Generator_xpdf2;   //!
   TBranch        *b_Generator_id1;   //!
   TBranch        *b_Generator_id2;   //!
   TBranch        *b_GenVtx_x;   //!
   TBranch        *b_GenVtx_y;   //!
   TBranch        *b_GenVtx_z;   //!
   TBranch        *b_nGenVisTau;   //!
   TBranch        *b_GenVisTau_eta;   //!
   TBranch        *b_GenVisTau_mass;   //!
   TBranch        *b_GenVisTau_phi;   //!
   TBranch        *b_GenVisTau_pt;   //!
   TBranch        *b_GenVisTau_charge;   //!
   TBranch        *b_GenVisTau_genPartIdxMother;   //!
   TBranch        *b_GenVisTau_status;   //!
   TBranch        *b_genWeight;   //!
   TBranch        *b_LHEWeight_originalXWGTUP;   //!
   TBranch        *b_nLHEPdfWeight;   //!
   TBranch        *b_LHEPdfWeight;   //!
   TBranch        *b_nLHEReweightingWeight;   //!
   TBranch        *b_LHEReweightingWeight;   //!
   TBranch        *b_nLHEScaleWeight;   //!
   TBranch        *b_LHEScaleWeight;   //!
   TBranch        *b_nPSWeight;   //!
   TBranch        *b_PSWeight;   //!
   TBranch        *b_nIsoTrack;   //!
   TBranch        *b_IsoTrack_dxy;   //!
   TBranch        *b_IsoTrack_dz;   //!
   TBranch        *b_IsoTrack_eta;   //!
   TBranch        *b_IsoTrack_pfRelIso03_all;   //!
   TBranch        *b_IsoTrack_pfRelIso03_chg;   //!
   TBranch        *b_IsoTrack_phi;   //!
   TBranch        *b_IsoTrack_pt;   //!
   TBranch        *b_IsoTrack_miniPFRelIso_all;   //!
   TBranch        *b_IsoTrack_miniPFRelIso_chg;   //!
   TBranch        *b_IsoTrack_charge;   //!
   TBranch        *b_IsoTrack_fromPV;   //!
   TBranch        *b_IsoTrack_pdgId;   //!
   TBranch        *b_IsoTrack_isHighPurityTrack;   //!
   TBranch        *b_IsoTrack_isPFcand;   //!
   TBranch        *b_IsoTrack_isFromLostTrack;   //!
   TBranch        *b_nJet;   //!
   TBranch        *b_Jet_area;   //!
   TBranch        *b_Jet_btagDeepB;   //!
   TBranch        *b_Jet_btagDeepCvB;   //!
   TBranch        *b_Jet_btagDeepCvL;   //!
   TBranch        *b_Jet_btagDeepFlavB;   //!
   TBranch        *b_Jet_btagDeepFlavCvB;   //!
   TBranch        *b_Jet_btagDeepFlavCvL;   //!
   TBranch        *b_Jet_btagDeepFlavQG;   //!
   TBranch        *b_Jet_chEmEF;   //!
   TBranch        *b_Jet_chFPV0EF;   //!
   TBranch        *b_Jet_chHEF;   //!
   TBranch        *b_Jet_eta;   //!
   TBranch        *b_Jet_hfsigmaEtaEta;   //!
   TBranch        *b_Jet_hfsigmaPhiPhi;   //!
   TBranch        *b_Jet_mass;   //!
   TBranch        *b_Jet_muEF;   //!
   TBranch        *b_Jet_muonSubtrFactor;   //!
   TBranch        *b_Jet_neEmEF;   //!
   TBranch        *b_Jet_neHEF;   //!
   TBranch        *b_Jet_phi;   //!
   TBranch        *b_Jet_pt;   //!
   TBranch        *b_Jet_puIdDisc;   //!
   TBranch        *b_Jet_qgl;   //!
   TBranch        *b_Jet_rawFactor;   //!
   TBranch        *b_Jet_bRegCorr;   //!
   TBranch        *b_Jet_bRegRes;   //!
   TBranch        *b_Jet_cRegCorr;   //!
   TBranch        *b_Jet_cRegRes;   //!
   TBranch        *b_Jet_electronIdx1;   //!
   TBranch        *b_Jet_electronIdx2;   //!
   TBranch        *b_Jet_hfadjacentEtaStripsSize;   //!
   TBranch        *b_Jet_hfcentralEtaStripSize;   //!
   TBranch        *b_Jet_jetId;   //!
   TBranch        *b_Jet_muonIdx1;   //!
   TBranch        *b_Jet_muonIdx2;   //!
   TBranch        *b_Jet_nElectrons;   //!
   TBranch        *b_Jet_nMuons;   //!
   TBranch        *b_Jet_puId;   //!
   TBranch        *b_Jet_nConstituents;   //!
   TBranch        *b_L1PreFiringWeight_Dn;   //!
   TBranch        *b_L1PreFiringWeight_ECAL_Dn;   //!
   TBranch        *b_L1PreFiringWeight_ECAL_Nom;   //!
   TBranch        *b_L1PreFiringWeight_ECAL_Up;   //!
   TBranch        *b_L1PreFiringWeight_Muon_Nom;   //!
   TBranch        *b_L1PreFiringWeight_Muon_StatDn;   //!
   TBranch        *b_L1PreFiringWeight_Muon_StatUp;   //!
   TBranch        *b_L1PreFiringWeight_Muon_SystDn;   //!
   TBranch        *b_L1PreFiringWeight_Muon_SystUp;   //!
   TBranch        *b_L1PreFiringWeight_Nom;   //!
   TBranch        *b_L1PreFiringWeight_Up;   //!
   TBranch        *b_LHE_HT;   //!
   TBranch        *b_LHE_HTIncoming;   //!
   TBranch        *b_LHE_Vpt;   //!
   TBranch        *b_LHE_AlphaS;   //!
   TBranch        *b_LHE_Njets;   //!
   TBranch        *b_LHE_Nb;   //!
   TBranch        *b_LHE_Nc;   //!
   TBranch        *b_LHE_Nuds;   //!
   TBranch        *b_LHE_Nglu;   //!
   TBranch        *b_LHE_NpNLO;   //!
   TBranch        *b_LHE_NpLO;   //!
   TBranch        *b_nLHEPart;   //!
   TBranch        *b_LHEPart_pt;   //!
   TBranch        *b_LHEPart_eta;   //!
   TBranch        *b_LHEPart_phi;   //!
   TBranch        *b_LHEPart_mass;   //!
   TBranch        *b_LHEPart_incomingpz;   //!
   TBranch        *b_LHEPart_pdgId;   //!
   TBranch        *b_LHEPart_status;   //!
   TBranch        *b_LHEPart_spin;   //!
   TBranch        *b_nLowPtElectron;   //!
   TBranch        *b_LowPtElectron_ID;   //!
   TBranch        *b_LowPtElectron_convVtxRadius;   //!
   TBranch        *b_LowPtElectron_deltaEtaSC;   //!
   TBranch        *b_LowPtElectron_dxy;   //!
   TBranch        *b_LowPtElectron_dxyErr;   //!
   TBranch        *b_LowPtElectron_dz;   //!
   TBranch        *b_LowPtElectron_dzErr;   //!
   TBranch        *b_LowPtElectron_eInvMinusPInv;   //!
   TBranch        *b_LowPtElectron_embeddedID;   //!
   TBranch        *b_LowPtElectron_energyErr;   //!
   TBranch        *b_LowPtElectron_eta;   //!
   TBranch        *b_LowPtElectron_hoe;   //!
   TBranch        *b_LowPtElectron_mass;   //!
   TBranch        *b_LowPtElectron_miniPFRelIso_all;   //!
   TBranch        *b_LowPtElectron_miniPFRelIso_chg;   //!
   TBranch        *b_LowPtElectron_phi;   //!
   TBranch        *b_LowPtElectron_pt;   //!
   TBranch        *b_LowPtElectron_ptbiased;   //!
   TBranch        *b_LowPtElectron_r9;   //!
   TBranch        *b_LowPtElectron_scEtOverPt;   //!
   TBranch        *b_LowPtElectron_sieie;   //!
   TBranch        *b_LowPtElectron_unbiased;   //!
   TBranch        *b_LowPtElectron_charge;   //!
   TBranch        *b_LowPtElectron_convWP;   //!
   TBranch        *b_LowPtElectron_pdgId;   //!
   TBranch        *b_LowPtElectron_convVeto;   //!
   TBranch        *b_LowPtElectron_lostHits;   //!
   TBranch        *b_GenMET_phi;   //!
   TBranch        *b_GenMET_pt;   //!
   TBranch        *b_MET_MetUnclustEnUpDeltaX;   //!
   TBranch        *b_MET_MetUnclustEnUpDeltaY;   //!
   TBranch        *b_MET_covXX;   //!
   TBranch        *b_MET_covXY;   //!
   TBranch        *b_MET_covYY;   //!
   TBranch        *b_MET_phi;   //!
   TBranch        *b_MET_pt;   //!
   TBranch        *b_MET_significance;   //!
   TBranch        *b_MET_sumEt;   //!
   TBranch        *b_MET_sumPtUnclustered;   //!
   TBranch        *b_nMuon;   //!
   TBranch        *b_Muon_dxy;   //!
   TBranch        *b_Muon_dxyErr;   //!
   TBranch        *b_Muon_dxybs;   //!
   TBranch        *b_Muon_dz;   //!
   TBranch        *b_Muon_dzErr;   //!
   TBranch        *b_Muon_eta;   //!
   TBranch        *b_Muon_ip3d;   //!
   TBranch        *b_Muon_jetPtRelv2;   //!
   TBranch        *b_Muon_jetRelIso;   //!
   TBranch        *b_Muon_mass;   //!
   TBranch        *b_Muon_miniPFRelIso_all;   //!
   TBranch        *b_Muon_miniPFRelIso_chg;   //!
   TBranch        *b_Muon_pfRelIso03_all;   //!
   TBranch        *b_Muon_pfRelIso03_chg;   //!
   TBranch        *b_Muon_pfRelIso04_all;   //!
   TBranch        *b_Muon_phi;   //!
   TBranch        *b_Muon_pt;   //!
   TBranch        *b_Muon_ptErr;   //!
   TBranch        *b_Muon_segmentComp;   //!
   TBranch        *b_Muon_sip3d;   //!
   TBranch        *b_Muon_softMva;   //!
   TBranch        *b_Muon_tkRelIso;   //!
   TBranch        *b_Muon_tunepRelPt;   //!
   TBranch        *b_Muon_mvaLowPt;   //!
   TBranch        *b_Muon_mvaTTH;   //!
   TBranch        *b_Muon_charge;   //!
   TBranch        *b_Muon_jetIdx;   //!
   TBranch        *b_Muon_nStations;   //!
   TBranch        *b_Muon_nTrackerLayers;   //!
   TBranch        *b_Muon_pdgId;   //!
   TBranch        *b_Muon_tightCharge;   //!
   TBranch        *b_Muon_fsrPhotonIdx;   //!
   TBranch        *b_Muon_highPtId;   //!
   TBranch        *b_Muon_highPurity;   //!
   TBranch        *b_Muon_inTimeMuon;   //!
   TBranch        *b_Muon_isGlobal;   //!
   TBranch        *b_Muon_isPFcand;   //!
   TBranch        *b_Muon_isStandalone;   //!
   TBranch        *b_Muon_isTracker;   //!
   TBranch        *b_Muon_jetNDauCharged;   //!
   TBranch        *b_Muon_looseId;   //!
   TBranch        *b_Muon_mediumId;   //!
   TBranch        *b_Muon_mediumPromptId;   //!
   TBranch        *b_Muon_miniIsoId;   //!
   TBranch        *b_Muon_multiIsoId;   //!
   TBranch        *b_Muon_mvaId;   //!
   TBranch        *b_Muon_mvaLowPtId;   //!
   TBranch        *b_Muon_pfIsoId;   //!
   TBranch        *b_Muon_puppiIsoId;   //!
   TBranch        *b_Muon_softId;   //!
   TBranch        *b_Muon_softMvaId;   //!
   TBranch        *b_Muon_tightId;   //!
   TBranch        *b_Muon_tkIsoId;   //!
   TBranch        *b_Muon_triggerIdLoose;   //!
   TBranch        *b_nPhoton;   //!
   TBranch        *b_Photon_dEscaleDown;   //!
   TBranch        *b_Photon_dEscaleUp;   //!
   TBranch        *b_Photon_dEsigmaDown;   //!
   TBranch        *b_Photon_dEsigmaUp;   //!
   TBranch        *b_Photon_eCorr;   //!
   TBranch        *b_Photon_energyErr;   //!
   TBranch        *b_Photon_eta;   //!
   TBranch        *b_Photon_hoe;   //!
   TBranch        *b_Photon_mass;   //!
   TBranch        *b_Photon_mvaID;   //!
   TBranch        *b_Photon_mvaID_Fall17V1p1;   //!
   TBranch        *b_Photon_pfRelIso03_all;   //!
   TBranch        *b_Photon_pfRelIso03_chg;   //!
   TBranch        *b_Photon_phi;   //!
   TBranch        *b_Photon_pt;   //!
   TBranch        *b_Photon_r9;   //!
   TBranch        *b_Photon_sieie;   //!
   TBranch        *b_Photon_charge;   //!
   TBranch        *b_Photon_cutBased;   //!
   TBranch        *b_Photon_cutBased_Fall17V1Bitmap;   //!
   TBranch        *b_Photon_electronIdx;   //!
   TBranch        *b_Photon_jetIdx;   //!
   TBranch        *b_Photon_pdgId;   //!
   TBranch        *b_Photon_vidNestedWPBitmap;   //!
   TBranch        *b_Photon_electronVeto;   //!
   TBranch        *b_Photon_isScEtaEB;   //!
   TBranch        *b_Photon_isScEtaEE;   //!
   TBranch        *b_Photon_mvaID_WP80;   //!
   TBranch        *b_Photon_mvaID_WP90;   //!
   TBranch        *b_Photon_pixelSeed;   //!
   TBranch        *b_Photon_seedGain;   //!
   TBranch        *b_Pileup_nTrueInt;   //!
   TBranch        *b_Pileup_pudensity;   //!
   TBranch        *b_Pileup_gpudensity;   //!
   TBranch        *b_Pileup_nPU;   //!
   TBranch        *b_Pileup_sumEOOT;   //!
   TBranch        *b_Pileup_sumLOOT;   //!
   TBranch        *b_PuppiMET_phi;   //!
   TBranch        *b_PuppiMET_phiJERDown;   //!
   TBranch        *b_PuppiMET_phiJERUp;   //!
   TBranch        *b_PuppiMET_phiJESDown;   //!
   TBranch        *b_PuppiMET_phiJESUp;   //!
   TBranch        *b_PuppiMET_phiUnclusteredDown;   //!
   TBranch        *b_PuppiMET_phiUnclusteredUp;   //!
   TBranch        *b_PuppiMET_pt;   //!
   TBranch        *b_PuppiMET_ptJERDown;   //!
   TBranch        *b_PuppiMET_ptJERUp;   //!
   TBranch        *b_PuppiMET_ptJESDown;   //!
   TBranch        *b_PuppiMET_ptJESUp;   //!
   TBranch        *b_PuppiMET_ptUnclusteredDown;   //!
   TBranch        *b_PuppiMET_ptUnclusteredUp;   //!
   TBranch        *b_PuppiMET_sumEt;   //!
   TBranch        *b_RawMET_phi;   //!
   TBranch        *b_RawMET_pt;   //!
   TBranch        *b_RawMET_sumEt;   //!
   TBranch        *b_RawPuppiMET_phi;   //!
   TBranch        *b_RawPuppiMET_pt;   //!
   TBranch        *b_RawPuppiMET_sumEt;   //!
   TBranch        *b_fixedGridRhoFastjetAll;   //!
   TBranch        *b_fixedGridRhoFastjetCentral;   //!
   TBranch        *b_fixedGridRhoFastjetCentralCalo;   //!
   TBranch        *b_fixedGridRhoFastjetCentralChargedPileUp;   //!
   TBranch        *b_fixedGridRhoFastjetCentralNeutral;   //!
   TBranch        *b_nGenIsolatedPhoton;   //!
   TBranch        *b_GenIsolatedPhoton_eta;   //!
   TBranch        *b_GenIsolatedPhoton_mass;   //!
   TBranch        *b_GenIsolatedPhoton_phi;   //!
   TBranch        *b_GenIsolatedPhoton_pt;   //!
   TBranch        *b_nTau;   //!
   TBranch        *b_Tau_chargedIso;   //!
   TBranch        *b_Tau_dxy;   //!
   TBranch        *b_Tau_dz;   //!
   TBranch        *b_Tau_eta;   //!
   TBranch        *b_Tau_leadTkDeltaEta;   //!
   TBranch        *b_Tau_leadTkDeltaPhi;   //!
   TBranch        *b_Tau_leadTkPtOverTauPt;   //!
   TBranch        *b_Tau_mass;   //!
   TBranch        *b_Tau_neutralIso;   //!
   TBranch        *b_Tau_phi;   //!
   TBranch        *b_Tau_photonsOutsideSignalCone;   //!
   TBranch        *b_Tau_pt;   //!
   TBranch        *b_Tau_puCorr;   //!
   TBranch        *b_Tau_rawDeepTau2017v2p1VSe;   //!
   TBranch        *b_Tau_rawDeepTau2017v2p1VSjet;   //!
   TBranch        *b_Tau_rawDeepTau2017v2p1VSmu;   //!
   TBranch        *b_Tau_rawIso;   //!
   TBranch        *b_Tau_rawIsodR03;   //!
   TBranch        *b_Tau_charge;   //!
   TBranch        *b_Tau_decayMode;   //!
   TBranch        *b_Tau_jetIdx;   //!
   TBranch        *b_Tau_idAntiEleDeadECal;   //!
   TBranch        *b_Tau_idAntiMu;   //!
   TBranch        *b_Tau_idDecayModeOldDMs;   //!
   TBranch        *b_Tau_idDeepTau2017v2p1VSe;   //!
   TBranch        *b_Tau_idDeepTau2017v2p1VSjet;   //!
   TBranch        *b_Tau_idDeepTau2017v2p1VSmu;   //!
   TBranch        *b_TkMET_phi;   //!
   TBranch        *b_TkMET_pt;   //!
   TBranch        *b_TkMET_sumEt;   //!
   TBranch        *b_nTrigObj;   //!
   TBranch        *b_TrigObj_pt;   //!
   TBranch        *b_TrigObj_eta;   //!
   TBranch        *b_TrigObj_phi;   //!
   TBranch        *b_TrigObj_l1pt;   //!
   TBranch        *b_TrigObj_l1pt_2;   //!
   TBranch        *b_TrigObj_l2pt;   //!
   TBranch        *b_TrigObj_id;   //!
   TBranch        *b_TrigObj_l1iso;   //!
   TBranch        *b_TrigObj_l1charge;   //!
   TBranch        *b_TrigObj_filterBits;   //!
   TBranch        *b_genTtbarId;   //!
   TBranch        *b_nOtherPV;   //!
   TBranch        *b_OtherPV_z;   //!
   TBranch        *b_PV_ndof;   //!
   TBranch        *b_PV_x;   //!
   TBranch        *b_PV_y;   //!
   TBranch        *b_PV_z;   //!
   TBranch        *b_PV_chi2;   //!
   TBranch        *b_PV_score;   //!
   TBranch        *b_PV_npvs;   //!
   TBranch        *b_PV_npvsGood;   //!
   TBranch        *b_boostedTau_genPartIdx;   //!
   TBranch        *b_boostedTau_genPartFlav;   //!
   TBranch        *b_Electron_genPartIdx;   //!
   TBranch        *b_Electron_genPartFlav;   //!
   TBranch        *b_GenJetAK8_partonFlavour;   //!
   TBranch        *b_GenJetAK8_hadronFlavour;   //!
   TBranch        *b_GenJet_partonFlavour;   //!
   TBranch        *b_GenJet_hadronFlavour;   //!
   TBranch        *b_GenVtx_t0;   //!
   TBranch        *b_Jet_genJetIdx;   //!
   TBranch        *b_Jet_hadronFlavour;   //!
   TBranch        *b_Jet_partonFlavour;   //!
   TBranch        *b_LowPtElectron_genPartIdx;   //!
   TBranch        *b_LowPtElectron_genPartFlav;   //!
   TBranch        *b_Muon_genPartIdx;   //!
   TBranch        *b_Muon_genPartFlav;   //!
   TBranch        *b_Photon_genPartIdx;   //!
   TBranch        *b_Photon_genPartFlav;   //!
   TBranch        *b_MET_fiducialGenPhi;   //!
   TBranch        *b_MET_fiducialGenPt;   //!
   TBranch        *b_Tau_genPartIdx;   //!
   TBranch        *b_Tau_genPartFlav;   //!
   TBranch        *b_Flag_HBHENoiseFilter;   //!
   TBranch        *b_Flag_HBHENoiseIsoFilter;   //!
   TBranch        *b_Flag_CSCTightHaloFilter;   //!
   TBranch        *b_Flag_CSCTightHaloTrkMuUnvetoFilter;   //!
   TBranch        *b_Flag_CSCTightHalo2015Filter;   //!
   TBranch        *b_Flag_globalTightHalo2016Filter;   //!
   TBranch        *b_Flag_globalSuperTightHalo2016Filter;   //!
   TBranch        *b_Flag_HcalStripHaloFilter;   //!
   TBranch        *b_Flag_hcalLaserEventFilter;   //!
   TBranch        *b_Flag_EcalDeadCellTriggerPrimitiveFilter;   //!
   TBranch        *b_Flag_EcalDeadCellBoundaryEnergyFilter;   //!
   TBranch        *b_Flag_ecalBadCalibFilter;   //!
   TBranch        *b_Flag_goodVertices;   //!
   TBranch        *b_Flag_eeBadScFilter;   //!
   TBranch        *b_Flag_ecalLaserCorrFilter;   //!
   TBranch        *b_Flag_trkPOGFilters;   //!
   TBranch        *b_Flag_chargedHadronTrackResolutionFilter;   //!
   TBranch        *b_Flag_muonBadTrackFilter;   //!
   TBranch        *b_Flag_BadChargedCandidateFilter;   //!
   TBranch        *b_Flag_BadPFMuonFilter;   //!
   TBranch        *b_Flag_BadPFMuonDzFilter;   //!
   TBranch        *b_Flag_hfNoisyHitsFilter;   //!
   TBranch        *b_Flag_BadChargedCandidateSummer16Filter;   //!
   TBranch        *b_Flag_BadPFMuonSummer16Filter;   //!
   TBranch        *b_Flag_trkPOG_manystripclus53X;   //!
   TBranch        *b_Flag_trkPOG_toomanystripclus53X;   //!
   TBranch        *b_Flag_trkPOG_logErrorTooManyClusters;   //!
   TBranch        *b_Flag_METFilters;   //!
   TBranch        *b_L1Reco_step;   //!
   TBranch        *b_HLTriggerFirstPath;   //!
   TBranch        *b_HLT_DoubleMu3_Trk_Tau3mu;   //!
   TBranch        *b_HLT_DoubleMu3_TkMu_DsTau3Mu;   //!
   TBranch        *b_HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_CrossL1;   //!
   TBranch        *b_HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_CrossL1;   //!
   TBranch        *b_HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_CrossL1;   //!
   TBranch        *b_HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1;   //!
   TBranch        *b_HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1;   //!
   TBranch        *b_HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1;   //!
   TBranch        *b_HLT_IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_CrossL1;   //!
   TBranch        *b_HLT_IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_CrossL1;   //!
   TBranch        *b_HLT_IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_CrossL1;   //!
   TBranch        *b_HLT_IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1;   //!
   TBranch        *b_HLT_IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1;   //!
   TBranch        *b_HLT_IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1;   //!
   TBranch        *b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1;   //!
   TBranch        *b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1;   //!
   TBranch        *b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1;   //!
   TBranch        *b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1;   //!
   TBranch        *b_HLT_IsoMu27_LooseChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1;   //!
   TBranch        *b_HLT_IsoMu27_MediumChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1;   //!
   TBranch        *b_HLT_IsoMu27_TightChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1;   //!
   TBranch        *b_HLT_IsoMu20;   //!
   TBranch        *b_HLT_IsoMu24;   //!
   TBranch        *b_HLT_IsoMu24_eta2p1;   //!
   TBranch        *b_HLT_IsoMu27;   //!
   TBranch        *b_HLT_IsoMu30;   //!
   TBranch        *b_HLT_Mu12;   //!
   TBranch        *b_HLT_Mu15;   //!
   TBranch        *b_HLT_Mu20;   //!
   TBranch        *b_HLT_Mu27;   //!
   TBranch        *b_HLT_Mu50;   //!
   TBranch        *b_HLT_Mu55;   //!
   TBranch        *b_HLT_OldMu100;   //!
   TBranch        *b_HLT_TkMu100;   //!
   TBranch        *b_HLT_IsoMu24_TwoProngs35;   //!
   TBranch        *b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15;   //!
   TBranch        *b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1;   //!
   TBranch        *b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15;   //!
   TBranch        *b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1;   //!
   TBranch        *b_HLT_DoubleMu3_Trk_Tau3mu_NoL1Mass;   //!
   TBranch        *b_HLT_Mu8;   //!
   TBranch        *b_HLT_Mu17;   //!
   TBranch        *b_HLT_Mu19;   //!
   TBranch        *b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr;   //!
   TBranch        *b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90;   //!
   TBranch        *b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100;   //!
   TBranch        *b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110;   //!
   TBranch        *b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120;   //!
   TBranch        *b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130;   //!
   TBranch        *b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET140;   //!
   TBranch        *b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr;   //!
   TBranch        *b_HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr;   //!
   TBranch        *b_HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1;   //!
   TBranch        *b_HLT_MediumChargedIsoPFTau200HighPtRelaxedIso_Trk50_eta2p1;   //!
   TBranch        *b_HLT_MediumChargedIsoPFTau220HighPtRelaxedIso_Trk50_eta2p1;   //!
   TBranch        *b_HLT_IsoMu27_MET90;   //!
   TBranch        *b_HLT_DoubleTightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg;   //!
   TBranch        *b_HLT_DoubleMediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg;   //!
   TBranch        *b_HLT_DoubleMediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg;   //!
   TBranch        *b_HLT_DoubleTightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg;   //!
   TBranch        *b_HLT_DoubleMediumChargedIsoPFTauHPS40_Trk1_eta2p1_Reg;   //!
   TBranch        *b_HLT_DoubleTightChargedIsoPFTauHPS40_Trk1_eta2p1_Reg;   //!
   TBranch        *b_HLT_DoubleMediumChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg;   //!
   TBranch        *b_HLT_DoubleTightChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg;   //!
   TBranch        *b_HLT_VBF_DoubleLooseChargedIsoPFTauHPS20_Trk1_eta2p1;   //!
   TBranch        *b_HLT_VBF_DoubleMediumChargedIsoPFTauHPS20_Trk1_eta2p1;   //!
   TBranch        *b_HLT_VBF_DoubleTightChargedIsoPFTauHPS20_Trk1_eta2p1;   //!
   TBranch        *b_HLTriggerFinalPath;   //!
   TBranch        *b_L1simulation_step;   //!
   TBranch        *b_METfilters;   //!
   TBranch        *b_PUweight;   //!
   TBranch        *b_PUweight_up;   //!
   TBranch        *b_PUweight_down;   //!
   TBranch        *b_ProcessID;   //!
   TBranch        *b_XSec;   //!
   TBranch        *b_XSec_up;   //!
   TBranch        *b_XSec_down;   //!
   TBranch        *b_NEvents;   //!
   TBranch        *b_NWEvents;   //!
   TBranch        *b_XSecMCweight;   //!
   TBranch        *b_Trigger_ditau;   //!
   TBranch        *b_Trigger_ditau_mass;   //!
   TBranch        *b_Tau_energyScale;   //!
   TBranch        *b_Tau_energyScale_DM0_up;   //!
   TBranch        *b_Tau_energyScale_DM0_down;   //!
   TBranch        *b_Tau_energyScale_DM1_up;   //!
   TBranch        *b_Tau_energyScale_DM1_down;   //!
   TBranch        *b_Tau_energyScale_DM2_up;   //!
   TBranch        *b_Tau_energyScale_DM2_down;   //!
   TBranch        *b_Tau_energyScale_DM10_up;   //!
   TBranch        *b_Tau_energyScale_DM10_down;   //!
   TBranch        *b_Tau_energyScale_DM11_up;   //!
   TBranch        *b_Tau_energyScale_DM11_down;   //!
   TBranch        *b_nPionTrack;   //!
   TBranch        *b_PionTrack_pt;   //!
   TBranch        *b_PionTrack_eta;   //!
   TBranch        *b_PionTrack_phi;   //!
   TBranch        *b_PionTrack_pdgId;   //!
   TBranch        *b_PionTrack_charge;   //!
   TBranch        *b_PionTrack_isotrackIdx;   //!
   TBranch        *b_nLepton;   //!
   TBranch        *b_Lepton_pt;   //!
   TBranch        *b_Lepton_eta;   //!
   TBranch        *b_Lepton_phi;   //!
   TBranch        *b_Lepton_mass;   //!
   TBranch        *b_Lepton_pdgId;   //!
   TBranch        *b_Lepton_iso;   //!
   TBranch        *b_Lepton_elIdx;   //!
   TBranch        *b_Lepton_muIdx;   //!
   TBranch        *b_Lepton_tauIdx;   //!
   TBranch        *b_LeptonVeto;   //!
   TBranch        *b_nCleanJet;   //!
   TBranch        *b_CleanJet_pt;   //!
   TBranch        *b_CleanJet_eta;   //!
   TBranch        *b_CleanJet_phi;   //!
   TBranch        *b_CleanJet_mass;   //!
   TBranch        *b_CleanJet_jetIdx;   //!
   TBranch        *b_Lepton_TrigObjIdx;   //!
   TBranch        *b_nPionTriplet;   //!
   TBranch        *b_PionTriplet_pdgId;   //!
   TBranch        *b_PionTriplet_charge;   //!
   TBranch        *b_PionTriplet_trailingIsTrack;   //!
   TBranch        *b_PionTriplet_FSpions1;   //!
   TBranch        *b_PionTriplet_FSpions2;   //!
   TBranch        *b_PionTriplet_FSpions3;   //!
   TBranch        *b_PionTriplet_CountOfItsKind;   //!
   TBranch        *b_PionTriplet_TriggerMatched;   //!
   TBranch        *b_PionTripletCount_TauHasSignal;   //!
   TBranch        *b_PionTripletCount_TauHasBadCharge;   //!
   TBranch        *b_PionTripletCount_TauHasMuons;   //!
   TBranch        *b_PionTripletCount_TrackHasSignal;   //!
   TBranch        *b_PionTripletCount_TrackHasBadCharge;   //!
   TBranch        *b_PionTripletCount_TrackHasMuons;   //!
   TBranch        *b_PionTriplet_TauSFweight;   //!
   TBranch        *b_PionTriplet_TauSFweight_ID;   //!
   TBranch        *b_PionTriplet_TauSFweight_ID_tau_pT20to25_up;   //!
   TBranch        *b_PionTriplet_TauSFweight_ID_tau_pT20to25_down;   //!
   TBranch        *b_PionTriplet_TauSFweight_ID_tau_pT25to30_up;   //!
   TBranch        *b_PionTriplet_TauSFweight_ID_tau_pT25to30_down;   //!
   TBranch        *b_PionTriplet_TauSFweight_ID_tau_pT30to35_up;   //!
   TBranch        *b_PionTriplet_TauSFweight_ID_tau_pT30to35_down;   //!
   TBranch        *b_PionTriplet_TauSFweight_ID_tau_pT35to40_up;   //!
   TBranch        *b_PionTriplet_TauSFweight_ID_tau_pT35to40_down;   //!
   TBranch        *b_PionTriplet_TauSFweight_ID_tau_pT40toInf_up;   //!
   TBranch        *b_PionTriplet_TauSFweight_ID_tau_pT40toInf_down;   //!
   TBranch        *b_PionTriplet_TauSFweight_ID_mu_eta0to0_4_up;   //!
   TBranch        *b_PionTriplet_TauSFweight_ID_mu_eta0to0_4_down;   //!
   TBranch        *b_PionTriplet_TauSFweight_ID_mu_eta0_4to0_8_up;   //!
   TBranch        *b_PionTriplet_TauSFweight_ID_mu_eta0_4to0_8_down;   //!
   TBranch        *b_PionTriplet_TauSFweight_ID_mu_eta0_8to1_2_up;   //!
   TBranch        *b_PionTriplet_TauSFweight_ID_mu_eta0_8to1_2_down;   //!
   TBranch        *b_PionTriplet_TauSFweight_ID_mu_eta1_2to1_7_up;   //!
   TBranch        *b_PionTriplet_TauSFweight_ID_mu_eta1_2to1_7_down;   //!
   TBranch        *b_PionTriplet_TauSFweight_ID_mu_eta1_7to2_3_up;   //!
   TBranch        *b_PionTriplet_TauSFweight_ID_mu_eta1_7to2_3_down;   //!
   TBranch        *b_PionTriplet_TauSFweight_ID_el_eta0to1_5_up;   //!
   TBranch        *b_PionTriplet_TauSFweight_ID_el_eta0to1_5_down;   //!
   TBranch        *b_PionTriplet_TauSFweight_ID_el_eta1_5to2_3_up;   //!
   TBranch        *b_PionTriplet_TauSFweight_ID_el_eta1_5to2_3_down;   //!
   TBranch        *b_PionTriplet_TauSFweight_Trig;   //!
   TBranch        *b_PionTriplet_TauSFweight_Trig_DM0_up;   //!
   TBranch        *b_PionTriplet_TauSFweight_Trig_DM0_down;   //!
   TBranch        *b_PionTriplet_TauSFweight_Trig_DM1_up;   //!
   TBranch        *b_PionTriplet_TauSFweight_Trig_DM1_down;   //!
   TBranch        *b_nGenLepton;   //!
   TBranch        *b_GenLepton_pt;   //!
   TBranch        *b_GenLepton_eta;   //!
   TBranch        *b_GenLepton_phi;   //!
   TBranch        *b_GenLepton_mass;   //!
   TBranch        *b_GenLepton_pdgId;   //!
   TBranch        *b_GenLepton_status;   //!
   TBranch        *b_GenLepton_statusFlags;   //!
   TBranch        *b_GenLepton_genPartIdxMother;   //!
   TBranch        *b_nGenNeutrino;   //!
   TBranch        *b_GenNeutrino_pt;   //!
   TBranch        *b_GenNeutrino_eta;   //!
   TBranch        *b_GenNeutrino_phi;   //!
   TBranch        *b_GenNeutrino_mass;   //!
   TBranch        *b_GenNeutrino_pdgId;   //!
   TBranch        *b_GenNeutrino_status;   //!
   TBranch        *b_GenNeutrino_statusFlags;   //!
   TBranch        *b_GenNeutrino_genPartIdxMother;   //!
   TBranch        *b_nGenPhoton;   //!
   TBranch        *b_GenPhoton_pt;   //!
   TBranch        *b_GenPhoton_eta;   //!
   TBranch        *b_GenPhoton_phi;   //!
   TBranch        *b_GenPhoton_mass;   //!
   TBranch        *b_GenPhoton_pdgId;   //!
   TBranch        *b_GenPhoton_status;   //!
   TBranch        *b_GenPhoton_statusFlags;   //!
   TBranch        *b_GenPhoton_genPartIdxMother;   //!
   TBranch        *b_nGenHiggs;   //!
   TBranch        *b_GenHiggs_pt;   //!
   TBranch        *b_GenHiggs_eta;   //!
   TBranch        *b_GenHiggs_phi;   //!
   TBranch        *b_GenHiggs_mass;   //!
   TBranch        *b_GenHiggs_pdgId;   //!
   TBranch        *b_GenHiggs_status;   //!
   TBranch        *b_GenHiggs_statusFlags;   //!
   TBranch        *b_GenHiggs_genPartIdxMother;   //!
   TBranch        *b_nGenW;   //!
   TBranch        *b_GenW_pt;   //!
   TBranch        *b_GenW_eta;   //!
   TBranch        *b_GenW_phi;   //!
   TBranch        *b_GenW_mass;   //!
   TBranch        *b_GenW_pdgId;   //!
   TBranch        *b_GenW_status;   //!
   TBranch        *b_GenW_statusFlags;   //!
   TBranch        *b_GenW_genPartIdxMother;   //!
   TBranch        *b_nGenPion;   //!
   TBranch        *b_GenPion_pt;   //!
   TBranch        *b_GenPion_eta;   //!
   TBranch        *b_GenPion_phi;   //!
   TBranch        *b_GenPion_mass;   //!
   TBranch        *b_GenPion_pdgId;   //!
   TBranch        *b_GenPion_status;   //!
   TBranch        *b_GenPion_statusFlags;   //!
   TBranch        *b_GenPion_genPartIdxMother;   //!
   TBranch        *b_Lepton_genMatchMuon;   //!
   TBranch        *b_Lepton_genMatchMuon_deltaR;   //!
   TBranch        *b_Lepton_genMatchElectron;   //!
   TBranch        *b_Lepton_genMatchElectron_deltaR;   //!
   TBranch        *b_Lepton_genMatchPion;   //!
   TBranch        *b_Lepton_genMatchPion_deltaR;   //!
   TBranch        *b_PionTrack_genMatchPion;   //!
   TBranch        *b_PionTrack_genMatchPion_deltaR;   //!
   TBranch        *b_PionTriplet_genMatch;   //!
   TBranch        *b_nGenFSLeptons;   //!
   TBranch        *b_GenFSLeptons;   //!
   TBranch        *b_GenTauTriplet_MassInv;   //!
   TBranch        *b_GenTauTriplet_pt;   //!
   TBranch        *b_GenTauTriplet_eta;   //!
   TBranch        *b_GenTauTriplet_phi;   //!
   TBranch        *b_GenTauTriplet_dR_12;   //!
   TBranch        *b_GenTauTriplet_dR_13;   //!
   TBranch        *b_GenTauTriplet_dR_23;   //!
   TBranch        *b_Weight_DY_Zpt;   //!
   TBranch        *b_Weight_TTbar_NNLO;   //!
   TBranch        *b_TauEmbedding_veto;   //!
   TBranch        *b_PionTriplet_MassInv;   //!
   TBranch        *b_PionTriplet_MassInv_12;   //!
   TBranch        *b_PionTriplet_MassInv_13;   //!
   TBranch        *b_PionTriplet_MassInv_23;   //!
   TBranch        *b_PionTriplet_pt;   //!
   TBranch        *b_PionTriplet_eta;   //!
   TBranch        *b_PionTriplet_phi;   //!
   TBranch        *b_PionTriplet_ptll_12;   //!
   TBranch        *b_PionTriplet_ptll_13;   //!
   TBranch        *b_PionTriplet_ptll_23;   //!
   TBranch        *b_PionTriplet_MassInv_l1met;   //!
   TBranch        *b_PionTriplet_MassInv_l2met;   //!
   TBranch        *b_PionTriplet_MassInv_l3met;   //!
   TBranch        *b_PionTriplet_pion1_pt;   //!
   TBranch        *b_PionTriplet_pion2_pt;   //!
   TBranch        *b_PionTriplet_pion3_pt;   //!
   TBranch        *b_PionTriplet_pion1_eta;   //!
   TBranch        *b_PionTriplet_pion2_eta;   //!
   TBranch        *b_PionTriplet_pion3_eta;   //!
   TBranch        *b_PionTriplet_pion1_phi;   //!
   TBranch        *b_PionTriplet_pion2_phi;   //!
   TBranch        *b_PionTriplet_pion3_phi;   //!
   TBranch        *b_PionTriplet_pion1_absPdgId;   //!
   TBranch        *b_PionTriplet_pion2_absPdgId;   //!
   TBranch        *b_PionTriplet_pion3_absPdgId;   //!
   TBranch        *b_PionTriplet_pion1_iso;   //!
   TBranch        *b_PionTriplet_pion2_iso;   //!
   TBranch        *b_PionTriplet_pion3_iso;   //!
   TBranch        *b_PionTriplet_pion1_dxy;   //!
   TBranch        *b_PionTriplet_pion2_dxy;   //!
   TBranch        *b_PionTriplet_pion3_dxy;   //!
   TBranch        *b_PionTriplet_pion1_dz;   //!
   TBranch        *b_PionTriplet_pion2_dz;   //!
   TBranch        *b_PionTriplet_pion3_dz;   //!
   TBranch        *b_PionTriplet_LowestDeepTauVsEl;   //!
   TBranch        *b_PionTriplet_LowestDeepTauVsMu;   //!
   TBranch        *b_PionTriplet_LowestDeepTauVsJet;   //!
   TBranch        *b_PionTriplet_dR_12;   //!
   TBranch        *b_PionTriplet_dR_13;   //!
   TBranch        *b_PionTriplet_dR_23;   //!
   TBranch        *b_PionTriplet_deta_12;   //!
   TBranch        *b_PionTriplet_deta_13;   //!
   TBranch        *b_PionTriplet_deta_23;   //!
   TBranch        *b_PionTriplet_dphi_12;   //!
   TBranch        *b_PionTriplet_dphi_13;   //!
   TBranch        *b_PionTriplet_dphi_23;   //!

   skim(TTree *tree=0);
   virtual ~skim();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef skim_cxx
skim::skim(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/hdfs/store/user/jnatoli/NanoTauAnalysis/analysis/Wto3pi_2018_fromstep1//W+Jets/W1JetsToLNu_Wto3pi_2018.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/hdfs/store/user/jnatoli/NanoTauAnalysis/analysis/Wto3pi_2018_fromstep1//W+Jets/W1JetsToLNu_Wto3pi_2018.root");
      }
      f->GetObject("Events",tree);

   }
   Init(tree);
}

skim::~skim()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t skim::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t skim::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void skim::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("luminosityBlock", &luminosityBlock, &b_luminosityBlock);
   fChain->SetBranchAddress("event", &event, &b_event);
   fChain->SetBranchAddress("nboostedTau", &nboostedTau, &b_nboostedTau);
   fChain->SetBranchAddress("boostedTau_chargedIso", boostedTau_chargedIso, &b_boostedTau_chargedIso);
   fChain->SetBranchAddress("boostedTau_eta", boostedTau_eta, &b_boostedTau_eta);
   fChain->SetBranchAddress("boostedTau_leadTkDeltaEta", boostedTau_leadTkDeltaEta, &b_boostedTau_leadTkDeltaEta);
   fChain->SetBranchAddress("boostedTau_leadTkDeltaPhi", boostedTau_leadTkDeltaPhi, &b_boostedTau_leadTkDeltaPhi);
   fChain->SetBranchAddress("boostedTau_leadTkPtOverTauPt", boostedTau_leadTkPtOverTauPt, &b_boostedTau_leadTkPtOverTauPt);
   fChain->SetBranchAddress("boostedTau_mass", boostedTau_mass, &b_boostedTau_mass);
   fChain->SetBranchAddress("boostedTau_neutralIso", boostedTau_neutralIso, &b_boostedTau_neutralIso);
   fChain->SetBranchAddress("boostedTau_phi", boostedTau_phi, &b_boostedTau_phi);
   fChain->SetBranchAddress("boostedTau_photonsOutsideSignalCone", boostedTau_photonsOutsideSignalCone, &b_boostedTau_photonsOutsideSignalCone);
   fChain->SetBranchAddress("boostedTau_pt", boostedTau_pt, &b_boostedTau_pt);
   fChain->SetBranchAddress("boostedTau_puCorr", boostedTau_puCorr, &b_boostedTau_puCorr);
   fChain->SetBranchAddress("boostedTau_rawAntiEle2018", boostedTau_rawAntiEle2018, &b_boostedTau_rawAntiEle2018);
   fChain->SetBranchAddress("boostedTau_rawIso", boostedTau_rawIso, &b_boostedTau_rawIso);
   fChain->SetBranchAddress("boostedTau_rawIsodR03", boostedTau_rawIsodR03, &b_boostedTau_rawIsodR03);
   fChain->SetBranchAddress("boostedTau_rawMVAnewDM2017v2", boostedTau_rawMVAnewDM2017v2, &b_boostedTau_rawMVAnewDM2017v2);
   fChain->SetBranchAddress("boostedTau_rawMVAoldDM2017v2", boostedTau_rawMVAoldDM2017v2, &b_boostedTau_rawMVAoldDM2017v2);
   fChain->SetBranchAddress("boostedTau_rawMVAoldDMdR032017v2", boostedTau_rawMVAoldDMdR032017v2, &b_boostedTau_rawMVAoldDMdR032017v2);
   fChain->SetBranchAddress("boostedTau_charge", boostedTau_charge, &b_boostedTau_charge);
   fChain->SetBranchAddress("boostedTau_decayMode", boostedTau_decayMode, &b_boostedTau_decayMode);
   fChain->SetBranchAddress("boostedTau_jetIdx", boostedTau_jetIdx, &b_boostedTau_jetIdx);
   fChain->SetBranchAddress("boostedTau_rawAntiEleCat2018", boostedTau_rawAntiEleCat2018, &b_boostedTau_rawAntiEleCat2018);
   fChain->SetBranchAddress("boostedTau_idAntiEle2018", boostedTau_idAntiEle2018, &b_boostedTau_idAntiEle2018);
   fChain->SetBranchAddress("boostedTau_idAntiMu", boostedTau_idAntiMu, &b_boostedTau_idAntiMu);
   fChain->SetBranchAddress("boostedTau_idMVAnewDM2017v2", boostedTau_idMVAnewDM2017v2, &b_boostedTau_idMVAnewDM2017v2);
   fChain->SetBranchAddress("boostedTau_idMVAoldDM2017v2", boostedTau_idMVAoldDM2017v2, &b_boostedTau_idMVAoldDM2017v2);
   fChain->SetBranchAddress("boostedTau_idMVAoldDMdR032017v2", boostedTau_idMVAoldDMdR032017v2, &b_boostedTau_idMVAoldDMdR032017v2);
   fChain->SetBranchAddress("CaloMET_phi", &CaloMET_phi, &b_CaloMET_phi);
   fChain->SetBranchAddress("CaloMET_pt", &CaloMET_pt, &b_CaloMET_pt);
   fChain->SetBranchAddress("CaloMET_sumEt", &CaloMET_sumEt, &b_CaloMET_sumEt);
   fChain->SetBranchAddress("ChsMET_phi", &ChsMET_phi, &b_ChsMET_phi);
   fChain->SetBranchAddress("ChsMET_pt", &ChsMET_pt, &b_ChsMET_pt);
   fChain->SetBranchAddress("ChsMET_sumEt", &ChsMET_sumEt, &b_ChsMET_sumEt);
   fChain->SetBranchAddress("nCorrT1METJet", &nCorrT1METJet, &b_nCorrT1METJet);
   fChain->SetBranchAddress("CorrT1METJet_area", CorrT1METJet_area, &b_CorrT1METJet_area);
   fChain->SetBranchAddress("CorrT1METJet_eta", CorrT1METJet_eta, &b_CorrT1METJet_eta);
   fChain->SetBranchAddress("CorrT1METJet_muonSubtrFactor", CorrT1METJet_muonSubtrFactor, &b_CorrT1METJet_muonSubtrFactor);
   fChain->SetBranchAddress("CorrT1METJet_phi", CorrT1METJet_phi, &b_CorrT1METJet_phi);
   fChain->SetBranchAddress("CorrT1METJet_rawPt", CorrT1METJet_rawPt, &b_CorrT1METJet_rawPt);
   fChain->SetBranchAddress("DeepMETResolutionTune_phi", &DeepMETResolutionTune_phi, &b_DeepMETResolutionTune_phi);
   fChain->SetBranchAddress("DeepMETResolutionTune_pt", &DeepMETResolutionTune_pt, &b_DeepMETResolutionTune_pt);
   fChain->SetBranchAddress("DeepMETResponseTune_phi", &DeepMETResponseTune_phi, &b_DeepMETResponseTune_phi);
   fChain->SetBranchAddress("DeepMETResponseTune_pt", &DeepMETResponseTune_pt, &b_DeepMETResponseTune_pt);
   fChain->SetBranchAddress("nElectron", &nElectron, &b_nElectron);
   fChain->SetBranchAddress("Electron_dEscaleDown", Electron_dEscaleDown, &b_Electron_dEscaleDown);
   fChain->SetBranchAddress("Electron_dEscaleUp", Electron_dEscaleUp, &b_Electron_dEscaleUp);
   fChain->SetBranchAddress("Electron_dEsigmaDown", Electron_dEsigmaDown, &b_Electron_dEsigmaDown);
   fChain->SetBranchAddress("Electron_dEsigmaUp", Electron_dEsigmaUp, &b_Electron_dEsigmaUp);
   fChain->SetBranchAddress("Electron_deltaEtaSC", Electron_deltaEtaSC, &b_Electron_deltaEtaSC);
   fChain->SetBranchAddress("Electron_dr03EcalRecHitSumEt", Electron_dr03EcalRecHitSumEt, &b_Electron_dr03EcalRecHitSumEt);
   fChain->SetBranchAddress("Electron_dr03HcalDepth1TowerSumEt", Electron_dr03HcalDepth1TowerSumEt, &b_Electron_dr03HcalDepth1TowerSumEt);
   fChain->SetBranchAddress("Electron_dr03TkSumPt", Electron_dr03TkSumPt, &b_Electron_dr03TkSumPt);
   fChain->SetBranchAddress("Electron_dr03TkSumPtHEEP", Electron_dr03TkSumPtHEEP, &b_Electron_dr03TkSumPtHEEP);
   fChain->SetBranchAddress("Electron_dxy", Electron_dxy, &b_Electron_dxy);
   fChain->SetBranchAddress("Electron_dxyErr", Electron_dxyErr, &b_Electron_dxyErr);
   fChain->SetBranchAddress("Electron_dz", Electron_dz, &b_Electron_dz);
   fChain->SetBranchAddress("Electron_dzErr", Electron_dzErr, &b_Electron_dzErr);
   fChain->SetBranchAddress("Electron_eCorr", Electron_eCorr, &b_Electron_eCorr);
   fChain->SetBranchAddress("Electron_eInvMinusPInv", Electron_eInvMinusPInv, &b_Electron_eInvMinusPInv);
   fChain->SetBranchAddress("Electron_energyErr", Electron_energyErr, &b_Electron_energyErr);
   fChain->SetBranchAddress("Electron_eta", Electron_eta, &b_Electron_eta);
   fChain->SetBranchAddress("Electron_hoe", Electron_hoe, &b_Electron_hoe);
   fChain->SetBranchAddress("Electron_ip3d", Electron_ip3d, &b_Electron_ip3d);
   fChain->SetBranchAddress("Electron_jetPtRelv2", Electron_jetPtRelv2, &b_Electron_jetPtRelv2);
   fChain->SetBranchAddress("Electron_jetRelIso", Electron_jetRelIso, &b_Electron_jetRelIso);
   fChain->SetBranchAddress("Electron_mass", Electron_mass, &b_Electron_mass);
   fChain->SetBranchAddress("Electron_miniPFRelIso_all", Electron_miniPFRelIso_all, &b_Electron_miniPFRelIso_all);
   fChain->SetBranchAddress("Electron_miniPFRelIso_chg", Electron_miniPFRelIso_chg, &b_Electron_miniPFRelIso_chg);
   fChain->SetBranchAddress("Electron_mvaFall17V2Iso", Electron_mvaFall17V2Iso, &b_Electron_mvaFall17V2Iso);
   fChain->SetBranchAddress("Electron_mvaFall17V2noIso", Electron_mvaFall17V2noIso, &b_Electron_mvaFall17V2noIso);
   fChain->SetBranchAddress("Electron_pfRelIso03_all", Electron_pfRelIso03_all, &b_Electron_pfRelIso03_all);
   fChain->SetBranchAddress("Electron_pfRelIso03_chg", Electron_pfRelIso03_chg, &b_Electron_pfRelIso03_chg);
   fChain->SetBranchAddress("Electron_phi", Electron_phi, &b_Electron_phi);
   fChain->SetBranchAddress("Electron_pt", Electron_pt, &b_Electron_pt);
   fChain->SetBranchAddress("Electron_r9", Electron_r9, &b_Electron_r9);
   fChain->SetBranchAddress("Electron_scEtOverPt", Electron_scEtOverPt, &b_Electron_scEtOverPt);
   fChain->SetBranchAddress("Electron_sieie", Electron_sieie, &b_Electron_sieie);
   fChain->SetBranchAddress("Electron_sip3d", Electron_sip3d, &b_Electron_sip3d);
   fChain->SetBranchAddress("Electron_mvaTTH", Electron_mvaTTH, &b_Electron_mvaTTH);
   fChain->SetBranchAddress("Electron_charge", Electron_charge, &b_Electron_charge);
   fChain->SetBranchAddress("Electron_cutBased", Electron_cutBased, &b_Electron_cutBased);
   fChain->SetBranchAddress("Electron_jetIdx", Electron_jetIdx, &b_Electron_jetIdx);
   fChain->SetBranchAddress("Electron_pdgId", Electron_pdgId, &b_Electron_pdgId);
   fChain->SetBranchAddress("Electron_photonIdx", Electron_photonIdx, &b_Electron_photonIdx);
   fChain->SetBranchAddress("Electron_tightCharge", Electron_tightCharge, &b_Electron_tightCharge);
   fChain->SetBranchAddress("Electron_vidNestedWPBitmap", Electron_vidNestedWPBitmap, &b_Electron_vidNestedWPBitmap);
   fChain->SetBranchAddress("Electron_vidNestedWPBitmapHEEP", Electron_vidNestedWPBitmapHEEP, &b_Electron_vidNestedWPBitmapHEEP);
   fChain->SetBranchAddress("Electron_convVeto", Electron_convVeto, &b_Electron_convVeto);
   fChain->SetBranchAddress("Electron_cutBased_HEEP", Electron_cutBased_HEEP, &b_Electron_cutBased_HEEP);
   fChain->SetBranchAddress("Electron_isPFcand", Electron_isPFcand, &b_Electron_isPFcand);
   fChain->SetBranchAddress("Electron_jetNDauCharged", Electron_jetNDauCharged, &b_Electron_jetNDauCharged);
   fChain->SetBranchAddress("Electron_lostHits", Electron_lostHits, &b_Electron_lostHits);
   fChain->SetBranchAddress("Electron_mvaFall17V2Iso_WP80", Electron_mvaFall17V2Iso_WP80, &b_Electron_mvaFall17V2Iso_WP80);
   fChain->SetBranchAddress("Electron_mvaFall17V2Iso_WP90", Electron_mvaFall17V2Iso_WP90, &b_Electron_mvaFall17V2Iso_WP90);
   fChain->SetBranchAddress("Electron_mvaFall17V2Iso_WPL", Electron_mvaFall17V2Iso_WPL, &b_Electron_mvaFall17V2Iso_WPL);
   fChain->SetBranchAddress("Electron_mvaFall17V2noIso_WP80", Electron_mvaFall17V2noIso_WP80, &b_Electron_mvaFall17V2noIso_WP80);
   fChain->SetBranchAddress("Electron_mvaFall17V2noIso_WP90", Electron_mvaFall17V2noIso_WP90, &b_Electron_mvaFall17V2noIso_WP90);
   fChain->SetBranchAddress("Electron_mvaFall17V2noIso_WPL", Electron_mvaFall17V2noIso_WPL, &b_Electron_mvaFall17V2noIso_WPL);
   fChain->SetBranchAddress("Electron_seedGain", Electron_seedGain, &b_Electron_seedGain);
   fChain->SetBranchAddress("nFsrPhoton", &nFsrPhoton, &b_nFsrPhoton);
   fChain->SetBranchAddress("FsrPhoton_dROverEt2", FsrPhoton_dROverEt2, &b_FsrPhoton_dROverEt2);
   fChain->SetBranchAddress("FsrPhoton_eta", FsrPhoton_eta, &b_FsrPhoton_eta);
   fChain->SetBranchAddress("FsrPhoton_phi", FsrPhoton_phi, &b_FsrPhoton_phi);
   fChain->SetBranchAddress("FsrPhoton_pt", FsrPhoton_pt, &b_FsrPhoton_pt);
   fChain->SetBranchAddress("FsrPhoton_relIso03", FsrPhoton_relIso03, &b_FsrPhoton_relIso03);
   fChain->SetBranchAddress("FsrPhoton_muonIdx", FsrPhoton_muonIdx, &b_FsrPhoton_muonIdx);
   fChain->SetBranchAddress("nGenJetAK8", &nGenJetAK8, &b_nGenJetAK8);
   fChain->SetBranchAddress("GenJetAK8_eta", GenJetAK8_eta, &b_GenJetAK8_eta);
   fChain->SetBranchAddress("GenJetAK8_mass", GenJetAK8_mass, &b_GenJetAK8_mass);
   fChain->SetBranchAddress("GenJetAK8_phi", GenJetAK8_phi, &b_GenJetAK8_phi);
   fChain->SetBranchAddress("GenJetAK8_pt", GenJetAK8_pt, &b_GenJetAK8_pt);
   fChain->SetBranchAddress("nGenJet", &nGenJet, &b_nGenJet);
   fChain->SetBranchAddress("GenJet_eta", GenJet_eta, &b_GenJet_eta);
   fChain->SetBranchAddress("GenJet_mass", GenJet_mass, &b_GenJet_mass);
   fChain->SetBranchAddress("GenJet_phi", GenJet_phi, &b_GenJet_phi);
   fChain->SetBranchAddress("GenJet_pt", GenJet_pt, &b_GenJet_pt);
   fChain->SetBranchAddress("nGenPart", &nGenPart, &b_nGenPart);
   fChain->SetBranchAddress("GenPart_eta", GenPart_eta, &b_GenPart_eta);
   fChain->SetBranchAddress("GenPart_mass", GenPart_mass, &b_GenPart_mass);
   fChain->SetBranchAddress("GenPart_phi", GenPart_phi, &b_GenPart_phi);
   fChain->SetBranchAddress("GenPart_pt", GenPart_pt, &b_GenPart_pt);
   fChain->SetBranchAddress("GenPart_genPartIdxMother", GenPart_genPartIdxMother, &b_GenPart_genPartIdxMother);
   fChain->SetBranchAddress("GenPart_pdgId", GenPart_pdgId, &b_GenPart_pdgId);
   fChain->SetBranchAddress("GenPart_status", GenPart_status, &b_GenPart_status);
   fChain->SetBranchAddress("GenPart_statusFlags", GenPart_statusFlags, &b_GenPart_statusFlags);
   fChain->SetBranchAddress("nSubGenJetAK8", &nSubGenJetAK8, &b_nSubGenJetAK8);
   fChain->SetBranchAddress("SubGenJetAK8_eta", SubGenJetAK8_eta, &b_SubGenJetAK8_eta);
   fChain->SetBranchAddress("SubGenJetAK8_mass", SubGenJetAK8_mass, &b_SubGenJetAK8_mass);
   fChain->SetBranchAddress("SubGenJetAK8_phi", SubGenJetAK8_phi, &b_SubGenJetAK8_phi);
   fChain->SetBranchAddress("SubGenJetAK8_pt", SubGenJetAK8_pt, &b_SubGenJetAK8_pt);
   fChain->SetBranchAddress("Generator_binvar", &Generator_binvar, &b_Generator_binvar);
   fChain->SetBranchAddress("Generator_scalePDF", &Generator_scalePDF, &b_Generator_scalePDF);
   fChain->SetBranchAddress("Generator_weight", &Generator_weight, &b_Generator_weight);
   fChain->SetBranchAddress("Generator_x1", &Generator_x1, &b_Generator_x1);
   fChain->SetBranchAddress("Generator_x2", &Generator_x2, &b_Generator_x2);
   fChain->SetBranchAddress("Generator_xpdf1", &Generator_xpdf1, &b_Generator_xpdf1);
   fChain->SetBranchAddress("Generator_xpdf2", &Generator_xpdf2, &b_Generator_xpdf2);
   fChain->SetBranchAddress("Generator_id1", &Generator_id1, &b_Generator_id1);
   fChain->SetBranchAddress("Generator_id2", &Generator_id2, &b_Generator_id2);
   fChain->SetBranchAddress("GenVtx_x", &GenVtx_x, &b_GenVtx_x);
   fChain->SetBranchAddress("GenVtx_y", &GenVtx_y, &b_GenVtx_y);
   fChain->SetBranchAddress("GenVtx_z", &GenVtx_z, &b_GenVtx_z);
   fChain->SetBranchAddress("nGenVisTau", &nGenVisTau, &b_nGenVisTau);
   fChain->SetBranchAddress("GenVisTau_eta", GenVisTau_eta, &b_GenVisTau_eta);
   fChain->SetBranchAddress("GenVisTau_mass", GenVisTau_mass, &b_GenVisTau_mass);
   fChain->SetBranchAddress("GenVisTau_phi", GenVisTau_phi, &b_GenVisTau_phi);
   fChain->SetBranchAddress("GenVisTau_pt", GenVisTau_pt, &b_GenVisTau_pt);
   fChain->SetBranchAddress("GenVisTau_charge", GenVisTau_charge, &b_GenVisTau_charge);
   fChain->SetBranchAddress("GenVisTau_genPartIdxMother", GenVisTau_genPartIdxMother, &b_GenVisTau_genPartIdxMother);
   fChain->SetBranchAddress("GenVisTau_status", GenVisTau_status, &b_GenVisTau_status);
   fChain->SetBranchAddress("genWeight", &genWeight, &b_genWeight);
   fChain->SetBranchAddress("LHEWeight_originalXWGTUP", &LHEWeight_originalXWGTUP, &b_LHEWeight_originalXWGTUP);
   fChain->SetBranchAddress("nLHEPdfWeight", &nLHEPdfWeight, &b_nLHEPdfWeight);
   fChain->SetBranchAddress("LHEPdfWeight", LHEPdfWeight, &b_LHEPdfWeight);
   fChain->SetBranchAddress("nLHEReweightingWeight", &nLHEReweightingWeight, &b_nLHEReweightingWeight);
   fChain->SetBranchAddress("LHEReweightingWeight", &LHEReweightingWeight, &b_LHEReweightingWeight);
   fChain->SetBranchAddress("nLHEScaleWeight", &nLHEScaleWeight, &b_nLHEScaleWeight);
   fChain->SetBranchAddress("LHEScaleWeight", LHEScaleWeight, &b_LHEScaleWeight);
   fChain->SetBranchAddress("nPSWeight", &nPSWeight, &b_nPSWeight);
   fChain->SetBranchAddress("PSWeight", PSWeight, &b_PSWeight);
   fChain->SetBranchAddress("nIsoTrack", &nIsoTrack, &b_nIsoTrack);
   fChain->SetBranchAddress("IsoTrack_dxy", IsoTrack_dxy, &b_IsoTrack_dxy);
   fChain->SetBranchAddress("IsoTrack_dz", IsoTrack_dz, &b_IsoTrack_dz);
   fChain->SetBranchAddress("IsoTrack_eta", IsoTrack_eta, &b_IsoTrack_eta);
   fChain->SetBranchAddress("IsoTrack_pfRelIso03_all", IsoTrack_pfRelIso03_all, &b_IsoTrack_pfRelIso03_all);
   fChain->SetBranchAddress("IsoTrack_pfRelIso03_chg", IsoTrack_pfRelIso03_chg, &b_IsoTrack_pfRelIso03_chg);
   fChain->SetBranchAddress("IsoTrack_phi", IsoTrack_phi, &b_IsoTrack_phi);
   fChain->SetBranchAddress("IsoTrack_pt", IsoTrack_pt, &b_IsoTrack_pt);
   fChain->SetBranchAddress("IsoTrack_miniPFRelIso_all", IsoTrack_miniPFRelIso_all, &b_IsoTrack_miniPFRelIso_all);
   fChain->SetBranchAddress("IsoTrack_miniPFRelIso_chg", IsoTrack_miniPFRelIso_chg, &b_IsoTrack_miniPFRelIso_chg);
   fChain->SetBranchAddress("IsoTrack_charge", IsoTrack_charge, &b_IsoTrack_charge);
   fChain->SetBranchAddress("IsoTrack_fromPV", IsoTrack_fromPV, &b_IsoTrack_fromPV);
   fChain->SetBranchAddress("IsoTrack_pdgId", IsoTrack_pdgId, &b_IsoTrack_pdgId);
   fChain->SetBranchAddress("IsoTrack_isHighPurityTrack", IsoTrack_isHighPurityTrack, &b_IsoTrack_isHighPurityTrack);
   fChain->SetBranchAddress("IsoTrack_isPFcand", IsoTrack_isPFcand, &b_IsoTrack_isPFcand);
   fChain->SetBranchAddress("IsoTrack_isFromLostTrack", IsoTrack_isFromLostTrack, &b_IsoTrack_isFromLostTrack);
   fChain->SetBranchAddress("nJet", &nJet, &b_nJet);
   fChain->SetBranchAddress("Jet_area", Jet_area, &b_Jet_area);
   fChain->SetBranchAddress("Jet_btagDeepB", Jet_btagDeepB, &b_Jet_btagDeepB);
   fChain->SetBranchAddress("Jet_btagDeepCvB", Jet_btagDeepCvB, &b_Jet_btagDeepCvB);
   fChain->SetBranchAddress("Jet_btagDeepCvL", Jet_btagDeepCvL, &b_Jet_btagDeepCvL);
   fChain->SetBranchAddress("Jet_btagDeepFlavB", Jet_btagDeepFlavB, &b_Jet_btagDeepFlavB);
   fChain->SetBranchAddress("Jet_btagDeepFlavCvB", Jet_btagDeepFlavCvB, &b_Jet_btagDeepFlavCvB);
   fChain->SetBranchAddress("Jet_btagDeepFlavCvL", Jet_btagDeepFlavCvL, &b_Jet_btagDeepFlavCvL);
   fChain->SetBranchAddress("Jet_btagDeepFlavQG", Jet_btagDeepFlavQG, &b_Jet_btagDeepFlavQG);
   fChain->SetBranchAddress("Jet_chEmEF", Jet_chEmEF, &b_Jet_chEmEF);
   fChain->SetBranchAddress("Jet_chFPV0EF", Jet_chFPV0EF, &b_Jet_chFPV0EF);
   fChain->SetBranchAddress("Jet_chHEF", Jet_chHEF, &b_Jet_chHEF);
   fChain->SetBranchAddress("Jet_eta", Jet_eta, &b_Jet_eta);
   fChain->SetBranchAddress("Jet_hfsigmaEtaEta", Jet_hfsigmaEtaEta, &b_Jet_hfsigmaEtaEta);
   fChain->SetBranchAddress("Jet_hfsigmaPhiPhi", Jet_hfsigmaPhiPhi, &b_Jet_hfsigmaPhiPhi);
   fChain->SetBranchAddress("Jet_mass", Jet_mass, &b_Jet_mass);
   fChain->SetBranchAddress("Jet_muEF", Jet_muEF, &b_Jet_muEF);
   fChain->SetBranchAddress("Jet_muonSubtrFactor", Jet_muonSubtrFactor, &b_Jet_muonSubtrFactor);
   fChain->SetBranchAddress("Jet_neEmEF", Jet_neEmEF, &b_Jet_neEmEF);
   fChain->SetBranchAddress("Jet_neHEF", Jet_neHEF, &b_Jet_neHEF);
   fChain->SetBranchAddress("Jet_phi", Jet_phi, &b_Jet_phi);
   fChain->SetBranchAddress("Jet_pt", Jet_pt, &b_Jet_pt);
   fChain->SetBranchAddress("Jet_puIdDisc", Jet_puIdDisc, &b_Jet_puIdDisc);
   fChain->SetBranchAddress("Jet_qgl", Jet_qgl, &b_Jet_qgl);
   fChain->SetBranchAddress("Jet_rawFactor", Jet_rawFactor, &b_Jet_rawFactor);
   fChain->SetBranchAddress("Jet_bRegCorr", Jet_bRegCorr, &b_Jet_bRegCorr);
   fChain->SetBranchAddress("Jet_bRegRes", Jet_bRegRes, &b_Jet_bRegRes);
   fChain->SetBranchAddress("Jet_cRegCorr", Jet_cRegCorr, &b_Jet_cRegCorr);
   fChain->SetBranchAddress("Jet_cRegRes", Jet_cRegRes, &b_Jet_cRegRes);
   fChain->SetBranchAddress("Jet_electronIdx1", Jet_electronIdx1, &b_Jet_electronIdx1);
   fChain->SetBranchAddress("Jet_electronIdx2", Jet_electronIdx2, &b_Jet_electronIdx2);
   fChain->SetBranchAddress("Jet_hfadjacentEtaStripsSize", Jet_hfadjacentEtaStripsSize, &b_Jet_hfadjacentEtaStripsSize);
   fChain->SetBranchAddress("Jet_hfcentralEtaStripSize", Jet_hfcentralEtaStripSize, &b_Jet_hfcentralEtaStripSize);
   fChain->SetBranchAddress("Jet_jetId", Jet_jetId, &b_Jet_jetId);
   fChain->SetBranchAddress("Jet_muonIdx1", Jet_muonIdx1, &b_Jet_muonIdx1);
   fChain->SetBranchAddress("Jet_muonIdx2", Jet_muonIdx2, &b_Jet_muonIdx2);
   fChain->SetBranchAddress("Jet_nElectrons", Jet_nElectrons, &b_Jet_nElectrons);
   fChain->SetBranchAddress("Jet_nMuons", Jet_nMuons, &b_Jet_nMuons);
   fChain->SetBranchAddress("Jet_puId", Jet_puId, &b_Jet_puId);
   fChain->SetBranchAddress("Jet_nConstituents", Jet_nConstituents, &b_Jet_nConstituents);
   fChain->SetBranchAddress("L1PreFiringWeight_Dn", &L1PreFiringWeight_Dn, &b_L1PreFiringWeight_Dn);
   fChain->SetBranchAddress("L1PreFiringWeight_ECAL_Dn", &L1PreFiringWeight_ECAL_Dn, &b_L1PreFiringWeight_ECAL_Dn);
   fChain->SetBranchAddress("L1PreFiringWeight_ECAL_Nom", &L1PreFiringWeight_ECAL_Nom, &b_L1PreFiringWeight_ECAL_Nom);
   fChain->SetBranchAddress("L1PreFiringWeight_ECAL_Up", &L1PreFiringWeight_ECAL_Up, &b_L1PreFiringWeight_ECAL_Up);
   fChain->SetBranchAddress("L1PreFiringWeight_Muon_Nom", &L1PreFiringWeight_Muon_Nom, &b_L1PreFiringWeight_Muon_Nom);
   fChain->SetBranchAddress("L1PreFiringWeight_Muon_StatDn", &L1PreFiringWeight_Muon_StatDn, &b_L1PreFiringWeight_Muon_StatDn);
   fChain->SetBranchAddress("L1PreFiringWeight_Muon_StatUp", &L1PreFiringWeight_Muon_StatUp, &b_L1PreFiringWeight_Muon_StatUp);
   fChain->SetBranchAddress("L1PreFiringWeight_Muon_SystDn", &L1PreFiringWeight_Muon_SystDn, &b_L1PreFiringWeight_Muon_SystDn);
   fChain->SetBranchAddress("L1PreFiringWeight_Muon_SystUp", &L1PreFiringWeight_Muon_SystUp, &b_L1PreFiringWeight_Muon_SystUp);
   fChain->SetBranchAddress("L1PreFiringWeight_Nom", &L1PreFiringWeight_Nom, &b_L1PreFiringWeight_Nom);
   fChain->SetBranchAddress("L1PreFiringWeight_Up", &L1PreFiringWeight_Up, &b_L1PreFiringWeight_Up);
   fChain->SetBranchAddress("LHE_HT", &LHE_HT, &b_LHE_HT);
   fChain->SetBranchAddress("LHE_HTIncoming", &LHE_HTIncoming, &b_LHE_HTIncoming);
   fChain->SetBranchAddress("LHE_Vpt", &LHE_Vpt, &b_LHE_Vpt);
   fChain->SetBranchAddress("LHE_AlphaS", &LHE_AlphaS, &b_LHE_AlphaS);
   fChain->SetBranchAddress("LHE_Njets", &LHE_Njets, &b_LHE_Njets);
   fChain->SetBranchAddress("LHE_Nb", &LHE_Nb, &b_LHE_Nb);
   fChain->SetBranchAddress("LHE_Nc", &LHE_Nc, &b_LHE_Nc);
   fChain->SetBranchAddress("LHE_Nuds", &LHE_Nuds, &b_LHE_Nuds);
   fChain->SetBranchAddress("LHE_Nglu", &LHE_Nglu, &b_LHE_Nglu);
   fChain->SetBranchAddress("LHE_NpNLO", &LHE_NpNLO, &b_LHE_NpNLO);
   fChain->SetBranchAddress("LHE_NpLO", &LHE_NpLO, &b_LHE_NpLO);
   fChain->SetBranchAddress("nLHEPart", &nLHEPart, &b_nLHEPart);
   fChain->SetBranchAddress("LHEPart_pt", LHEPart_pt, &b_LHEPart_pt);
   fChain->SetBranchAddress("LHEPart_eta", LHEPart_eta, &b_LHEPart_eta);
   fChain->SetBranchAddress("LHEPart_phi", LHEPart_phi, &b_LHEPart_phi);
   fChain->SetBranchAddress("LHEPart_mass", LHEPart_mass, &b_LHEPart_mass);
   fChain->SetBranchAddress("LHEPart_incomingpz", LHEPart_incomingpz, &b_LHEPart_incomingpz);
   fChain->SetBranchAddress("LHEPart_pdgId", LHEPart_pdgId, &b_LHEPart_pdgId);
   fChain->SetBranchAddress("LHEPart_status", LHEPart_status, &b_LHEPart_status);
   fChain->SetBranchAddress("LHEPart_spin", LHEPart_spin, &b_LHEPart_spin);
   fChain->SetBranchAddress("nLowPtElectron", &nLowPtElectron, &b_nLowPtElectron);
   fChain->SetBranchAddress("LowPtElectron_ID", LowPtElectron_ID, &b_LowPtElectron_ID);
   fChain->SetBranchAddress("LowPtElectron_convVtxRadius", LowPtElectron_convVtxRadius, &b_LowPtElectron_convVtxRadius);
   fChain->SetBranchAddress("LowPtElectron_deltaEtaSC", LowPtElectron_deltaEtaSC, &b_LowPtElectron_deltaEtaSC);
   fChain->SetBranchAddress("LowPtElectron_dxy", LowPtElectron_dxy, &b_LowPtElectron_dxy);
   fChain->SetBranchAddress("LowPtElectron_dxyErr", LowPtElectron_dxyErr, &b_LowPtElectron_dxyErr);
   fChain->SetBranchAddress("LowPtElectron_dz", LowPtElectron_dz, &b_LowPtElectron_dz);
   fChain->SetBranchAddress("LowPtElectron_dzErr", LowPtElectron_dzErr, &b_LowPtElectron_dzErr);
   fChain->SetBranchAddress("LowPtElectron_eInvMinusPInv", LowPtElectron_eInvMinusPInv, &b_LowPtElectron_eInvMinusPInv);
   fChain->SetBranchAddress("LowPtElectron_embeddedID", LowPtElectron_embeddedID, &b_LowPtElectron_embeddedID);
   fChain->SetBranchAddress("LowPtElectron_energyErr", LowPtElectron_energyErr, &b_LowPtElectron_energyErr);
   fChain->SetBranchAddress("LowPtElectron_eta", LowPtElectron_eta, &b_LowPtElectron_eta);
   fChain->SetBranchAddress("LowPtElectron_hoe", LowPtElectron_hoe, &b_LowPtElectron_hoe);
   fChain->SetBranchAddress("LowPtElectron_mass", LowPtElectron_mass, &b_LowPtElectron_mass);
   fChain->SetBranchAddress("LowPtElectron_miniPFRelIso_all", LowPtElectron_miniPFRelIso_all, &b_LowPtElectron_miniPFRelIso_all);
   fChain->SetBranchAddress("LowPtElectron_miniPFRelIso_chg", LowPtElectron_miniPFRelIso_chg, &b_LowPtElectron_miniPFRelIso_chg);
   fChain->SetBranchAddress("LowPtElectron_phi", LowPtElectron_phi, &b_LowPtElectron_phi);
   fChain->SetBranchAddress("LowPtElectron_pt", LowPtElectron_pt, &b_LowPtElectron_pt);
   fChain->SetBranchAddress("LowPtElectron_ptbiased", LowPtElectron_ptbiased, &b_LowPtElectron_ptbiased);
   fChain->SetBranchAddress("LowPtElectron_r9", LowPtElectron_r9, &b_LowPtElectron_r9);
   fChain->SetBranchAddress("LowPtElectron_scEtOverPt", LowPtElectron_scEtOverPt, &b_LowPtElectron_scEtOverPt);
   fChain->SetBranchAddress("LowPtElectron_sieie", LowPtElectron_sieie, &b_LowPtElectron_sieie);
   fChain->SetBranchAddress("LowPtElectron_unbiased", LowPtElectron_unbiased, &b_LowPtElectron_unbiased);
   fChain->SetBranchAddress("LowPtElectron_charge", LowPtElectron_charge, &b_LowPtElectron_charge);
   fChain->SetBranchAddress("LowPtElectron_convWP", LowPtElectron_convWP, &b_LowPtElectron_convWP);
   fChain->SetBranchAddress("LowPtElectron_pdgId", LowPtElectron_pdgId, &b_LowPtElectron_pdgId);
   fChain->SetBranchAddress("LowPtElectron_convVeto", LowPtElectron_convVeto, &b_LowPtElectron_convVeto);
   fChain->SetBranchAddress("LowPtElectron_lostHits", LowPtElectron_lostHits, &b_LowPtElectron_lostHits);
   fChain->SetBranchAddress("GenMET_phi", &GenMET_phi, &b_GenMET_phi);
   fChain->SetBranchAddress("GenMET_pt", &GenMET_pt, &b_GenMET_pt);
   fChain->SetBranchAddress("MET_MetUnclustEnUpDeltaX", &MET_MetUnclustEnUpDeltaX, &b_MET_MetUnclustEnUpDeltaX);
   fChain->SetBranchAddress("MET_MetUnclustEnUpDeltaY", &MET_MetUnclustEnUpDeltaY, &b_MET_MetUnclustEnUpDeltaY);
   fChain->SetBranchAddress("MET_covXX", &MET_covXX, &b_MET_covXX);
   fChain->SetBranchAddress("MET_covXY", &MET_covXY, &b_MET_covXY);
   fChain->SetBranchAddress("MET_covYY", &MET_covYY, &b_MET_covYY);
   fChain->SetBranchAddress("MET_phi", &MET_phi, &b_MET_phi);
   fChain->SetBranchAddress("MET_pt", &MET_pt, &b_MET_pt);
   fChain->SetBranchAddress("MET_significance", &MET_significance, &b_MET_significance);
   fChain->SetBranchAddress("MET_sumEt", &MET_sumEt, &b_MET_sumEt);
   fChain->SetBranchAddress("MET_sumPtUnclustered", &MET_sumPtUnclustered, &b_MET_sumPtUnclustered);
   fChain->SetBranchAddress("nMuon", &nMuon, &b_nMuon);
   fChain->SetBranchAddress("Muon_dxy", Muon_dxy, &b_Muon_dxy);
   fChain->SetBranchAddress("Muon_dxyErr", Muon_dxyErr, &b_Muon_dxyErr);
   fChain->SetBranchAddress("Muon_dxybs", Muon_dxybs, &b_Muon_dxybs);
   fChain->SetBranchAddress("Muon_dz", Muon_dz, &b_Muon_dz);
   fChain->SetBranchAddress("Muon_dzErr", Muon_dzErr, &b_Muon_dzErr);
   fChain->SetBranchAddress("Muon_eta", Muon_eta, &b_Muon_eta);
   fChain->SetBranchAddress("Muon_ip3d", Muon_ip3d, &b_Muon_ip3d);
   fChain->SetBranchAddress("Muon_jetPtRelv2", Muon_jetPtRelv2, &b_Muon_jetPtRelv2);
   fChain->SetBranchAddress("Muon_jetRelIso", Muon_jetRelIso, &b_Muon_jetRelIso);
   fChain->SetBranchAddress("Muon_mass", Muon_mass, &b_Muon_mass);
   fChain->SetBranchAddress("Muon_miniPFRelIso_all", Muon_miniPFRelIso_all, &b_Muon_miniPFRelIso_all);
   fChain->SetBranchAddress("Muon_miniPFRelIso_chg", Muon_miniPFRelIso_chg, &b_Muon_miniPFRelIso_chg);
   fChain->SetBranchAddress("Muon_pfRelIso03_all", Muon_pfRelIso03_all, &b_Muon_pfRelIso03_all);
   fChain->SetBranchAddress("Muon_pfRelIso03_chg", Muon_pfRelIso03_chg, &b_Muon_pfRelIso03_chg);
   fChain->SetBranchAddress("Muon_pfRelIso04_all", Muon_pfRelIso04_all, &b_Muon_pfRelIso04_all);
   fChain->SetBranchAddress("Muon_phi", Muon_phi, &b_Muon_phi);
   fChain->SetBranchAddress("Muon_pt", Muon_pt, &b_Muon_pt);
   fChain->SetBranchAddress("Muon_ptErr", Muon_ptErr, &b_Muon_ptErr);
   fChain->SetBranchAddress("Muon_segmentComp", Muon_segmentComp, &b_Muon_segmentComp);
   fChain->SetBranchAddress("Muon_sip3d", Muon_sip3d, &b_Muon_sip3d);
   fChain->SetBranchAddress("Muon_softMva", Muon_softMva, &b_Muon_softMva);
   fChain->SetBranchAddress("Muon_tkRelIso", Muon_tkRelIso, &b_Muon_tkRelIso);
   fChain->SetBranchAddress("Muon_tunepRelPt", Muon_tunepRelPt, &b_Muon_tunepRelPt);
   fChain->SetBranchAddress("Muon_mvaLowPt", Muon_mvaLowPt, &b_Muon_mvaLowPt);
   fChain->SetBranchAddress("Muon_mvaTTH", Muon_mvaTTH, &b_Muon_mvaTTH);
   fChain->SetBranchAddress("Muon_charge", Muon_charge, &b_Muon_charge);
   fChain->SetBranchAddress("Muon_jetIdx", Muon_jetIdx, &b_Muon_jetIdx);
   fChain->SetBranchAddress("Muon_nStations", Muon_nStations, &b_Muon_nStations);
   fChain->SetBranchAddress("Muon_nTrackerLayers", Muon_nTrackerLayers, &b_Muon_nTrackerLayers);
   fChain->SetBranchAddress("Muon_pdgId", Muon_pdgId, &b_Muon_pdgId);
   fChain->SetBranchAddress("Muon_tightCharge", Muon_tightCharge, &b_Muon_tightCharge);
   fChain->SetBranchAddress("Muon_fsrPhotonIdx", Muon_fsrPhotonIdx, &b_Muon_fsrPhotonIdx);
   fChain->SetBranchAddress("Muon_highPtId", Muon_highPtId, &b_Muon_highPtId);
   fChain->SetBranchAddress("Muon_highPurity", Muon_highPurity, &b_Muon_highPurity);
   fChain->SetBranchAddress("Muon_inTimeMuon", Muon_inTimeMuon, &b_Muon_inTimeMuon);
   fChain->SetBranchAddress("Muon_isGlobal", Muon_isGlobal, &b_Muon_isGlobal);
   fChain->SetBranchAddress("Muon_isPFcand", Muon_isPFcand, &b_Muon_isPFcand);
   fChain->SetBranchAddress("Muon_isStandalone", Muon_isStandalone, &b_Muon_isStandalone);
   fChain->SetBranchAddress("Muon_isTracker", Muon_isTracker, &b_Muon_isTracker);
   fChain->SetBranchAddress("Muon_jetNDauCharged", Muon_jetNDauCharged, &b_Muon_jetNDauCharged);
   fChain->SetBranchAddress("Muon_looseId", Muon_looseId, &b_Muon_looseId);
   fChain->SetBranchAddress("Muon_mediumId", Muon_mediumId, &b_Muon_mediumId);
   fChain->SetBranchAddress("Muon_mediumPromptId", Muon_mediumPromptId, &b_Muon_mediumPromptId);
   fChain->SetBranchAddress("Muon_miniIsoId", Muon_miniIsoId, &b_Muon_miniIsoId);
   fChain->SetBranchAddress("Muon_multiIsoId", Muon_multiIsoId, &b_Muon_multiIsoId);
   fChain->SetBranchAddress("Muon_mvaId", Muon_mvaId, &b_Muon_mvaId);
   fChain->SetBranchAddress("Muon_mvaLowPtId", Muon_mvaLowPtId, &b_Muon_mvaLowPtId);
   fChain->SetBranchAddress("Muon_pfIsoId", Muon_pfIsoId, &b_Muon_pfIsoId);
   fChain->SetBranchAddress("Muon_puppiIsoId", Muon_puppiIsoId, &b_Muon_puppiIsoId);
   fChain->SetBranchAddress("Muon_softId", Muon_softId, &b_Muon_softId);
   fChain->SetBranchAddress("Muon_softMvaId", Muon_softMvaId, &b_Muon_softMvaId);
   fChain->SetBranchAddress("Muon_tightId", Muon_tightId, &b_Muon_tightId);
   fChain->SetBranchAddress("Muon_tkIsoId", Muon_tkIsoId, &b_Muon_tkIsoId);
   fChain->SetBranchAddress("Muon_triggerIdLoose", Muon_triggerIdLoose, &b_Muon_triggerIdLoose);
   fChain->SetBranchAddress("nPhoton", &nPhoton, &b_nPhoton);
   fChain->SetBranchAddress("Photon_dEscaleDown", Photon_dEscaleDown, &b_Photon_dEscaleDown);
   fChain->SetBranchAddress("Photon_dEscaleUp", Photon_dEscaleUp, &b_Photon_dEscaleUp);
   fChain->SetBranchAddress("Photon_dEsigmaDown", Photon_dEsigmaDown, &b_Photon_dEsigmaDown);
   fChain->SetBranchAddress("Photon_dEsigmaUp", Photon_dEsigmaUp, &b_Photon_dEsigmaUp);
   fChain->SetBranchAddress("Photon_eCorr", Photon_eCorr, &b_Photon_eCorr);
   fChain->SetBranchAddress("Photon_energyErr", Photon_energyErr, &b_Photon_energyErr);
   fChain->SetBranchAddress("Photon_eta", Photon_eta, &b_Photon_eta);
   fChain->SetBranchAddress("Photon_hoe", Photon_hoe, &b_Photon_hoe);
   fChain->SetBranchAddress("Photon_mass", Photon_mass, &b_Photon_mass);
   fChain->SetBranchAddress("Photon_mvaID", Photon_mvaID, &b_Photon_mvaID);
   fChain->SetBranchAddress("Photon_mvaID_Fall17V1p1", Photon_mvaID_Fall17V1p1, &b_Photon_mvaID_Fall17V1p1);
   fChain->SetBranchAddress("Photon_pfRelIso03_all", Photon_pfRelIso03_all, &b_Photon_pfRelIso03_all);
   fChain->SetBranchAddress("Photon_pfRelIso03_chg", Photon_pfRelIso03_chg, &b_Photon_pfRelIso03_chg);
   fChain->SetBranchAddress("Photon_phi", Photon_phi, &b_Photon_phi);
   fChain->SetBranchAddress("Photon_pt", Photon_pt, &b_Photon_pt);
   fChain->SetBranchAddress("Photon_r9", Photon_r9, &b_Photon_r9);
   fChain->SetBranchAddress("Photon_sieie", Photon_sieie, &b_Photon_sieie);
   fChain->SetBranchAddress("Photon_charge", Photon_charge, &b_Photon_charge);
   fChain->SetBranchAddress("Photon_cutBased", Photon_cutBased, &b_Photon_cutBased);
   fChain->SetBranchAddress("Photon_cutBased_Fall17V1Bitmap", Photon_cutBased_Fall17V1Bitmap, &b_Photon_cutBased_Fall17V1Bitmap);
   fChain->SetBranchAddress("Photon_electronIdx", Photon_electronIdx, &b_Photon_electronIdx);
   fChain->SetBranchAddress("Photon_jetIdx", Photon_jetIdx, &b_Photon_jetIdx);
   fChain->SetBranchAddress("Photon_pdgId", Photon_pdgId, &b_Photon_pdgId);
   fChain->SetBranchAddress("Photon_vidNestedWPBitmap", Photon_vidNestedWPBitmap, &b_Photon_vidNestedWPBitmap);
   fChain->SetBranchAddress("Photon_electronVeto", Photon_electronVeto, &b_Photon_electronVeto);
   fChain->SetBranchAddress("Photon_isScEtaEB", Photon_isScEtaEB, &b_Photon_isScEtaEB);
   fChain->SetBranchAddress("Photon_isScEtaEE", Photon_isScEtaEE, &b_Photon_isScEtaEE);
   fChain->SetBranchAddress("Photon_mvaID_WP80", Photon_mvaID_WP80, &b_Photon_mvaID_WP80);
   fChain->SetBranchAddress("Photon_mvaID_WP90", Photon_mvaID_WP90, &b_Photon_mvaID_WP90);
   fChain->SetBranchAddress("Photon_pixelSeed", Photon_pixelSeed, &b_Photon_pixelSeed);
   fChain->SetBranchAddress("Photon_seedGain", Photon_seedGain, &b_Photon_seedGain);
   fChain->SetBranchAddress("Pileup_nTrueInt", &Pileup_nTrueInt, &b_Pileup_nTrueInt);
   fChain->SetBranchAddress("Pileup_pudensity", &Pileup_pudensity, &b_Pileup_pudensity);
   fChain->SetBranchAddress("Pileup_gpudensity", &Pileup_gpudensity, &b_Pileup_gpudensity);
   fChain->SetBranchAddress("Pileup_nPU", &Pileup_nPU, &b_Pileup_nPU);
   fChain->SetBranchAddress("Pileup_sumEOOT", &Pileup_sumEOOT, &b_Pileup_sumEOOT);
   fChain->SetBranchAddress("Pileup_sumLOOT", &Pileup_sumLOOT, &b_Pileup_sumLOOT);
   fChain->SetBranchAddress("PuppiMET_phi", &PuppiMET_phi, &b_PuppiMET_phi);
   fChain->SetBranchAddress("PuppiMET_phiJERDown", &PuppiMET_phiJERDown, &b_PuppiMET_phiJERDown);
   fChain->SetBranchAddress("PuppiMET_phiJERUp", &PuppiMET_phiJERUp, &b_PuppiMET_phiJERUp);
   fChain->SetBranchAddress("PuppiMET_phiJESDown", &PuppiMET_phiJESDown, &b_PuppiMET_phiJESDown);
   fChain->SetBranchAddress("PuppiMET_phiJESUp", &PuppiMET_phiJESUp, &b_PuppiMET_phiJESUp);
   fChain->SetBranchAddress("PuppiMET_phiUnclusteredDown", &PuppiMET_phiUnclusteredDown, &b_PuppiMET_phiUnclusteredDown);
   fChain->SetBranchAddress("PuppiMET_phiUnclusteredUp", &PuppiMET_phiUnclusteredUp, &b_PuppiMET_phiUnclusteredUp);
   fChain->SetBranchAddress("PuppiMET_pt", &PuppiMET_pt, &b_PuppiMET_pt);
   fChain->SetBranchAddress("PuppiMET_ptJERDown", &PuppiMET_ptJERDown, &b_PuppiMET_ptJERDown);
   fChain->SetBranchAddress("PuppiMET_ptJERUp", &PuppiMET_ptJERUp, &b_PuppiMET_ptJERUp);
   fChain->SetBranchAddress("PuppiMET_ptJESDown", &PuppiMET_ptJESDown, &b_PuppiMET_ptJESDown);
   fChain->SetBranchAddress("PuppiMET_ptJESUp", &PuppiMET_ptJESUp, &b_PuppiMET_ptJESUp);
   fChain->SetBranchAddress("PuppiMET_ptUnclusteredDown", &PuppiMET_ptUnclusteredDown, &b_PuppiMET_ptUnclusteredDown);
   fChain->SetBranchAddress("PuppiMET_ptUnclusteredUp", &PuppiMET_ptUnclusteredUp, &b_PuppiMET_ptUnclusteredUp);
   fChain->SetBranchAddress("PuppiMET_sumEt", &PuppiMET_sumEt, &b_PuppiMET_sumEt);
   fChain->SetBranchAddress("RawMET_phi", &RawMET_phi, &b_RawMET_phi);
   fChain->SetBranchAddress("RawMET_pt", &RawMET_pt, &b_RawMET_pt);
   fChain->SetBranchAddress("RawMET_sumEt", &RawMET_sumEt, &b_RawMET_sumEt);
   fChain->SetBranchAddress("RawPuppiMET_phi", &RawPuppiMET_phi, &b_RawPuppiMET_phi);
   fChain->SetBranchAddress("RawPuppiMET_pt", &RawPuppiMET_pt, &b_RawPuppiMET_pt);
   fChain->SetBranchAddress("RawPuppiMET_sumEt", &RawPuppiMET_sumEt, &b_RawPuppiMET_sumEt);
   fChain->SetBranchAddress("fixedGridRhoFastjetAll", &fixedGridRhoFastjetAll, &b_fixedGridRhoFastjetAll);
   fChain->SetBranchAddress("fixedGridRhoFastjetCentral", &fixedGridRhoFastjetCentral, &b_fixedGridRhoFastjetCentral);
   fChain->SetBranchAddress("fixedGridRhoFastjetCentralCalo", &fixedGridRhoFastjetCentralCalo, &b_fixedGridRhoFastjetCentralCalo);
   fChain->SetBranchAddress("fixedGridRhoFastjetCentralChargedPileUp", &fixedGridRhoFastjetCentralChargedPileUp, &b_fixedGridRhoFastjetCentralChargedPileUp);
   fChain->SetBranchAddress("fixedGridRhoFastjetCentralNeutral", &fixedGridRhoFastjetCentralNeutral, &b_fixedGridRhoFastjetCentralNeutral);
   fChain->SetBranchAddress("nGenIsolatedPhoton", &nGenIsolatedPhoton, &b_nGenIsolatedPhoton);
   fChain->SetBranchAddress("GenIsolatedPhoton_eta", GenIsolatedPhoton_eta, &b_GenIsolatedPhoton_eta);
   fChain->SetBranchAddress("GenIsolatedPhoton_mass", GenIsolatedPhoton_mass, &b_GenIsolatedPhoton_mass);
   fChain->SetBranchAddress("GenIsolatedPhoton_phi", GenIsolatedPhoton_phi, &b_GenIsolatedPhoton_phi);
   fChain->SetBranchAddress("GenIsolatedPhoton_pt", GenIsolatedPhoton_pt, &b_GenIsolatedPhoton_pt);
   fChain->SetBranchAddress("nTau", &nTau, &b_nTau);
   fChain->SetBranchAddress("Tau_chargedIso", Tau_chargedIso, &b_Tau_chargedIso);
   fChain->SetBranchAddress("Tau_dxy", Tau_dxy, &b_Tau_dxy);
   fChain->SetBranchAddress("Tau_dz", Tau_dz, &b_Tau_dz);
   fChain->SetBranchAddress("Tau_eta", Tau_eta, &b_Tau_eta);
   fChain->SetBranchAddress("Tau_leadTkDeltaEta", Tau_leadTkDeltaEta, &b_Tau_leadTkDeltaEta);
   fChain->SetBranchAddress("Tau_leadTkDeltaPhi", Tau_leadTkDeltaPhi, &b_Tau_leadTkDeltaPhi);
   fChain->SetBranchAddress("Tau_leadTkPtOverTauPt", Tau_leadTkPtOverTauPt, &b_Tau_leadTkPtOverTauPt);
   fChain->SetBranchAddress("Tau_mass", Tau_mass, &b_Tau_mass);
   fChain->SetBranchAddress("Tau_neutralIso", Tau_neutralIso, &b_Tau_neutralIso);
   fChain->SetBranchAddress("Tau_phi", Tau_phi, &b_Tau_phi);
   fChain->SetBranchAddress("Tau_photonsOutsideSignalCone", Tau_photonsOutsideSignalCone, &b_Tau_photonsOutsideSignalCone);
   fChain->SetBranchAddress("Tau_pt", Tau_pt, &b_Tau_pt);
   fChain->SetBranchAddress("Tau_puCorr", Tau_puCorr, &b_Tau_puCorr);
   fChain->SetBranchAddress("Tau_rawDeepTau2017v2p1VSe", Tau_rawDeepTau2017v2p1VSe, &b_Tau_rawDeepTau2017v2p1VSe);
   fChain->SetBranchAddress("Tau_rawDeepTau2017v2p1VSjet", Tau_rawDeepTau2017v2p1VSjet, &b_Tau_rawDeepTau2017v2p1VSjet);
   fChain->SetBranchAddress("Tau_rawDeepTau2017v2p1VSmu", Tau_rawDeepTau2017v2p1VSmu, &b_Tau_rawDeepTau2017v2p1VSmu);
   fChain->SetBranchAddress("Tau_rawIso", Tau_rawIso, &b_Tau_rawIso);
   fChain->SetBranchAddress("Tau_rawIsodR03", Tau_rawIsodR03, &b_Tau_rawIsodR03);
   fChain->SetBranchAddress("Tau_charge", Tau_charge, &b_Tau_charge);
   fChain->SetBranchAddress("Tau_decayMode", Tau_decayMode, &b_Tau_decayMode);
   fChain->SetBranchAddress("Tau_jetIdx", Tau_jetIdx, &b_Tau_jetIdx);
   fChain->SetBranchAddress("Tau_idAntiEleDeadECal", Tau_idAntiEleDeadECal, &b_Tau_idAntiEleDeadECal);
   fChain->SetBranchAddress("Tau_idAntiMu", Tau_idAntiMu, &b_Tau_idAntiMu);
   fChain->SetBranchAddress("Tau_idDecayModeOldDMs", Tau_idDecayModeOldDMs, &b_Tau_idDecayModeOldDMs);
   fChain->SetBranchAddress("Tau_idDeepTau2017v2p1VSe", Tau_idDeepTau2017v2p1VSe, &b_Tau_idDeepTau2017v2p1VSe);
   fChain->SetBranchAddress("Tau_idDeepTau2017v2p1VSjet", Tau_idDeepTau2017v2p1VSjet, &b_Tau_idDeepTau2017v2p1VSjet);
   fChain->SetBranchAddress("Tau_idDeepTau2017v2p1VSmu", Tau_idDeepTau2017v2p1VSmu, &b_Tau_idDeepTau2017v2p1VSmu);
   fChain->SetBranchAddress("TkMET_phi", &TkMET_phi, &b_TkMET_phi);
   fChain->SetBranchAddress("TkMET_pt", &TkMET_pt, &b_TkMET_pt);
   fChain->SetBranchAddress("TkMET_sumEt", &TkMET_sumEt, &b_TkMET_sumEt);
   fChain->SetBranchAddress("nTrigObj", &nTrigObj, &b_nTrigObj);
   fChain->SetBranchAddress("TrigObj_pt", TrigObj_pt, &b_TrigObj_pt);
   fChain->SetBranchAddress("TrigObj_eta", TrigObj_eta, &b_TrigObj_eta);
   fChain->SetBranchAddress("TrigObj_phi", TrigObj_phi, &b_TrigObj_phi);
   fChain->SetBranchAddress("TrigObj_l1pt", TrigObj_l1pt, &b_TrigObj_l1pt);
   fChain->SetBranchAddress("TrigObj_l1pt_2", TrigObj_l1pt_2, &b_TrigObj_l1pt_2);
   fChain->SetBranchAddress("TrigObj_l2pt", TrigObj_l2pt, &b_TrigObj_l2pt);
   fChain->SetBranchAddress("TrigObj_id", TrigObj_id, &b_TrigObj_id);
   fChain->SetBranchAddress("TrigObj_l1iso", TrigObj_l1iso, &b_TrigObj_l1iso);
   fChain->SetBranchAddress("TrigObj_l1charge", TrigObj_l1charge, &b_TrigObj_l1charge);
   fChain->SetBranchAddress("TrigObj_filterBits", TrigObj_filterBits, &b_TrigObj_filterBits);
   fChain->SetBranchAddress("genTtbarId", &genTtbarId, &b_genTtbarId);
   fChain->SetBranchAddress("nOtherPV", &nOtherPV, &b_nOtherPV);
   fChain->SetBranchAddress("OtherPV_z", OtherPV_z, &b_OtherPV_z);
   fChain->SetBranchAddress("PV_ndof", &PV_ndof, &b_PV_ndof);
   fChain->SetBranchAddress("PV_x", &PV_x, &b_PV_x);
   fChain->SetBranchAddress("PV_y", &PV_y, &b_PV_y);
   fChain->SetBranchAddress("PV_z", &PV_z, &b_PV_z);
   fChain->SetBranchAddress("PV_chi2", &PV_chi2, &b_PV_chi2);
   fChain->SetBranchAddress("PV_score", &PV_score, &b_PV_score);
   fChain->SetBranchAddress("PV_npvs", &PV_npvs, &b_PV_npvs);
   fChain->SetBranchAddress("PV_npvsGood", &PV_npvsGood, &b_PV_npvsGood);
   fChain->SetBranchAddress("boostedTau_genPartIdx", boostedTau_genPartIdx, &b_boostedTau_genPartIdx);
   fChain->SetBranchAddress("boostedTau_genPartFlav", boostedTau_genPartFlav, &b_boostedTau_genPartFlav);
   fChain->SetBranchAddress("Electron_genPartIdx", Electron_genPartIdx, &b_Electron_genPartIdx);
   fChain->SetBranchAddress("Electron_genPartFlav", Electron_genPartFlav, &b_Electron_genPartFlav);
   fChain->SetBranchAddress("GenJetAK8_partonFlavour", GenJetAK8_partonFlavour, &b_GenJetAK8_partonFlavour);
   fChain->SetBranchAddress("GenJetAK8_hadronFlavour", GenJetAK8_hadronFlavour, &b_GenJetAK8_hadronFlavour);
   fChain->SetBranchAddress("GenJet_partonFlavour", GenJet_partonFlavour, &b_GenJet_partonFlavour);
   fChain->SetBranchAddress("GenJet_hadronFlavour", GenJet_hadronFlavour, &b_GenJet_hadronFlavour);
   fChain->SetBranchAddress("GenVtx_t0", &GenVtx_t0, &b_GenVtx_t0);
   fChain->SetBranchAddress("Jet_genJetIdx", Jet_genJetIdx, &b_Jet_genJetIdx);
   fChain->SetBranchAddress("Jet_hadronFlavour", Jet_hadronFlavour, &b_Jet_hadronFlavour);
   fChain->SetBranchAddress("Jet_partonFlavour", Jet_partonFlavour, &b_Jet_partonFlavour);
   fChain->SetBranchAddress("LowPtElectron_genPartIdx", LowPtElectron_genPartIdx, &b_LowPtElectron_genPartIdx);
   fChain->SetBranchAddress("LowPtElectron_genPartFlav", LowPtElectron_genPartFlav, &b_LowPtElectron_genPartFlav);
   fChain->SetBranchAddress("Muon_genPartIdx", Muon_genPartIdx, &b_Muon_genPartIdx);
   fChain->SetBranchAddress("Muon_genPartFlav", Muon_genPartFlav, &b_Muon_genPartFlav);
   fChain->SetBranchAddress("Photon_genPartIdx", Photon_genPartIdx, &b_Photon_genPartIdx);
   fChain->SetBranchAddress("Photon_genPartFlav", Photon_genPartFlav, &b_Photon_genPartFlav);
   fChain->SetBranchAddress("MET_fiducialGenPhi", &MET_fiducialGenPhi, &b_MET_fiducialGenPhi);
   fChain->SetBranchAddress("MET_fiducialGenPt", &MET_fiducialGenPt, &b_MET_fiducialGenPt);
   fChain->SetBranchAddress("Tau_genPartIdx", Tau_genPartIdx, &b_Tau_genPartIdx);
   fChain->SetBranchAddress("Tau_genPartFlav", Tau_genPartFlav, &b_Tau_genPartFlav);
   fChain->SetBranchAddress("Flag_HBHENoiseFilter", &Flag_HBHENoiseFilter, &b_Flag_HBHENoiseFilter);
   fChain->SetBranchAddress("Flag_HBHENoiseIsoFilter", &Flag_HBHENoiseIsoFilter, &b_Flag_HBHENoiseIsoFilter);
   fChain->SetBranchAddress("Flag_CSCTightHaloFilter", &Flag_CSCTightHaloFilter, &b_Flag_CSCTightHaloFilter);
   fChain->SetBranchAddress("Flag_CSCTightHaloTrkMuUnvetoFilter", &Flag_CSCTightHaloTrkMuUnvetoFilter, &b_Flag_CSCTightHaloTrkMuUnvetoFilter);
   fChain->SetBranchAddress("Flag_CSCTightHalo2015Filter", &Flag_CSCTightHalo2015Filter, &b_Flag_CSCTightHalo2015Filter);
   fChain->SetBranchAddress("Flag_globalTightHalo2016Filter", &Flag_globalTightHalo2016Filter, &b_Flag_globalTightHalo2016Filter);
   fChain->SetBranchAddress("Flag_globalSuperTightHalo2016Filter", &Flag_globalSuperTightHalo2016Filter, &b_Flag_globalSuperTightHalo2016Filter);
   fChain->SetBranchAddress("Flag_HcalStripHaloFilter", &Flag_HcalStripHaloFilter, &b_Flag_HcalStripHaloFilter);
   fChain->SetBranchAddress("Flag_hcalLaserEventFilter", &Flag_hcalLaserEventFilter, &b_Flag_hcalLaserEventFilter);
   fChain->SetBranchAddress("Flag_EcalDeadCellTriggerPrimitiveFilter", &Flag_EcalDeadCellTriggerPrimitiveFilter, &b_Flag_EcalDeadCellTriggerPrimitiveFilter);
   fChain->SetBranchAddress("Flag_EcalDeadCellBoundaryEnergyFilter", &Flag_EcalDeadCellBoundaryEnergyFilter, &b_Flag_EcalDeadCellBoundaryEnergyFilter);
   fChain->SetBranchAddress("Flag_ecalBadCalibFilter", &Flag_ecalBadCalibFilter, &b_Flag_ecalBadCalibFilter);
   fChain->SetBranchAddress("Flag_goodVertices", &Flag_goodVertices, &b_Flag_goodVertices);
   fChain->SetBranchAddress("Flag_eeBadScFilter", &Flag_eeBadScFilter, &b_Flag_eeBadScFilter);
   fChain->SetBranchAddress("Flag_ecalLaserCorrFilter", &Flag_ecalLaserCorrFilter, &b_Flag_ecalLaserCorrFilter);
   fChain->SetBranchAddress("Flag_trkPOGFilters", &Flag_trkPOGFilters, &b_Flag_trkPOGFilters);
   fChain->SetBranchAddress("Flag_chargedHadronTrackResolutionFilter", &Flag_chargedHadronTrackResolutionFilter, &b_Flag_chargedHadronTrackResolutionFilter);
   fChain->SetBranchAddress("Flag_muonBadTrackFilter", &Flag_muonBadTrackFilter, &b_Flag_muonBadTrackFilter);
   fChain->SetBranchAddress("Flag_BadChargedCandidateFilter", &Flag_BadChargedCandidateFilter, &b_Flag_BadChargedCandidateFilter);
   fChain->SetBranchAddress("Flag_BadPFMuonFilter", &Flag_BadPFMuonFilter, &b_Flag_BadPFMuonFilter);
   fChain->SetBranchAddress("Flag_BadPFMuonDzFilter", &Flag_BadPFMuonDzFilter, &b_Flag_BadPFMuonDzFilter);
   fChain->SetBranchAddress("Flag_hfNoisyHitsFilter", &Flag_hfNoisyHitsFilter, &b_Flag_hfNoisyHitsFilter);
   fChain->SetBranchAddress("Flag_BadChargedCandidateSummer16Filter", &Flag_BadChargedCandidateSummer16Filter, &b_Flag_BadChargedCandidateSummer16Filter);
   fChain->SetBranchAddress("Flag_BadPFMuonSummer16Filter", &Flag_BadPFMuonSummer16Filter, &b_Flag_BadPFMuonSummer16Filter);
   fChain->SetBranchAddress("Flag_trkPOG_manystripclus53X", &Flag_trkPOG_manystripclus53X, &b_Flag_trkPOG_manystripclus53X);
   fChain->SetBranchAddress("Flag_trkPOG_toomanystripclus53X", &Flag_trkPOG_toomanystripclus53X, &b_Flag_trkPOG_toomanystripclus53X);
   fChain->SetBranchAddress("Flag_trkPOG_logErrorTooManyClusters", &Flag_trkPOG_logErrorTooManyClusters, &b_Flag_trkPOG_logErrorTooManyClusters);
   fChain->SetBranchAddress("Flag_METFilters", &Flag_METFilters, &b_Flag_METFilters);
   fChain->SetBranchAddress("L1Reco_step", &L1Reco_step, &b_L1Reco_step);
   fChain->SetBranchAddress("HLTriggerFirstPath", &HLTriggerFirstPath, &b_HLTriggerFirstPath);
   fChain->SetBranchAddress("HLT_DoubleMu3_Trk_Tau3mu", &HLT_DoubleMu3_Trk_Tau3mu, &b_HLT_DoubleMu3_Trk_Tau3mu);
   fChain->SetBranchAddress("HLT_DoubleMu3_TkMu_DsTau3Mu", &HLT_DoubleMu3_TkMu_DsTau3Mu, &b_HLT_DoubleMu3_TkMu_DsTau3Mu);
   fChain->SetBranchAddress("HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_CrossL1", &HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_CrossL1, &b_HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_CrossL1);
   fChain->SetBranchAddress("HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_CrossL1", &HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_CrossL1, &b_HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_CrossL1);
   fChain->SetBranchAddress("HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_CrossL1", &HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_CrossL1, &b_HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_CrossL1);
   fChain->SetBranchAddress("HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1", &HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1, &b_HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1);
   fChain->SetBranchAddress("HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1", &HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1, &b_HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1);
   fChain->SetBranchAddress("HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1", &HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1, &b_HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1);
   fChain->SetBranchAddress("HLT_IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_CrossL1", &HLT_IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_CrossL1, &b_HLT_IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_CrossL1);
   fChain->SetBranchAddress("HLT_IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_CrossL1", &HLT_IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_CrossL1, &b_HLT_IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_CrossL1);
   fChain->SetBranchAddress("HLT_IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_CrossL1", &HLT_IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_CrossL1, &b_HLT_IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_CrossL1);
   fChain->SetBranchAddress("HLT_IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1", &HLT_IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1, &b_HLT_IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1);
   fChain->SetBranchAddress("HLT_IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1", &HLT_IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1, &b_HLT_IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1);
   fChain->SetBranchAddress("HLT_IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1", &HLT_IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1, &b_HLT_IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1);
   fChain->SetBranchAddress("HLT_IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1", &HLT_IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1, &b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1);
   fChain->SetBranchAddress("HLT_IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1", &HLT_IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1, &b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1);
   fChain->SetBranchAddress("HLT_IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1", &HLT_IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1, &b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1);
   fChain->SetBranchAddress("HLT_IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1", &HLT_IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1, &b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1);
   fChain->SetBranchAddress("HLT_IsoMu27_LooseChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1", &HLT_IsoMu27_LooseChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1, &b_HLT_IsoMu27_LooseChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1);
   fChain->SetBranchAddress("HLT_IsoMu27_MediumChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1", &HLT_IsoMu27_MediumChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1, &b_HLT_IsoMu27_MediumChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1);
   fChain->SetBranchAddress("HLT_IsoMu27_TightChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1", &HLT_IsoMu27_TightChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1, &b_HLT_IsoMu27_TightChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1);
   fChain->SetBranchAddress("HLT_IsoMu20", &HLT_IsoMu20, &b_HLT_IsoMu20);
   fChain->SetBranchAddress("HLT_IsoMu24", &HLT_IsoMu24, &b_HLT_IsoMu24);
   fChain->SetBranchAddress("HLT_IsoMu24_eta2p1", &HLT_IsoMu24_eta2p1, &b_HLT_IsoMu24_eta2p1);
   fChain->SetBranchAddress("HLT_IsoMu27", &HLT_IsoMu27, &b_HLT_IsoMu27);
   fChain->SetBranchAddress("HLT_IsoMu30", &HLT_IsoMu30, &b_HLT_IsoMu30);
   fChain->SetBranchAddress("HLT_Mu12", &HLT_Mu12, &b_HLT_Mu12);
   fChain->SetBranchAddress("HLT_Mu15", &HLT_Mu15, &b_HLT_Mu15);
   fChain->SetBranchAddress("HLT_Mu20", &HLT_Mu20, &b_HLT_Mu20);
   fChain->SetBranchAddress("HLT_Mu27", &HLT_Mu27, &b_HLT_Mu27);
   fChain->SetBranchAddress("HLT_Mu50", &HLT_Mu50, &b_HLT_Mu50);
   fChain->SetBranchAddress("HLT_Mu55", &HLT_Mu55, &b_HLT_Mu55);
   fChain->SetBranchAddress("HLT_OldMu100", &HLT_OldMu100, &b_HLT_OldMu100);
   fChain->SetBranchAddress("HLT_TkMu100", &HLT_TkMu100, &b_HLT_TkMu100);
   fChain->SetBranchAddress("HLT_IsoMu24_TwoProngs35", &HLT_IsoMu24_TwoProngs35, &b_HLT_IsoMu24_TwoProngs35);
   fChain->SetBranchAddress("HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15", &HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15, &b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15);
   fChain->SetBranchAddress("HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1", &HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1, &b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1);
   fChain->SetBranchAddress("HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15", &HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15, &b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15);
   fChain->SetBranchAddress("HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1", &HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1, &b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1);
   fChain->SetBranchAddress("HLT_DoubleMu3_Trk_Tau3mu_NoL1Mass", &HLT_DoubleMu3_Trk_Tau3mu_NoL1Mass, &b_HLT_DoubleMu3_Trk_Tau3mu_NoL1Mass);
   fChain->SetBranchAddress("HLT_Mu8", &HLT_Mu8, &b_HLT_Mu8);
   fChain->SetBranchAddress("HLT_Mu17", &HLT_Mu17, &b_HLT_Mu17);
   fChain->SetBranchAddress("HLT_Mu19", &HLT_Mu19, &b_HLT_Mu19);
   fChain->SetBranchAddress("HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr", &HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr, &b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr);
   fChain->SetBranchAddress("HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90", &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90, &b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90);
   fChain->SetBranchAddress("HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100", &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100, &b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100);
   fChain->SetBranchAddress("HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110", &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110, &b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110);
   fChain->SetBranchAddress("HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120", &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120, &b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120);
   fChain->SetBranchAddress("HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130", &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130, &b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130);
   fChain->SetBranchAddress("HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET140", &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET140, &b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET140);
   fChain->SetBranchAddress("HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr", &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr, &b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr);
   fChain->SetBranchAddress("HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr", &HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr, &b_HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr);
   fChain->SetBranchAddress("HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1", &HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1, &b_HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1);
   fChain->SetBranchAddress("HLT_MediumChargedIsoPFTau200HighPtRelaxedIso_Trk50_eta2p1", &HLT_MediumChargedIsoPFTau200HighPtRelaxedIso_Trk50_eta2p1, &b_HLT_MediumChargedIsoPFTau200HighPtRelaxedIso_Trk50_eta2p1);
   fChain->SetBranchAddress("HLT_MediumChargedIsoPFTau220HighPtRelaxedIso_Trk50_eta2p1", &HLT_MediumChargedIsoPFTau220HighPtRelaxedIso_Trk50_eta2p1, &b_HLT_MediumChargedIsoPFTau220HighPtRelaxedIso_Trk50_eta2p1);
   fChain->SetBranchAddress("HLT_IsoMu27_MET90", &HLT_IsoMu27_MET90, &b_HLT_IsoMu27_MET90);
   fChain->SetBranchAddress("HLT_DoubleTightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg", &HLT_DoubleTightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg, &b_HLT_DoubleTightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg);
   fChain->SetBranchAddress("HLT_DoubleMediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg", &HLT_DoubleMediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg, &b_HLT_DoubleMediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg);
   fChain->SetBranchAddress("HLT_DoubleMediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg", &HLT_DoubleMediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg, &b_HLT_DoubleMediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg);
   fChain->SetBranchAddress("HLT_DoubleTightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg", &HLT_DoubleTightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg, &b_HLT_DoubleTightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg);
   fChain->SetBranchAddress("HLT_DoubleMediumChargedIsoPFTauHPS40_Trk1_eta2p1_Reg", &HLT_DoubleMediumChargedIsoPFTauHPS40_Trk1_eta2p1_Reg, &b_HLT_DoubleMediumChargedIsoPFTauHPS40_Trk1_eta2p1_Reg);
   fChain->SetBranchAddress("HLT_DoubleTightChargedIsoPFTauHPS40_Trk1_eta2p1_Reg", &HLT_DoubleTightChargedIsoPFTauHPS40_Trk1_eta2p1_Reg, &b_HLT_DoubleTightChargedIsoPFTauHPS40_Trk1_eta2p1_Reg);
   fChain->SetBranchAddress("HLT_DoubleMediumChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg", &HLT_DoubleMediumChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg, &b_HLT_DoubleMediumChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg);
   fChain->SetBranchAddress("HLT_DoubleTightChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg", &HLT_DoubleTightChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg, &b_HLT_DoubleTightChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg);
   fChain->SetBranchAddress("HLT_VBF_DoubleLooseChargedIsoPFTauHPS20_Trk1_eta2p1", &HLT_VBF_DoubleLooseChargedIsoPFTauHPS20_Trk1_eta2p1, &b_HLT_VBF_DoubleLooseChargedIsoPFTauHPS20_Trk1_eta2p1);
   fChain->SetBranchAddress("HLT_VBF_DoubleMediumChargedIsoPFTauHPS20_Trk1_eta2p1", &HLT_VBF_DoubleMediumChargedIsoPFTauHPS20_Trk1_eta2p1, &b_HLT_VBF_DoubleMediumChargedIsoPFTauHPS20_Trk1_eta2p1);
   fChain->SetBranchAddress("HLT_VBF_DoubleTightChargedIsoPFTauHPS20_Trk1_eta2p1", &HLT_VBF_DoubleTightChargedIsoPFTauHPS20_Trk1_eta2p1, &b_HLT_VBF_DoubleTightChargedIsoPFTauHPS20_Trk1_eta2p1);
   fChain->SetBranchAddress("HLTriggerFinalPath", &HLTriggerFinalPath, &b_HLTriggerFinalPath);
   fChain->SetBranchAddress("L1simulation_step", &L1simulation_step, &b_L1simulation_step);
   fChain->SetBranchAddress("METfilters", &METfilters, &b_METfilters);
   fChain->SetBranchAddress("PUweight", &PUweight, &b_PUweight);
   fChain->SetBranchAddress("PUweight_up", &PUweight_up, &b_PUweight_up);
   fChain->SetBranchAddress("PUweight_down", &PUweight_down, &b_PUweight_down);
   fChain->SetBranchAddress("ProcessID", &ProcessID, &b_ProcessID);
   fChain->SetBranchAddress("XSec", &XSec, &b_XSec);
   fChain->SetBranchAddress("XSec_up", &XSec_up, &b_XSec_up);
   fChain->SetBranchAddress("XSec_down", &XSec_down, &b_XSec_down);
   fChain->SetBranchAddress("NEvents", &NEvents, &b_NEvents);
   fChain->SetBranchAddress("NWEvents", &NWEvents, &b_NWEvents);
   fChain->SetBranchAddress("XSecMCweight", &XSecMCweight, &b_XSecMCweight);
   fChain->SetBranchAddress("Trigger_ditau", &Trigger_ditau, &b_Trigger_ditau);
   fChain->SetBranchAddress("Trigger_ditau_mass", &Trigger_ditau_mass, &b_Trigger_ditau_mass);
   fChain->SetBranchAddress("Tau_energyScale", Tau_energyScale, &b_Tau_energyScale);
   fChain->SetBranchAddress("Tau_energyScale_DM0_up", Tau_energyScale_DM0_up, &b_Tau_energyScale_DM0_up);
   fChain->SetBranchAddress("Tau_energyScale_DM0_down", Tau_energyScale_DM0_down, &b_Tau_energyScale_DM0_down);
   fChain->SetBranchAddress("Tau_energyScale_DM1_up", Tau_energyScale_DM1_up, &b_Tau_energyScale_DM1_up);
   fChain->SetBranchAddress("Tau_energyScale_DM1_down", Tau_energyScale_DM1_down, &b_Tau_energyScale_DM1_down);
   fChain->SetBranchAddress("Tau_energyScale_DM2_up", Tau_energyScale_DM2_up, &b_Tau_energyScale_DM2_up);
   fChain->SetBranchAddress("Tau_energyScale_DM2_down", Tau_energyScale_DM2_down, &b_Tau_energyScale_DM2_down);
   fChain->SetBranchAddress("Tau_energyScale_DM10_up", Tau_energyScale_DM10_up, &b_Tau_energyScale_DM10_up);
   fChain->SetBranchAddress("Tau_energyScale_DM10_down", Tau_energyScale_DM10_down, &b_Tau_energyScale_DM10_down);
   fChain->SetBranchAddress("Tau_energyScale_DM11_up", Tau_energyScale_DM11_up, &b_Tau_energyScale_DM11_up);
   fChain->SetBranchAddress("Tau_energyScale_DM11_down", Tau_energyScale_DM11_down, &b_Tau_energyScale_DM11_down);
   fChain->SetBranchAddress("nPionTrack", &nPionTrack, &b_nPionTrack);
   fChain->SetBranchAddress("PionTrack_pt", PionTrack_pt, &b_PionTrack_pt);
   fChain->SetBranchAddress("PionTrack_eta", PionTrack_eta, &b_PionTrack_eta);
   fChain->SetBranchAddress("PionTrack_phi", PionTrack_phi, &b_PionTrack_phi);
   fChain->SetBranchAddress("PionTrack_pdgId", PionTrack_pdgId, &b_PionTrack_pdgId);
   fChain->SetBranchAddress("PionTrack_charge", PionTrack_charge, &b_PionTrack_charge);
   fChain->SetBranchAddress("PionTrack_isotrackIdx", PionTrack_isotrackIdx, &b_PionTrack_isotrackIdx);
   fChain->SetBranchAddress("nLepton", &nLepton, &b_nLepton);
   fChain->SetBranchAddress("Lepton_pt", Lepton_pt, &b_Lepton_pt);
   fChain->SetBranchAddress("Lepton_eta", Lepton_eta, &b_Lepton_eta);
   fChain->SetBranchAddress("Lepton_phi", Lepton_phi, &b_Lepton_phi);
   fChain->SetBranchAddress("Lepton_mass", Lepton_mass, &b_Lepton_mass);
   fChain->SetBranchAddress("Lepton_pdgId", Lepton_pdgId, &b_Lepton_pdgId);
   fChain->SetBranchAddress("Lepton_iso", Lepton_iso, &b_Lepton_iso);
   fChain->SetBranchAddress("Lepton_elIdx", Lepton_elIdx, &b_Lepton_elIdx);
   fChain->SetBranchAddress("Lepton_muIdx", Lepton_muIdx, &b_Lepton_muIdx);
   fChain->SetBranchAddress("Lepton_tauIdx", Lepton_tauIdx, &b_Lepton_tauIdx);
   fChain->SetBranchAddress("LeptonVeto", &LeptonVeto, &b_LeptonVeto);
   fChain->SetBranchAddress("nCleanJet", &nCleanJet, &b_nCleanJet);
   fChain->SetBranchAddress("CleanJet_pt", CleanJet_pt, &b_CleanJet_pt);
   fChain->SetBranchAddress("CleanJet_eta", CleanJet_eta, &b_CleanJet_eta);
   fChain->SetBranchAddress("CleanJet_phi", CleanJet_phi, &b_CleanJet_phi);
   fChain->SetBranchAddress("CleanJet_mass", CleanJet_mass, &b_CleanJet_mass);
   fChain->SetBranchAddress("CleanJet_jetIdx", CleanJet_jetIdx, &b_CleanJet_jetIdx);
   fChain->SetBranchAddress("Lepton_TrigObjIdx", Lepton_TrigObjIdx, &b_Lepton_TrigObjIdx);
   fChain->SetBranchAddress("nPionTriplet", &nPionTriplet, &b_nPionTriplet);
   fChain->SetBranchAddress("PionTriplet_pdgId", PionTriplet_pdgId, &b_PionTriplet_pdgId);
   fChain->SetBranchAddress("PionTriplet_charge", PionTriplet_charge, &b_PionTriplet_charge);
   fChain->SetBranchAddress("PionTriplet_trailingIsTrack", PionTriplet_trailingIsTrack, &b_PionTriplet_trailingIsTrack);
   fChain->SetBranchAddress("PionTriplet_FSpions1", PionTriplet_FSpions1, &b_PionTriplet_FSpions1);
   fChain->SetBranchAddress("PionTriplet_FSpions2", PionTriplet_FSpions2, &b_PionTriplet_FSpions2);
   fChain->SetBranchAddress("PionTriplet_FSpions3", PionTriplet_FSpions3, &b_PionTriplet_FSpions3);
   fChain->SetBranchAddress("PionTriplet_CountOfItsKind", PionTriplet_CountOfItsKind, &b_PionTriplet_CountOfItsKind);
   fChain->SetBranchAddress("PionTriplet_TriggerMatched", PionTriplet_TriggerMatched, &b_PionTriplet_TriggerMatched);
   fChain->SetBranchAddress("PionTripletCount_TauHasSignal", &PionTripletCount_TauHasSignal, &b_PionTripletCount_TauHasSignal);
   fChain->SetBranchAddress("PionTripletCount_TauHasBadCharge", &PionTripletCount_TauHasBadCharge, &b_PionTripletCount_TauHasBadCharge);
   fChain->SetBranchAddress("PionTripletCount_TauHasMuons", &PionTripletCount_TauHasMuons, &b_PionTripletCount_TauHasMuons);
   fChain->SetBranchAddress("PionTripletCount_TrackHasSignal", &PionTripletCount_TrackHasSignal, &b_PionTripletCount_TrackHasSignal);
   fChain->SetBranchAddress("PionTripletCount_TrackHasBadCharge", &PionTripletCount_TrackHasBadCharge, &b_PionTripletCount_TrackHasBadCharge);
   fChain->SetBranchAddress("PionTripletCount_TrackHasMuons", &PionTripletCount_TrackHasMuons, &b_PionTripletCount_TrackHasMuons);
   fChain->SetBranchAddress("PionTriplet_TauSFweight", PionTriplet_TauSFweight, &b_PionTriplet_TauSFweight);
   fChain->SetBranchAddress("PionTriplet_TauSFweight_ID", PionTriplet_TauSFweight_ID, &b_PionTriplet_TauSFweight_ID);
   fChain->SetBranchAddress("PionTriplet_TauSFweight_ID_tau_pT20to25_up", PionTriplet_TauSFweight_ID_tau_pT20to25_up, &b_PionTriplet_TauSFweight_ID_tau_pT20to25_up);
   fChain->SetBranchAddress("PionTriplet_TauSFweight_ID_tau_pT20to25_down", PionTriplet_TauSFweight_ID_tau_pT20to25_down, &b_PionTriplet_TauSFweight_ID_tau_pT20to25_down);
   fChain->SetBranchAddress("PionTriplet_TauSFweight_ID_tau_pT25to30_up", PionTriplet_TauSFweight_ID_tau_pT25to30_up, &b_PionTriplet_TauSFweight_ID_tau_pT25to30_up);
   fChain->SetBranchAddress("PionTriplet_TauSFweight_ID_tau_pT25to30_down", PionTriplet_TauSFweight_ID_tau_pT25to30_down, &b_PionTriplet_TauSFweight_ID_tau_pT25to30_down);
   fChain->SetBranchAddress("PionTriplet_TauSFweight_ID_tau_pT30to35_up", PionTriplet_TauSFweight_ID_tau_pT30to35_up, &b_PionTriplet_TauSFweight_ID_tau_pT30to35_up);
   fChain->SetBranchAddress("PionTriplet_TauSFweight_ID_tau_pT30to35_down", PionTriplet_TauSFweight_ID_tau_pT30to35_down, &b_PionTriplet_TauSFweight_ID_tau_pT30to35_down);
   fChain->SetBranchAddress("PionTriplet_TauSFweight_ID_tau_pT35to40_up", PionTriplet_TauSFweight_ID_tau_pT35to40_up, &b_PionTriplet_TauSFweight_ID_tau_pT35to40_up);
   fChain->SetBranchAddress("PionTriplet_TauSFweight_ID_tau_pT35to40_down", PionTriplet_TauSFweight_ID_tau_pT35to40_down, &b_PionTriplet_TauSFweight_ID_tau_pT35to40_down);
   fChain->SetBranchAddress("PionTriplet_TauSFweight_ID_tau_pT40toInf_up", PionTriplet_TauSFweight_ID_tau_pT40toInf_up, &b_PionTriplet_TauSFweight_ID_tau_pT40toInf_up);
   fChain->SetBranchAddress("PionTriplet_TauSFweight_ID_tau_pT40toInf_down", PionTriplet_TauSFweight_ID_tau_pT40toInf_down, &b_PionTriplet_TauSFweight_ID_tau_pT40toInf_down);
   fChain->SetBranchAddress("PionTriplet_TauSFweight_ID_mu_eta0to0.4_up", PionTriplet_TauSFweight_ID_mu_eta0to0_4_up, &b_PionTriplet_TauSFweight_ID_mu_eta0to0_4_up);
   fChain->SetBranchAddress("PionTriplet_TauSFweight_ID_mu_eta0to0.4_down", PionTriplet_TauSFweight_ID_mu_eta0to0_4_down, &b_PionTriplet_TauSFweight_ID_mu_eta0to0_4_down);
   fChain->SetBranchAddress("PionTriplet_TauSFweight_ID_mu_eta0.4to0.8_up", PionTriplet_TauSFweight_ID_mu_eta0_4to0_8_up, &b_PionTriplet_TauSFweight_ID_mu_eta0_4to0_8_up);
   fChain->SetBranchAddress("PionTriplet_TauSFweight_ID_mu_eta0.4to0.8_down", PionTriplet_TauSFweight_ID_mu_eta0_4to0_8_down, &b_PionTriplet_TauSFweight_ID_mu_eta0_4to0_8_down);
   fChain->SetBranchAddress("PionTriplet_TauSFweight_ID_mu_eta0.8to1.2_up", PionTriplet_TauSFweight_ID_mu_eta0_8to1_2_up, &b_PionTriplet_TauSFweight_ID_mu_eta0_8to1_2_up);
   fChain->SetBranchAddress("PionTriplet_TauSFweight_ID_mu_eta0.8to1.2_down", PionTriplet_TauSFweight_ID_mu_eta0_8to1_2_down, &b_PionTriplet_TauSFweight_ID_mu_eta0_8to1_2_down);
   fChain->SetBranchAddress("PionTriplet_TauSFweight_ID_mu_eta1.2to1.7_up", PionTriplet_TauSFweight_ID_mu_eta1_2to1_7_up, &b_PionTriplet_TauSFweight_ID_mu_eta1_2to1_7_up);
   fChain->SetBranchAddress("PionTriplet_TauSFweight_ID_mu_eta1.2to1.7_down", PionTriplet_TauSFweight_ID_mu_eta1_2to1_7_down, &b_PionTriplet_TauSFweight_ID_mu_eta1_2to1_7_down);
   fChain->SetBranchAddress("PionTriplet_TauSFweight_ID_mu_eta1.7to2.3_up", PionTriplet_TauSFweight_ID_mu_eta1_7to2_3_up, &b_PionTriplet_TauSFweight_ID_mu_eta1_7to2_3_up);
   fChain->SetBranchAddress("PionTriplet_TauSFweight_ID_mu_eta1.7to2.3_down", PionTriplet_TauSFweight_ID_mu_eta1_7to2_3_down, &b_PionTriplet_TauSFweight_ID_mu_eta1_7to2_3_down);
   fChain->SetBranchAddress("PionTriplet_TauSFweight_ID_el_eta0to1.5_up", PionTriplet_TauSFweight_ID_el_eta0to1_5_up, &b_PionTriplet_TauSFweight_ID_el_eta0to1_5_up);
   fChain->SetBranchAddress("PionTriplet_TauSFweight_ID_el_eta0to1.5_down", PionTriplet_TauSFweight_ID_el_eta0to1_5_down, &b_PionTriplet_TauSFweight_ID_el_eta0to1_5_down);
   fChain->SetBranchAddress("PionTriplet_TauSFweight_ID_el_eta1.5to2.3_up", PionTriplet_TauSFweight_ID_el_eta1_5to2_3_up, &b_PionTriplet_TauSFweight_ID_el_eta1_5to2_3_up);
   fChain->SetBranchAddress("PionTriplet_TauSFweight_ID_el_eta1.5to2.3_down", PionTriplet_TauSFweight_ID_el_eta1_5to2_3_down, &b_PionTriplet_TauSFweight_ID_el_eta1_5to2_3_down);
   fChain->SetBranchAddress("PionTriplet_TauSFweight_Trig", PionTriplet_TauSFweight_Trig, &b_PionTriplet_TauSFweight_Trig);
   fChain->SetBranchAddress("PionTriplet_TauSFweight_Trig_DM0_up", PionTriplet_TauSFweight_Trig_DM0_up, &b_PionTriplet_TauSFweight_Trig_DM0_up);
   fChain->SetBranchAddress("PionTriplet_TauSFweight_Trig_DM0_down", PionTriplet_TauSFweight_Trig_DM0_down, &b_PionTriplet_TauSFweight_Trig_DM0_down);
   fChain->SetBranchAddress("PionTriplet_TauSFweight_Trig_DM1_up", PionTriplet_TauSFweight_Trig_DM1_up, &b_PionTriplet_TauSFweight_Trig_DM1_up);
   fChain->SetBranchAddress("PionTriplet_TauSFweight_Trig_DM1_down", PionTriplet_TauSFweight_Trig_DM1_down, &b_PionTriplet_TauSFweight_Trig_DM1_down);
   fChain->SetBranchAddress("nGenLepton", &nGenLepton, &b_nGenLepton);
   fChain->SetBranchAddress("GenLepton_pt", GenLepton_pt, &b_GenLepton_pt);
   fChain->SetBranchAddress("GenLepton_eta", GenLepton_eta, &b_GenLepton_eta);
   fChain->SetBranchAddress("GenLepton_phi", GenLepton_phi, &b_GenLepton_phi);
   fChain->SetBranchAddress("GenLepton_mass", GenLepton_mass, &b_GenLepton_mass);
   fChain->SetBranchAddress("GenLepton_pdgId", GenLepton_pdgId, &b_GenLepton_pdgId);
   fChain->SetBranchAddress("GenLepton_status", GenLepton_status, &b_GenLepton_status);
   fChain->SetBranchAddress("GenLepton_statusFlags", GenLepton_statusFlags, &b_GenLepton_statusFlags);
   fChain->SetBranchAddress("GenLepton_genPartIdxMother", GenLepton_genPartIdxMother, &b_GenLepton_genPartIdxMother);
   fChain->SetBranchAddress("nGenNeutrino", &nGenNeutrino, &b_nGenNeutrino);
   fChain->SetBranchAddress("GenNeutrino_pt", GenNeutrino_pt, &b_GenNeutrino_pt);
   fChain->SetBranchAddress("GenNeutrino_eta", GenNeutrino_eta, &b_GenNeutrino_eta);
   fChain->SetBranchAddress("GenNeutrino_phi", GenNeutrino_phi, &b_GenNeutrino_phi);
   fChain->SetBranchAddress("GenNeutrino_mass", GenNeutrino_mass, &b_GenNeutrino_mass);
   fChain->SetBranchAddress("GenNeutrino_pdgId", GenNeutrino_pdgId, &b_GenNeutrino_pdgId);
   fChain->SetBranchAddress("GenNeutrino_status", GenNeutrino_status, &b_GenNeutrino_status);
   fChain->SetBranchAddress("GenNeutrino_statusFlags", GenNeutrino_statusFlags, &b_GenNeutrino_statusFlags);
   fChain->SetBranchAddress("GenNeutrino_genPartIdxMother", GenNeutrino_genPartIdxMother, &b_GenNeutrino_genPartIdxMother);
   fChain->SetBranchAddress("nGenPhoton", &nGenPhoton, &b_nGenPhoton);
   fChain->SetBranchAddress("GenPhoton_pt", GenPhoton_pt, &b_GenPhoton_pt);
   fChain->SetBranchAddress("GenPhoton_eta", GenPhoton_eta, &b_GenPhoton_eta);
   fChain->SetBranchAddress("GenPhoton_phi", GenPhoton_phi, &b_GenPhoton_phi);
   fChain->SetBranchAddress("GenPhoton_mass", GenPhoton_mass, &b_GenPhoton_mass);
   fChain->SetBranchAddress("GenPhoton_pdgId", GenPhoton_pdgId, &b_GenPhoton_pdgId);
   fChain->SetBranchAddress("GenPhoton_status", GenPhoton_status, &b_GenPhoton_status);
   fChain->SetBranchAddress("GenPhoton_statusFlags", GenPhoton_statusFlags, &b_GenPhoton_statusFlags);
   fChain->SetBranchAddress("GenPhoton_genPartIdxMother", GenPhoton_genPartIdxMother, &b_GenPhoton_genPartIdxMother);
   fChain->SetBranchAddress("nGenHiggs", &nGenHiggs, &b_nGenHiggs);
   fChain->SetBranchAddress("GenHiggs_pt", &GenHiggs_pt, &b_GenHiggs_pt);
   fChain->SetBranchAddress("GenHiggs_eta", &GenHiggs_eta, &b_GenHiggs_eta);
   fChain->SetBranchAddress("GenHiggs_phi", &GenHiggs_phi, &b_GenHiggs_phi);
   fChain->SetBranchAddress("GenHiggs_mass", &GenHiggs_mass, &b_GenHiggs_mass);
   fChain->SetBranchAddress("GenHiggs_pdgId", &GenHiggs_pdgId, &b_GenHiggs_pdgId);
   fChain->SetBranchAddress("GenHiggs_status", &GenHiggs_status, &b_GenHiggs_status);
   fChain->SetBranchAddress("GenHiggs_statusFlags", &GenHiggs_statusFlags, &b_GenHiggs_statusFlags);
   fChain->SetBranchAddress("GenHiggs_genPartIdxMother", &GenHiggs_genPartIdxMother, &b_GenHiggs_genPartIdxMother);
   fChain->SetBranchAddress("nGenW", &nGenW, &b_nGenW);
   fChain->SetBranchAddress("GenW_pt", GenW_pt, &b_GenW_pt);
   fChain->SetBranchAddress("GenW_eta", GenW_eta, &b_GenW_eta);
   fChain->SetBranchAddress("GenW_phi", GenW_phi, &b_GenW_phi);
   fChain->SetBranchAddress("GenW_mass", GenW_mass, &b_GenW_mass);
   fChain->SetBranchAddress("GenW_pdgId", GenW_pdgId, &b_GenW_pdgId);
   fChain->SetBranchAddress("GenW_status", GenW_status, &b_GenW_status);
   fChain->SetBranchAddress("GenW_statusFlags", GenW_statusFlags, &b_GenW_statusFlags);
   fChain->SetBranchAddress("GenW_genPartIdxMother", GenW_genPartIdxMother, &b_GenW_genPartIdxMother);
   fChain->SetBranchAddress("nGenPion", &nGenPion, &b_nGenPion);
   fChain->SetBranchAddress("GenPion_pt", GenPion_pt, &b_GenPion_pt);
   fChain->SetBranchAddress("GenPion_eta", GenPion_eta, &b_GenPion_eta);
   fChain->SetBranchAddress("GenPion_phi", GenPion_phi, &b_GenPion_phi);
   fChain->SetBranchAddress("GenPion_mass", GenPion_mass, &b_GenPion_mass);
   fChain->SetBranchAddress("GenPion_pdgId", GenPion_pdgId, &b_GenPion_pdgId);
   fChain->SetBranchAddress("GenPion_status", GenPion_status, &b_GenPion_status);
   fChain->SetBranchAddress("GenPion_statusFlags", GenPion_statusFlags, &b_GenPion_statusFlags);
   fChain->SetBranchAddress("GenPion_genPartIdxMother", GenPion_genPartIdxMother, &b_GenPion_genPartIdxMother);
   fChain->SetBranchAddress("Lepton_genMatchMuon", Lepton_genMatchMuon, &b_Lepton_genMatchMuon);
   fChain->SetBranchAddress("Lepton_genMatchMuon_deltaR", Lepton_genMatchMuon_deltaR, &b_Lepton_genMatchMuon_deltaR);
   fChain->SetBranchAddress("Lepton_genMatchElectron", Lepton_genMatchElectron, &b_Lepton_genMatchElectron);
   fChain->SetBranchAddress("Lepton_genMatchElectron_deltaR", Lepton_genMatchElectron_deltaR, &b_Lepton_genMatchElectron_deltaR);
   fChain->SetBranchAddress("Lepton_genMatchPion", Lepton_genMatchPion, &b_Lepton_genMatchPion);
   fChain->SetBranchAddress("Lepton_genMatchPion_deltaR", Lepton_genMatchPion_deltaR, &b_Lepton_genMatchPion_deltaR);
   fChain->SetBranchAddress("PionTrack_genMatchPion", PionTrack_genMatchPion, &b_PionTrack_genMatchPion);
   fChain->SetBranchAddress("PionTrack_genMatchPion_deltaR", PionTrack_genMatchPion_deltaR, &b_PionTrack_genMatchPion_deltaR);
   fChain->SetBranchAddress("PionTriplet_genMatch", PionTriplet_genMatch, &b_PionTriplet_genMatch);
   fChain->SetBranchAddress("nGenFSLeptons", &nGenFSLeptons, &b_nGenFSLeptons);
   fChain->SetBranchAddress("GenFSLeptons", &GenFSLeptons, &b_GenFSLeptons);
   fChain->SetBranchAddress("GenTauTriplet_MassInv", &GenTauTriplet_MassInv, &b_GenTauTriplet_MassInv);
   fChain->SetBranchAddress("GenTauTriplet_pt", &GenTauTriplet_pt, &b_GenTauTriplet_pt);
   fChain->SetBranchAddress("GenTauTriplet_eta", &GenTauTriplet_eta, &b_GenTauTriplet_eta);
   fChain->SetBranchAddress("GenTauTriplet_phi", &GenTauTriplet_phi, &b_GenTauTriplet_phi);
   fChain->SetBranchAddress("GenTauTriplet_dR_12", &GenTauTriplet_dR_12, &b_GenTauTriplet_dR_12);
   fChain->SetBranchAddress("GenTauTriplet_dR_13", &GenTauTriplet_dR_13, &b_GenTauTriplet_dR_13);
   fChain->SetBranchAddress("GenTauTriplet_dR_23", &GenTauTriplet_dR_23, &b_GenTauTriplet_dR_23);
   fChain->SetBranchAddress("Weight_DY_Zpt", &Weight_DY_Zpt, &b_Weight_DY_Zpt);
   fChain->SetBranchAddress("Weight_TTbar_NNLO", &Weight_TTbar_NNLO, &b_Weight_TTbar_NNLO);
   fChain->SetBranchAddress("TauEmbedding_veto", &TauEmbedding_veto, &b_TauEmbedding_veto);
   fChain->SetBranchAddress("PionTriplet_MassInv", PionTriplet_MassInv, &b_PionTriplet_MassInv);
   fChain->SetBranchAddress("PionTriplet_MassInv_12", PionTriplet_MassInv_12, &b_PionTriplet_MassInv_12);
   fChain->SetBranchAddress("PionTriplet_MassInv_13", PionTriplet_MassInv_13, &b_PionTriplet_MassInv_13);
   fChain->SetBranchAddress("PionTriplet_MassInv_23", PionTriplet_MassInv_23, &b_PionTriplet_MassInv_23);
   fChain->SetBranchAddress("PionTriplet_pt", PionTriplet_pt, &b_PionTriplet_pt);
   fChain->SetBranchAddress("PionTriplet_eta", PionTriplet_eta, &b_PionTriplet_eta);
   fChain->SetBranchAddress("PionTriplet_phi", PionTriplet_phi, &b_PionTriplet_phi);
   fChain->SetBranchAddress("PionTriplet_ptll_12", PionTriplet_ptll_12, &b_PionTriplet_ptll_12);
   fChain->SetBranchAddress("PionTriplet_ptll_13", PionTriplet_ptll_13, &b_PionTriplet_ptll_13);
   fChain->SetBranchAddress("PionTriplet_ptll_23", PionTriplet_ptll_23, &b_PionTriplet_ptll_23);
   fChain->SetBranchAddress("PionTriplet_MassInv_l1met", PionTriplet_MassInv_l1met, &b_PionTriplet_MassInv_l1met);
   fChain->SetBranchAddress("PionTriplet_MassInv_l2met", PionTriplet_MassInv_l2met, &b_PionTriplet_MassInv_l2met);
   fChain->SetBranchAddress("PionTriplet_MassInv_l3met", PionTriplet_MassInv_l3met, &b_PionTriplet_MassInv_l3met);
   fChain->SetBranchAddress("PionTriplet_pion1_pt", PionTriplet_pion1_pt, &b_PionTriplet_pion1_pt);
   fChain->SetBranchAddress("PionTriplet_pion2_pt", PionTriplet_pion2_pt, &b_PionTriplet_pion2_pt);
   fChain->SetBranchAddress("PionTriplet_pion3_pt", PionTriplet_pion3_pt, &b_PionTriplet_pion3_pt);
   fChain->SetBranchAddress("PionTriplet_pion1_eta", PionTriplet_pion1_eta, &b_PionTriplet_pion1_eta);
   fChain->SetBranchAddress("PionTriplet_pion2_eta", PionTriplet_pion2_eta, &b_PionTriplet_pion2_eta);
   fChain->SetBranchAddress("PionTriplet_pion3_eta", PionTriplet_pion3_eta, &b_PionTriplet_pion3_eta);
   fChain->SetBranchAddress("PionTriplet_pion1_phi", PionTriplet_pion1_phi, &b_PionTriplet_pion1_phi);
   fChain->SetBranchAddress("PionTriplet_pion2_phi", PionTriplet_pion2_phi, &b_PionTriplet_pion2_phi);
   fChain->SetBranchAddress("PionTriplet_pion3_phi", PionTriplet_pion3_phi, &b_PionTriplet_pion3_phi);
   fChain->SetBranchAddress("PionTriplet_pion1_absPdgId", PionTriplet_pion1_absPdgId, &b_PionTriplet_pion1_absPdgId);
   fChain->SetBranchAddress("PionTriplet_pion2_absPdgId", PionTriplet_pion2_absPdgId, &b_PionTriplet_pion2_absPdgId);
   fChain->SetBranchAddress("PionTriplet_pion3_absPdgId", PionTriplet_pion3_absPdgId, &b_PionTriplet_pion3_absPdgId);
   fChain->SetBranchAddress("PionTriplet_pion1_iso", PionTriplet_pion1_iso, &b_PionTriplet_pion1_iso);
   fChain->SetBranchAddress("PionTriplet_pion2_iso", PionTriplet_pion2_iso, &b_PionTriplet_pion2_iso);
   fChain->SetBranchAddress("PionTriplet_pion3_iso", PionTriplet_pion3_iso, &b_PionTriplet_pion3_iso);
   fChain->SetBranchAddress("PionTriplet_pion1_dxy", PionTriplet_pion1_dxy, &b_PionTriplet_pion1_dxy);
   fChain->SetBranchAddress("PionTriplet_pion2_dxy", PionTriplet_pion2_dxy, &b_PionTriplet_pion2_dxy);
   fChain->SetBranchAddress("PionTriplet_pion3_dxy", PionTriplet_pion3_dxy, &b_PionTriplet_pion3_dxy);
   fChain->SetBranchAddress("PionTriplet_pion1_dz", PionTriplet_pion1_dz, &b_PionTriplet_pion1_dz);
   fChain->SetBranchAddress("PionTriplet_pion2_dz", PionTriplet_pion2_dz, &b_PionTriplet_pion2_dz);
   fChain->SetBranchAddress("PionTriplet_pion3_dz", PionTriplet_pion3_dz, &b_PionTriplet_pion3_dz);
   fChain->SetBranchAddress("PionTriplet_LowestDeepTauVsEl", PionTriplet_LowestDeepTauVsEl, &b_PionTriplet_LowestDeepTauVsEl);
   fChain->SetBranchAddress("PionTriplet_LowestDeepTauVsMu", PionTriplet_LowestDeepTauVsMu, &b_PionTriplet_LowestDeepTauVsMu);
   fChain->SetBranchAddress("PionTriplet_LowestDeepTauVsJet", PionTriplet_LowestDeepTauVsJet, &b_PionTriplet_LowestDeepTauVsJet);
   fChain->SetBranchAddress("PionTriplet_dR_12", PionTriplet_dR_12, &b_PionTriplet_dR_12);
   fChain->SetBranchAddress("PionTriplet_dR_13", PionTriplet_dR_13, &b_PionTriplet_dR_13);
   fChain->SetBranchAddress("PionTriplet_dR_23", PionTriplet_dR_23, &b_PionTriplet_dR_23);
   fChain->SetBranchAddress("PionTriplet_deta_12", PionTriplet_deta_12, &b_PionTriplet_deta_12);
   fChain->SetBranchAddress("PionTriplet_deta_13", PionTriplet_deta_13, &b_PionTriplet_deta_13);
   fChain->SetBranchAddress("PionTriplet_deta_23", PionTriplet_deta_23, &b_PionTriplet_deta_23);
   fChain->SetBranchAddress("PionTriplet_dphi_12", PionTriplet_dphi_12, &b_PionTriplet_dphi_12);
   fChain->SetBranchAddress("PionTriplet_dphi_13", PionTriplet_dphi_13, &b_PionTriplet_dphi_13);
   fChain->SetBranchAddress("PionTriplet_dphi_23", PionTriplet_dphi_23, &b_PionTriplet_dphi_23);
   Notify();
}

Bool_t skim::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void skim::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t skim::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef skim_cxx
