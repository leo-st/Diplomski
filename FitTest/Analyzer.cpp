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
#include "RooArgusBG.h"
#include "RooAddPdf.h"
#include "RooDataSet.h"
#include "RooPlot.h"
#include "RooMinimizer.h"


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
	 

   
	//RooRealVar ZZMass("ZZMass","ZZMass",125,105,145) ;
	
	RooRealVar mean("#mu","Mean of Gaussian",105.0,140.0) ;
	RooRealVar sigma("#sigma","Width of Gaussian",0.1,5.0) ;
	RooGaussian gauss("gauss","gauss(x,mean,sigma)",x,mean,sigma) ;
   
   
   //RooRealVar ZZMass("ZZMass","ZZMass",110,140) ;
	//RooDataSet data("data","dataset with ZZMass",fChain,ZZMass) ;
	//RooDataSet *data = gauss.generate(x,1000) ;

   //RooArgSet* params = gauss.getParameters(x) ;
   //mean.setConstant(kTRUE) ;
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
 gauss.fitTo(wdata, Range(105,140));

	//samo gausijan test
	
	//RooPlot* xframe = x.frame();
	//gauss.plotOn(xframe);
	//xframe->Draw();





   // --- Plot toy data and composite PDF overlaid ---
   //Moze se dodati NormRange ako eksplicitno zelimo normirati inace ce uzet po defaultu range
   RooPlot* mesframe = x.frame();
   wdata.plotOn(mesframe,Range(105,140), LineColor(kBlue));
   gauss.plotOn(mesframe,Range(105,140),  LineColor(kRed));
	gauss.paramOn(mesframe,Layout(0.65,0.9,0.9));
	//params->printLatex(Format("NEA", 2));
//test.statOn(mesframe);
	//gauss.paramOn(mesframe,Layout(0.65, 0.9, 0.9), Format("NE",2));
	//gauss.paramOn(mesframe,Layout(0.7, 0.9, 0.9));
            /*ROOT.RooFit.FillColor(ROOT.kRed),
            ROOT.RooFit.Label("Global Fit parameters:"),
            ROOT.RooFit.Layout(0.1, 0.4, 0.9),
            ROOT.RooFit.Format("NEU", ROOT.RooFit.AutoPrecision(1)),
            ROOT.RooFit.ShowConstants());*/

	//gauss.paramOn(mesframe, Layout(0.7));
   //model.plotOn(mesframe, Components(background), LineStyle(ELineStyle::kDashed));
	mesframe->SetXTitle("m_{4#mu} [Gev]");
	mesframe->SetYTitle("Broj dogadaja / (0.3) ");
	mesframe->SetTitle("");
   mesframe->Draw();
   c1->SaveAs("gauss-fit-23-7-final-weighted.png");
	/*RooAbsReal* nll = gauss.createNLL(*data, NumCPU(2));
	RooMinimizer(*nll).migrad();
	 RooPlot* frame1 = mean.frame(Bins(10),Range(105,140),Title("LL and profileLL in mean")) ;
   nll->plotOn(frame1,ShiftToZero()) ;
	RooAbsReal* pll_frac = nll->createProfile(mean) ;
	pll_frac->plotOn(frame1,LineColor(kRed)) ;
	frame1->SetMinimum(0);
	frame1->SetMaximum(10);
	 TCanvas *canv = new TCanvas("rf605_profilell","rf605_profilell",800, 400);
     canv->cd(1) ; frame1->GetYaxis()->SetTitleOffset(1.4) ; frame1->Draw() ;
canv->SaveAs("maxlike-signal1.pdf");
   delete pll_frac ;
   delete nll ;*/
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
ggH_NNLOPS_weight_data.add(RooArgSet(z));		}
	}


   }
   

}
