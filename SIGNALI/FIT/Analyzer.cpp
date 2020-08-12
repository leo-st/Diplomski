#define Analyzer_cxx
#include "Analyzer.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TPaveText.h>
#include <TMath.h>
#include <TF1.h>
#include "RooRealVar.h"
#include "RooConstVar.h"
#include "RooGaussian.h"
#include "RooCBShape.h"
#include "RooArgusBG.h"
#include "RooAddPdf.h"
#include "RooDataSet.h"
#include "RooGenericPdf.h"
#include "RooPlot.h"
#include "LinkDef.h"
#include "RooDoubleCB.h"
#include "RooChi2Var.h"
#include "RooDataHist.h"
#include "RooFormulaVar.h"
#include "RooMinimizer.h"
#include "TGraphErrors.h"
#include "TLine.h"
#include <iostream>
#include <fstream>
 
using namespace RooFit;
void Analyzer::runArgusModel() {

	TCanvas *c2 = new TCanvas("c2","c2");
	c2->cd();

	/*Double_t x[] = {120.0,124.0,125.0,126.0,130.0};
	 Double_t y[] = {119.83,123.85,124.85,125.85,129.84};
	 Double_t ex[5] = {0,0,0,0,0};
   Double_t ey[5] = {0.26,0.22,0.19,0.25,0.14};*/
	Double_t x[] = {120.0,124.0,125.0,126.0,130.0};
	 Double_t y[] = {2.1,2.1,2.0,2.3,1.98};
	 Double_t ex[5] = {0,0,0,0,0};
   Double_t ey[5] = {2.2,1.6,1.2,1.7,0.72};


	 //TGraph *g = new TGraph((sizeof(x) / sizeof(Double_t)), x, y);
	TGraphErrors *g = new TGraphErrors(5, x, y,ex,ey);
	//TGraph *g = new TGraph(5, x, y,ex,ey);
	 TF1 *f = new TF1("f", "[0]"); 
	f->SetParNames("p_{0}");
	g->Fit(f);
	/*TLine *line = new TLine(119.0,118.57,131.0,130.57);
	TLine *line2 = new TLine(119.0,119.1,131.0,131.1);
	TLine *line3 = new TLine(119.0,124.802,131.0,124.802);
	
	double x1,x2;
	x1=(124.802+0.43)/(1.0);
	x2=(124.802-0.1)/(1.0);
	
	TLine *line4 = new TLine(x1,118.58,x1,124.85);
	TLine *line5 = new TLine(x2,118.58,x2,124.85);
	TLine *line6 = new TLine(124.96,118.58,124.96,124.802);	*/

	g->GetXaxis()->SetTitle("m_{H} [GeV]");
	g->GetYaxis()->SetTitle("n_{1}");
	gStyle->SetOptFit(kTRUE);
	gStyle->SetStatX(0.9);
	gStyle->SetStatY(0.9);
	gStyle->SetStatW(0.18);		// we want to display the fit parameters		
	gStyle->SetStatH(0.19);
	gStyle->SetStatFormat("#6.2f"); gStyle->SetFitFormat("#6.2f");
	g->SetTitle("");
 	gPad->Update();
	//line->DrawLine(120.0,119.57,130.0,129.57);
	
	g->SetMarkerStyle(kFullCircle);
 	g->Draw("AP");
	/*line->Draw("same");
	line2->Draw("same");
	line3->Draw("same");
	line3->SetLineStyle(kDashed);
	line4->Draw("same");
	line4->SetLineStyle(kDashed);
	line5->Draw("same");
	line5->SetLineStyle(kDashed);
	line6->Draw("same");
	line6->SetLineStyle(kDashed);*/
	c2->SaveAs("fitanje-n1-4-8.png");

	
	
/*mH.add(RooArgSet(124,123.85));
mH.add(RooArgSet(125,124.85));
mH.add(RooArgSet(126,125.85));
mH.add(RooArgSet(130,129.84));*/


   
}
void Analyzer::Loop()
{

//   In a ROOT session, you can do:
//      root> .L Analyzer.C
//      root> Analyzer t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch
 //RooRealVar  x("x","x",105,140) ;
//RooDataSet test("test","test", RooArgSet(x));
   if (fChain == 0) return;
	Long64_t nentries = fChain->GetEntriesFast();
   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
      //h1->Fill(ZZMass);

   }

}
