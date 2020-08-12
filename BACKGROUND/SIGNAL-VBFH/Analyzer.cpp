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
#include <iostream>
#include <fstream>

RooRealVar  x("x","x",105.0,140.0) ;
RooRealVar  y("y","y",-20.0,300.0) ;
RooDataSet test("test","test", RooArgSet(x));
RooDataSet overallEventWeight_data("overallEventWeight_data","overallEventWeight_data",RooArgSet(y)) ;

using namespace RooFit;

void Analyzer::runArgusModel() {
	TCanvas *canv = new TCanvas("c1","c1");
	
	canv->cd();
	 

   
	//RooRealVar x("x","x",105,140) ;
	//RooRealVar x("x","x",0,250) ;
	RooRealVar mean_vbfh("#mu_{VBFH}","Mean of Gaussian",105,140) ;
	RooRealVar sigma_vbfh("#sigma_{VBFH}","Width of Gaussian_vbfh",1.2,0.1,3.2) ;
	RooRealVar alpha_vbfh("#alpha_{1VBFH}","alpha_vbfh",1.3,-3.4,4.5) ;
	RooRealVar n_vbfh("n_{1VBFH}","n_vbfh",2.0,-5.1,7.0) ;
	RooRealVar alpha2_vbfh("#alpha_{2VBFH}","alpha2_vbfh",1.7,-2.1,5.2) ;
	RooRealVar n2_vbfh("n_{2VBFH}","n2_vbfh",4.0,-18.2,22.0) ;
	//RooRealVar shift("shift","shift",0.15) ;
	//RooFormulaVar mH("mH","@0+@1",RooArgList(mean,shift));
	RooDoubleCB CBall("CBall", "Crystal Ball shape", x, mean_vbfh, sigma_vbfh, alpha_vbfh, n_vbfh, alpha2_vbfh ,n2_vbfh);


	//RooRealVar Masa("Masa","Masa",105,140) ;
		//RooRealVar x("x","x",0,250) ;
	/*	RooRealVar mean("mean","Mean of Gaussian",124.85,105.0,140.0) ;
		//RooRealVar mean("mean","Mean of Gaussian",124.85) ;
		RooRealVar sigma("sigma","Width of Gaussian",1.13,0.9,1.4) ;
		RooRealVar alpha("alpha","alpha",1.24,0.95,1.55) ;
		RooRealVar n("n","n",2.0,1.4,2.9) ;
		RooRealVar alpha2("alpha2","alpha2",1.72,1.2,2.4) ;
		RooRealVar n2("n2","n2",3.5,1.2,15.0) ;*/

		/*RooRealVar sigma("sigma","Width of Gaussian",1.13) ;
		RooRealVar alpha("alpha","alpha",1.24) ;
		RooRealVar n("n","n",2.0) ;
		RooRealVar alpha2("alpha2","alpha2",1.72) ;
		RooRealVar n2("n2","n2",3.5) ;

		//RooRealVar shift("shift","shift",0.15);
		//RooFormulaVar mH("mH","@0+@1",RooArgList(mean,shift));
		RooDoubleCB CBall("CBall", "Crystal Ball shape", x, mean, sigma, alpha, n, alpha2 ,n2);*/




//_lumi postavljam sam na neku vrijednost
	//xsec zadan u branchu = 0.00158549
	//_k_factor = 1 za signal, a za pozadinu je zadan u branchu
	//overallEventWeight zadan je kao branch
	//L1prefiringWeight zadan je kao u branchu  = 1
	//ggH_NNLOPS_weight=1 za signal, a za pozadinu je zadan u branchu
	//gen_sum_weights vrijednost 40-og bina u histogramu u ROOT file-u
	


	RooRealVar overallEventWeight("overallEventWeight","overallEventWeight",-20.0,300.0) ;
	//RooRealVar ggH_NNLOPS_weight("ggH_NNLOPS_weight","ggH_NNLOPS_weight",110,140) ;
	
	//RooDataSet LumiNumber_data("LumiNumber_data","LumiNumber_data", fChain, LumiNumber);
	//RooDataSet ggH_NNLOPS_weight_data("ggH_NNLOPS_weight_data","ggH_NNLOPS_weight_data", fChain, ggH_NNLOPS_weight);
	//RooDataSet xsec_data("xsec_data","xsec_data",fChain,xsec) ;
	//RooDataSet KFactor_QCD_ggZZ_Nominal_data("KFactor_QCD_ggZZ_Nominal","KFactor_QCD_ggZZ_Nominal",fChain,KFactor_QCD_ggZZ_Nominal) ;
	//RooDataSet overallEventWeight_data("overallEventWeight_data","overallEventWeight_data",fChain,overallEventWeight) ;
	//RooDataSet L1prefiringWeight_data("L1prefiringWeight_data","L1prefiringWeight_data",fChain,L1prefiringWeight) ;
	//RooDataSet genHEPMCweight_data("genHEPMCweight_data","genHEPMCweight_data",fChain,genHEPMCweight) ;
	
	//RooDataSet data("data","dataset with ZZMass");




   
   //RooRealVar ZZMass("ZZMass","ZZMass",110,140) ;
	//RooDataSet data("data","dataset with ZZMass",fChain,ZZMass) ;
	
	
	// Construct formula to calculate (fake) weight for events
   RooFormulaVar wFunc("gen","(137.0 * 1000 * 0.00103816  * y ) / 1819984.9",y) ;
   
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
 //CBall.fitTo(data, Range(110,140));
	//samo gausijan test
	
	//RooPlot* xframe = x.frame();
	//gauss.plotOn(xframe);
	//xframe->Draw();
   // --- Plot toy data and composite PDF overlaid ---
   //Moze se dodati NormRange ako eksplicitno zelimo normirati inace ce uzet po defaultu range
	x.setRange("signal",105,140);
	//RooAbsReal *integral=CBall.createIntegral(ZZMass,ZZMass, "signal");
//cout<<endl<<"INTEGRAL:::::::::	"<<integral->getVal()<<endl<<endl;
   RooPlot* mesframe = x.frame();
   wdata.plotOn(mesframe,Range(105,140), LineColor(kBlue));
   CBall.plotOn(mesframe,Range(105,140),  LineColor(kRed));
   //model.plotOn(mesframe, Components(background), LineStyle(ELineStyle::kDashed));
CBall.paramOn(mesframe, Layout(0.15,0.48,0.9));
mesframe->SetXTitle("m_{4#mu} [GeV]");
	mesframe->SetYTitle("Broj dogadaja / (0.3) ");
	mesframe->SetTitle("");
   mesframe->Draw();
   canv->SaveAs("signal-vbfh-weighted1.png");


/*RooAbsReal* nll = CBall.createNLL(wdata, NumCPU(4), Timer(kTRUE));
	RooMinimizer(*nll).migrad();
	 RooPlot* frame1 = mean.frame(Bins(100),Range(124.0,126.0),Title("LL and profileLL in mean")) ;
   nll->plotOn(frame1,ShiftToZero()) ;
	RooAbsReal* pll_frac = nll->createProfile(mean) ;
	pll_frac->plotOn(frame1,ShiftToZero(),LineColor(kRed)) ;
	frame1->SetMinimum(0);
	frame1->SetMaximum(5);
	 TCanvas *canv = new TCanvas("rf605_profilell","rf605_profilell",800, 400);
     canv->cd(1) ; frame1->GetYaxis()->SetTitleOffset(1.4) ; frame1->Draw() ;
canv->SaveAs("maxlike-signal3.pdf");
   delete pll_frac ;
   delete nll ;*/

}


void Analyzer::Loop()
{
	double min=900000,max=-1000000;
	double suma = 0.0;
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
		cout<<"jentry: "<<jentry<<"	"<<L1prefiringWeight<<endl;
		if(L1prefiringWeight<min){
			min=L1prefiringWeight;
		}
		if(L1prefiringWeight>max){
			max=L1prefiringWeight;
		}
		if(Z1Flav==-169 && Z2Flav==-169){
			suma=suma+((137.0*1000*0.00103816*overallEventWeight)/1819984.9);
			x=ZZMass;
			y=overallEventWeight;
			test.add(RooArgSet(x));
overallEventWeight_data.add(RooArgSet(y));
		}
		
	}
   }
	 cout<<"min: "<<min<<"  max: "<<max<<endl; 
	cout<<"suma: "<<suma<<endl;
}
