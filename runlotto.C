void runlotto(){

TFile *f1 = TFile::Open("lotto_total.root");
TH1F  *h1 = (TH1F*)f1->Get("h1");

int numb;

for(int i=1; i<46; i++){
int  binx        = h1->GetXaxis()->FindBin(i);
double  hits  = h1->GetBinContent(binx);

if(hits <95) continue;
cout << i << endl;

}
}
