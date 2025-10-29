#include "stitchStudy.C"

void runBkgd(TString);

void runBkgds(TString bkgds="") {
  std::vector<string> allBkgds= { "0To50", "50To100", "100To250", "250To400", "400To650", "650ToInf"};
  if (bkgds == "all") {
    for (auto bkg : allBkgds) {
      std::cout << ">>> Running **" << bkg << "**" << std::endl;
      runBkgd(bkg);
    }
  } else { // split up string
    TString tok;
    Ssiz_t from = 0;
    while (bkgds.Tokenize( tok, from)) {
      std::cout << ">>> Running **" << tok << "**" << std::endl;
      runBkgd(tok);
    }
  }
}

void runBkgd(TString bkgd="") {
  // setup chain
  TString basePath = "/hdfs/store/user/jnatoli/NanoTauAnalysis/samples/nano/Wto3pi_2018/Wto3pi_2018_step1/DYJetsToLL_LHEFilterPtZ-";
  TString endPath  = "_MatchEWPDG20_TuneCP5_13TeV-amcatnloFXFX-pythia8/RunIISummer20UL18NanoAODv9-106X_upgrade2018_realistic_v16_L1v1-v1/NANOAODSIM/";
  TChain *chain = new TChain("Events");

  if ((bkgd == "all") || bkgd.Contains(" ")) {
    runBkgds(bkgd);
    return;
  }

  if (bkgd != "")
    chain->Add( (basePath + bkgd + endPath + "/*.root").Data());

  if (chain->GetEntries() == 0) {
    std::cout << "INVALID CHAIN" << std::endl;
    return;
  }
  
  std::cout << "nEntries: " << chain->GetEntries() << std::endl;
  
  // analyze background
  stitchStudy s(chain);
  s.Loop();

  // Get hists
  TH1F* hist = dynamic_cast<TH1F*>(gDirectory->Get("hist"));
  
  // Save hists
  hist->SetName("DY_Pt" + bkgd.ReplaceAll("To", "-") + "_NLOA2018");
  hist->SaveAs( TString(hist->GetName()) + ".C");
}
