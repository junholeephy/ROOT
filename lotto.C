/// \file
/// \ingroup tutorial_tree
///
/// Create can ntuple reading data from an ascii file.
/// This macro is a variant of basic.C
/// \macro_image
/// \macro_code
/// \author Rene Brun

void lotto() {

   TFile *f = new TFile("lotto.root","CREATE");
   TH1F *h1 = new TH1F("h1","x distribution",100,-0.9,50);
   TTree *T = new TTree("ntuple","data from ascii file");
   Long64_t nlines = T->ReadFile(Form("lotto.dat"),"a1:a2:a3:a4:a5:a6");
   
printf(" found %lld points\n",nlines);
   T->Write();
}
