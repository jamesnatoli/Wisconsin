// Utility functions for macros

double deltaPhi( double phi1, double phi2) {
  double res = phi1 - phi2;
  if (res > TMath::Pi())
    res = res - (2.0 * TMath::Pi());
  if (res < -TMath::Pi())
    res = res + (2.0 * TMath::Pi());

  return res;
}

double deltaR( double eta1, double phi1, double eta2, double phi2) {
  double deta = eta1 - eta2;
  double dphi = deltaPhi( phi1, phi2);
  return TMath::Sqrt( deta*deta + dphi*dphi);
}

void progressBar( Long64_t ientry, Long64_t nentries, std::chrono::time_point<std::chrono::high_resolution_clock> start) {
  Int_t barWidth = 50;

  if (nentries == TTree::kMaxEntries) {
    std::cout << "WARNING: nentries is Maximum... progress bar will not work";
    std::cout << "\r";
    std::cout.flush();
    return;
  }
  
  if (nentries < barWidth) // avoid floating point exception
    barWidth = nentries;
  
  if (((ientry % ((int)(nentries / barWidth))) == 0) && (nentries > 0)) {
    std::cout << "[";
    float progress = (float)ientry / nentries;
    int pos = barWidth * progress;
    for (int b = 0; b < barWidth; ++b) {
      if (b < pos) std::cout << "=";
      else if (b == pos) std::cout << ">";
      else std::cout << " ";
    }
    std::cout << "] "; 
    if (progress != 0) {
      auto checkpoint = std::chrono::high_resolution_clock::now();
      auto duration = std::chrono::duration_cast<std::chrono::seconds>(checkpoint - start);
      std::cout << std::setw(5) << (100 * round(progress * 100) / 100) << "%" << ", ETA: " 
		<< std::setw(15) << round((std::chrono::duration<float>(duration).count() / (progress)) - (std::chrono::duration<float>(duration).count()))
		<< " seconds";
    } else
      std::cout << "Getting time estimate...";
    std::cout << "\r";
    std::cout.flush();
  }
  return;
}
