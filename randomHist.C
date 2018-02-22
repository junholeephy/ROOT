void randomHist() {

const int n=1000;
	
	double num[n];

	for(int i=0; i<1000; i++) { num[i] = gRandom->Gaus(5,0.5);}
	for(int i=0; i<1000; i++) { cout << i+1 <<"" << num[i]<<endl; }

	TH1F *h1 = new TH1F("gaus","gaus",100,0,10);
	for(int i=0; i<1000; i++)
	h1->Fill(num[i]);

	TCanvas *c1 = new TCanvas();
	h1->Draw();



}
