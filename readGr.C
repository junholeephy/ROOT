void readGr() {

	TGraph *gr = new TGraph("graph.dat");//  read txt file
	TCanvas *c1 = new TCanvas();
	gr->SetLineColor(2);
    gr->SetLineWidth(4);
    gr->SetMarkerColor(4);
    gr->SetMarkerStyle(21);
    gr->SetTitle("Draw graph from ASCII file");
    gr->GetXaxis()->SetTitle("X title");
    gr->GetYaxis()->SetTitle("Y title");
		
	gr->Draw("LAP");   //A -> Axis P->Point L->Line(Default)

}
