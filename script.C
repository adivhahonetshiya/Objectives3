{

    TFile *myFile = TFile::Open("B4.root");
    
			//------------------------------------------------
//TCanvas *myTcanvas = new TCanvas("myTcanvas", "My root plots", 1200, 900);

    TH1F *myHistogram = new TH1F("myHistogram", "", 500, 40.0, 52.0);
			myHistogram->SetLineColor(kBlue);

    B4->Draw("Eabs>>myHistogram");

			//------------------------------------------------
    TH1F *myHistogram2 = new TH1F("myHistogram2", "", 500, 40.0, 52.0);
		myHistogram2->SetLineColor(kGreen);

    B4->Draw("Eabs>>myHistogram2", "Egap<0.1");
    
			//------------------------------------------------
    TH1F *myHistogram3 = new TH1F("myHistogram3", "", 500, 40.0, 52.0);
			myHistogram3->SetLineColor(kRed);

    B4->Draw("Eabs>>myHistogram3","Labs>35.0");

			//------------------------------------------------
    TH1F *myHistogram4 = new TH1F("myHistogram4", "", 500, 40.0, 52.0);
			myHistogram4->SetLineColor(kPink+10);

    B4->Draw("Eabs>>myHistogram4","Egap<0.1 && Labs>35.0");

    
			//------------------------------------------------

TCanvas *myTcanvas = new TCanvas("myTcanvas", "My root plots", 1200, 600); 
myTcanvas->Divide(4,1);

myTcanvas->cd(1);
myHistogram->Draw();

myTcanvas->cd(2);
myHistogram2->Draw("SAME");

myTcanvas->cd(3);
myHistogram3->Draw("SAME");

myTcanvas->cd(4);
myHistogram4->Draw("SAME");
	

	   //myHistogram->Draw();
	   //myHistogram2->Draw("SAME");
	   //myHistogram3->Draw("SAME");
	   //myHistogram4->Draw("SAME");
  
}
