// macro to nEvents from a TChain
#include <TChain.h>
#include <TFile.h>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <chrono>

void progressBar( Long64_t ientry, Long64_t nentries, std::chrono::time_point<std::chrono::high_resolution_clock> start) {
  Int_t barWidth = 50;
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

void getTime( void (*fcn_ptr)(TChain*), TChain* c) {
  auto start = std::chrono::high_resolution_clock::now();
  fcn_ptr( c);
  auto end = std::chrono::high_resolution_clock::now();
  auto duration = std::chrono::duration_cast<std::chrono::seconds>(end - start);
  std::cout << ">>> Finished in " << duration.count() << " seconds" << std::endl;
}

void getNevents(std::string infname, std::string treename="Events") {
  
  // std::string prefix = "/hdfs/store/user/jnatoli/";
  std::string prefix = "";

  int counter = 0;
  std::string fname;
  std::ifstream file( infname);
  TChain* events = new TChain( treename.c_str());
  
  if (file.is_open()) {
    while (std::getline( file, fname)  && (counter > -100)) {
      counter++;
      events->Add((prefix + fname).c_str());
    }
  } else {
    std::cout << "Error!! Couldn't open file: " << infname << std::endl;
    std::cout << "Exiting..." << std::endl;
    return;
  }

  std::cout << std::setw(15) << "Files Added:   " << counter << std::endl;
  
  std::cout << "Getting nEvents... this could take a few minutes" << std::endl;
  Long64_t nevts = events->GetEntries();
  std::cout << "nEvents: " << nevts << std::endl;
  
  std::cout << "All Done :) " << std::endl;
  return;
}

