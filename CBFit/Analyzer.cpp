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
#include "RooPlot.h"

using namespace RooFit;
RooRealVar  x("x","x",105,140) ;
RooRealVar  y("y","y",-80.0,600.0) ;
RooRealVar  z("z","z",-2.0,8.0) ;
RooDataSet test("test","test", RooArgSet(x));
RooDataSet overallEventWeight_data("overallEventWeight_data","overallEventWeight_data",RooArgSet(y)) ;
RooDataSet ggH_NNLOPS_weight_data("ggH_NNLOPS_weight_data","ggH_NNLOPS_weight_data", RooArgSet(z));
void Analyzer::runArgusModel() {
	TCanvas *c1 = new TCanvas("c1","c1");
	
	c1->cd();
	 

   
	//RooRealVar ZZMass("ZZMass","ZZMass",110,140) ;
	//RooRealVar x("x","x",0,250) ;
	RooRealVar mean("#mu","Mean of Gaussian",105,140) ;
	RooRealVar sigma("#sigma","Width of Gaussian",2,0,250) ;
	RooRealVar alpha("#alpha","alpha",10,0,250) ;
	RooRealVar n("n","n",100,0,250) ;
	RooCBShape CBall("CBall", "Crystal Ball shape", x, mean, sigma, alpha, n);
   
   
   //RooRealVar ZZMass("ZZMass","ZZMass",110,140) ;
	//RooDataSet data("data","dataset with ZZMass",fChain,ZZMass) ;
RooFormulaVar wFunc("gen","(137.0 * 1000 * 0.0133352  * y ) / 28744188.0 * z",RooArgSet( y,z)) ;
   
   // Add column with variable w to previously generated dataset
   RooRealVar* w = (RooRealVar*) test.addColumn(wFunc) ;
   // Dataset d is now a dataset with two observable (x,w) with 1000 entries

   
   // Instruct dataset wdata in interpret w as event weight rather than as observable
   RooDataSet wdata(test.GetName(),test.GetTitle(),&test, *test.get(),0,w->GetName()) ;

   //wdata.printArgs(cout);
   //mean.setConstant(kTRUE) ;
 //g.fitTo(wdata, Range(110,140));
   
   //mean.setConstant(kTRUE) ;
 CBall.fitTo(wdata, Range(105,140));

	//samo gausijan test
	
	//RooPlot* xframe = x.frame();
	//gauss.plotOn(xframe);
	//xframe->Draw();




   // --- Plot toy data and composite PDF overlaid ---
   //Moze se dodati NormRange ako eksplicitno zelimo normirati inace ce uzet po defaultu range

   RooPlot* mesframe = x.frame();
   wdata.plotOn(mesframe,Range(105,140), LineColor(kBlue));
   CBall.plotOn(mesframe,Range(105,140),  LineColor(kRed));
   //model.plotOn(mesframe, Components(background), LineStyle(ELineStyle::kDashed));
	CBall.paramOn(mesframe, Layout(0.15,0.45,0.9));
mesframe->SetXTitle("m_{4#mu} [GeV]");
	mesframe->SetYTitle("Broj dogadaja / (0.35) ");
	mesframe->SetTitle("");
   mesframe->Draw();
   TPaveText *pt = new TPaveText(.05,.1,.95,.8);
   pt->AddText("proba!");
   pt->Draw();
   c1->SaveAs("CBFit-23-7-final-weight.png");
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
   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
	if(ZZMass>=105.0 && ZZMass<=140.0){
		if(Z1Flav==-169 && Z2Flav==-169){
			x=ZZMass;
y=overallEventWeight;
z=ggH_NNLOPS_weight;
				test.add(RooArgSet(x));
overallEventWeight_data.add(RooArgSet(y));
ggH_NNLOPS_weight_data.add(RooArgSet(z));
		}
	}


   }
   

}
