void makeHist() {


	TH1F* h1 = new TH1F("h1","h1",1000,-5,5);
	h1->FillRandom("gaus",10000);

	h1->Draw();


}


	


