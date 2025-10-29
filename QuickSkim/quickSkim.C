// Opens a ROOT file and creates a class from it
// 
// 

#include <iostream>

#include <TFile.h>
#include <TTree.h>

// These are commands you can also easily do in ROOT
int quickSkim( char* fname) {
  std::cout << "\n\t*** Opening file: " << fname << std::endl;
  std::unique_ptr<TFile> f1( TFile::Open(fname));
  if (!f1) {
    std::cout << "Failed to open file :(" << std::endl;
    return 1;
  }
  TTree *events = (TTree*)(f1->Get("Events"));
  // The name here ("skim") must match the class that the Loop() function is a member of in skimOver.C
  events->MakeClass("skim");
  return 0;
};

// Just for Fun
int justPrint( char *fname) {
  std::unique_ptr<TFile> f1( TFile::Open(fname));
  if (!f1) {
    std::cout << "Failed to open file :(" << std::endl;
    return 1;
  }
  std::cout << f1->GetName() << std::endl;
  TTree *t1 = (TTree*)f1->Get("Events");
  t1->Print();
  return 0;
};

int main( int argc, char **argv) {
  if (argc < 2)
    std::cout << "Please enter a file name..." << std::endl;
  else 
    return quickSkim( argv[1]);
}
 
