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

using namespace RooFit;
void Analyzer::runArgusModel() {
	TCanvas *c1 = new TCanvas("c1","c1");
	
	c1->cd();
	 

   
	RooRealVar ZZMass("ZZMass","ZZMass",110,140) ;
	//RooRealVar x("x","x",0,250) ;
	RooRealVar mean("mean","Mean of Gaussian",125,110,140) ;
	RooRealVar sigma("sigma","Width of Gaussian",1,0,100) ;
	RooRealVar alpha("alpha","alpha",10,0,250) ;
	RooRealVar n("n","n",100,0,250) ;
	RooRealVar alpha2("alpha2","alpha2",10,0,250) ;
	RooRealVar n2("n2","n2",100,0,250) ;
	RooDoubleCB CBall("CBall", "Crystal Ball shape", ZZMass, mean, sigma, alpha, n, alpha2 ,n2);
   
   
   //RooRealVar ZZMass("ZZMass","ZZMass",110,140) ;
	RooDataSet data("data","dataset with ZZMass",fChain,ZZMass) ;

   
   //mean.setConstant(kTRUE) ;
 CBall.fitTo(data, Range(110,140));

	//samo gausijan test
	
	//RooPlot* xframe = x.frame();
	//gauss.plotOn(xframe);
	//xframe->Draw();




   // --- Plot toy data and composite PDF overlaid ---
   //Moze se dodati NormRange ako eksplicitno zelimo normirati inace ce uzet po defaultu range

   RooPlot* mesframe = ZZMass.frame();
   data.plotOn(mesframe,Range(110,140), LineColor(kBlue));
   CBall.plotOn(mesframe,Range(110,140),  LineColor(kRed));
   //model.plotOn(mesframe, Components(background), LineStyle(ELineStyle::kDashed));
	CBall.paramOn(mesframe, Layout(0.55));
   mesframe->Draw();
   TPaveText *pt = new TPaveText(.05,.1,.95,.8);
   pt->AddText("proba!");
   pt->Draw();
   c1->SaveAs("test.pdf");
}
void Analyzer::ZZTo4lext1()
{
TCanvas *c1 = new TCanvas("c1","c1");
	
	c1->cd();
	 

   
	RooRealVar ZZMass("ZZMass","ZZMass",110,140) ;
	//RooRealVar x("x","x",0,250) ;
	RooRealVar a("a","a",-1,-5,10) ;
	RooRealVar b("b","b",225,100,450) ;
	RooRealVar c("c","c",5000,-15000,15000) ;
	RooGenericPdf g("g","a*ZZMass*ZZMass + b*ZZMass + c", RooArgSet(ZZMass,a,b,c));
	//RooGaussian gauss("gauss","gauss(x,mean,sigma)",ZZMass,mean,sigma) ;
   
   
   //RooRealVar ZZMass("ZZMass","ZZMass",0,250) ;
	RooDataSet data("data","dataset with ZZMass",fChain,ZZMass) ;

   
   //mean.setConstant(kTRUE) ;
 g.fitTo(data, Range(110,140));

	//samo gausijan test
	
	//RooPlot* xframe = x.frame();
	//gauss.plotOn(xframe);
	//xframe->Draw();




   // --- Plot toy data and composite PDF overlaid ---
   //Moze se dodati NormRange ako eksplicitno zelimo normirati inace ce uzet po defaultu range

   RooPlot* mesframe = ZZMass.frame();
   data.plotOn(mesframe,Range(110,140), LineColor(kBlue));
   g.plotOn(mesframe,Range(110,140),  LineColor(kRed));
	g.paramOn(mesframe, Layout(0.25));

   //model.plotOn(mesframe, Components(background), LineStyle(ELineStyle::kDashed));
	//RooChi2Var chi2("chi2","chi2",g,data) ;
   mesframe->Draw();
   c1->SaveAs("test-background.pdf");
	//cout<<chi2.getVal()<<endl;
	cout<<endl;
	cout<<mesframe->chiSquare("g","data",3)<<endl;

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
   }
   

}
