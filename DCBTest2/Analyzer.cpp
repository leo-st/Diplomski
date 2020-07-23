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
#include "LinkDef.h"
#include "RooDoubleCB.h"

using namespace RooFit;
RooRealVar x("x","x",105.0,140.0) ;
RooDataSet test("test","test", RooArgSet(x));
void Analyzer::runArgusModel() {
	TCanvas *c1 = new TCanvas("c1","c1");
	
	c1->cd();
	 

   
	//RooRealVar ZZMass("ZZMass","ZZMass",110,140) ;
	//RooRealVar x("x","x",0,250) ;
	RooRealVar mean("#mu","Mean of Gaussian",105,140) ;
	RooRealVar sigma("#sigma","Width of Gaussian",1.5,0.1,5.0) ;
	RooRealVar alpha("#alpha_{1}","alpha",1.0,-10.0,10.0) ;
	RooRealVar n("n_{1}","n",5.0,-5.0,15.0) ;
	RooRealVar alpha2("#alpha_{2}","alpha2",1.0,-10.0,10.0) ;
	RooRealVar n2("n_{2}","n2",5.0,-5.0,15.0) ;
	RooDoubleCB CBall("CBall", "Crystal Ball shape",x, mean, sigma, alpha, n, alpha2 ,n2);
   
   
   //RooRealVar ZZMass("ZZMass","ZZMass",110,140) ;
	//RooDataSet data("data","dataset with ZZMass",fChain,ZZMass) ;

   
   //mean.setConstant(kTRUE) ;
 CBall.fitTo(test, Range(105,140));

	//samo gausijan test
	
	//RooPlot* xframe = x.frame();
	//gauss.plotOn(xframe);
	//xframe->Draw();




   // --- Plot toy data and composite PDF overlaid ---
   //Moze se dodati NormRange ako eksplicitno zelimo normirati inace ce uzet po defaultu range

   RooPlot* mesframe = x.frame();
   test.plotOn(mesframe,Range(105,140), LineColor(kBlue));
   CBall.plotOn(mesframe,Range(105,140),  LineColor(kRed));
   //model.plotOn(mesframe, Components(background), LineStyle(ELineStyle::kDashed));
	CBall.paramOn(mesframe, Layout(0.15,0.48,0.9));
mesframe->SetXTitle("m_{4#mu} [Gev]");
	mesframe->SetYTitle("Broj dogadaja / (0.3) ");
	mesframe->SetTitle("");
   mesframe->Draw();
   TPaveText *pt = new TPaveText(.05,.1,.95,.8);
   pt->AddText("proba!");
   pt->Draw();
   c1->SaveAs("dCB-23-7-final.png");
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
			test.add(RooArgSet(x));
		}
	}


   }
   

}

