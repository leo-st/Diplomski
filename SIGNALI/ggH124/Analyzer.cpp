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
 RooRealVar  x("x","x",105,140) ;
RooRealVar  y("y","y",-80.0,600.0) ;
RooRealVar  z("z","z",-2.0,8.0) ;
RooDataSet test("test","test", RooArgSet(x));
RooDataSet overallEventWeight_data("overallEventWeight_data","overallEventWeight_data",RooArgSet(y)) ;
RooDataSet ggH_NNLOPS_weight_data("ggH_NNLOPS_weight_data","ggH_NNLOPS_weight_data", RooArgSet(z));

using namespace RooFit;
void Analyzer::runArgusModel() {
	TCanvas *canv = new TCanvas("c1","c1");
	
	canv->cd();
	 

   
	//RooRealVar x("x","x",105,140) ;
	//RooRealVar x("x","x",0,250) ;
	/*RooRealVar mean("mean","Mean of Gaussian",125,120,130) ;
	RooRealVar sigma("sigma","Width of Gaussian",1.2,-2.0,2.5) ;
	RooRealVar alpha("alpha","alpha",0.1,-3.0,4.0) ;
	RooRealVar n("n","n",100,0,250) ;
	RooRealVar alpha2("alpha2","alpha2",0.2,-5.0,5.2) ;
	RooRealVar n2("n2","n2",10,-100,250) ;
	RooRealVar shift("shift","shift",0.15) ;
	RooFormulaVar mH("mH","@0+@1",RooArgList(mean,shift));
	RooDoubleCB CBall("CBall", "Crystal Ball shape", x, mH, sigma, alpha, n, alpha2 ,n2);*/


	//RooRealVar Masa("Masa","Masa",105,140) ;
		//RooRealVar x("x","x",0,250) ;
		//RooRealVar mean("mean","Mean of Gaussian",124.85,105.0,140.0) ;
		//RooRealVar mean("mean","Mean of Gaussian",124.85) ;
		RooRealVar mean("mean","Mean of Gaussian",125.0,105,140) ;
		RooRealVar sigma("sigma","Width of Gaussian",1.13,-10.1,1.4) ;
		RooRealVar alpha("alpha","alpha",1.24,-20.95,20.55) ;
		RooRealVar n("n","n",2.0,0.1,500.9) ;
		RooRealVar alpha2("alpha2","alpha2",1.72,0.1,20.2) ;
		RooRealVar n2("n2","n2",3.5,0.1,250.0) ;

		/*RooRealVar sigma("sigma","Width of Gaussian",1.13) ;
		RooRealVar alpha("alpha","alpha",1.24) ;
		RooRealVar n("n","n",2.0) ;
		RooRealVar alpha2("alpha2","alpha2",1.72) ;
		RooRealVar n2("n2","n2",3.5) ;*/

		//RooRealVar shift("shift","shift",0.15);
		//RooFormulaVar mH("mH","@0+@1",RooArgList(mean,shift));
		RooDoubleCB CBall("CBall", "Crystal Ball shape", x, mean, sigma, alpha, n, alpha2 ,n2);




//_lumi postavljam sam na neku vrijednost
	//xsec zadan u branchu = 0.00158549
	//_k_factor = 1 za signal, a za pozadinu je zadan u branchu
	//overallEventWeight zadan je kao branch
	//L1prefiringWeight zadan je kao u branchu  = 1
	//ggH_NNLOPS_weight=1 za signal, a za pozadinu je zadan u branchu
	//gen_sum_weights vrijednost 40-og bina u histogramu u ROOT file-u
	RooRealVar ggH_NNLOPS_weight("ggH_NNLOPS_weight","ggH_NNLOPS_weight",-2.0,8.0);
	RooRealVar LumiNumber("LumiNumber","LumiNumber",137.0) ;
	RooRealVar xsec("xsec","xsec",0.0133352) ;
	RooRealVar KFactor_QCD_ggZZ_Nominal("KFactor_QCD_ggZZ_Nominal","KFactor_QCD_ggZZ_Nominal",1.0) ;
	RooRealVar overallEventWeight("overallEventWeight","overallEventWeight",-80.0,600.0) ;
	RooRealVar L1prefiringWeight("L1prefiringWeight","L1prefiringWeight",1.0) ;
	//RooRealVar ggH_NNLOPS_weight("ggH_NNLOPS_weight","ggH_NNLOPS_weight",110,140) ;
	RooRealVar genHEPMCweight("genHEPMCweight","genHEPMCweight",28744188.0) ;
	
	//RooDataSet LumiNumber_data("LumiNumber_data","LumiNumber_data", fChain, LumiNumber);
	//RooDataSet ggH_NNLOPS_weight_data("ggH_NNLOPS_weight_data","ggH_NNLOPS_weight_data", fChain, ggH_NNLOPS_weight);
	//RooDataSet xsec_data("xsec_data","xsec_data",fChain,xsec) ;
	//RooDataSet KFactor_QCD_ggZZ_Nominal_data("KFactor_QCD_ggZZ_Nominal","KFactor_QCD_ggZZ_Nominal",fChain,KFactor_QCD_ggZZ_Nominal) ;
	//RooDataSet overallEventWeight_data("overallEventWeight_data","overallEventWeight_data",fChain,overallEventWeight) ;
	//RooDataSet L1prefiringWeight_data("L1prefiringWeight_data","L1prefiringWeight_data",fChain,L1prefiringWeight) ;
	//RooDataSet genHEPMCweight_data("genHEPMCweight_data","genHEPMCweight_data",fChain,genHEPMCweight) ;
	
	//RooDataSet data("data","dataset with ZZMass");
   
 /*if (fChain == 0) return;
   Long64_t nentries = fChain->GetEntriesFast();
   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
      //h1->Fill(ZZMass);
	if(ZZMass>=105 && ZZMass<=140){
		if(Z1Flav==-169 && Z2Flav==-169){
			//data.add(ZZMass);
		}
	}
   }*/









   
   //RooRealVar ZZMass("ZZMass","ZZMass",110,140) ;
	//RooDataSet data("data","dataset with ZZMass",fChain,ZZMass) ;
	
	
	// Construct formula to calculate (fake) weight for events
   RooFormulaVar wFunc("gen","(137.0 * 1000 * 0.0123274  * y ) / 30233264.0 * z",RooArgSet( y,z)) ;
   
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
//RooRealVar shift("shift","shift",0.15);
//RooFormulaVar mH("mH","@0+@1",RooArgList(mean,shift));
	//samo gausijan test
	
	//RooPlot* xframe = x.frame();
	//gauss.plotOn(xframe);
	//xframe->Draw();

//cout<<mH.evaluate()<<endl;


   // --- Plot toy data and composite PDF overlaid ---
   //Moze se dodati NormRange ako eksplicitno zelimo normirati inace ce uzet po defaultu range
	x.setRange("signal",105,140);
	//RooAbsReal *integral=CBall.createIntegral(ZZMass,ZZMass, "signal");
//cout<<endl<<"INTEGRAL:::::::::	"<<integral->getVal()<<endl<<endl;
   RooPlot* mesframe = x.frame();
   wdata.plotOn(mesframe,Range(105,140), LineColor(kBlue));
   CBall.plotOn(mesframe,Range(105,140),  LineColor(kRed));
   //model.plotOn(mesframe, Components(background), LineStyle(ELineStyle::kDashed));
	CBall.paramOn(mesframe, Layout(0.6));
   mesframe->Draw();
   canv->SaveAs("ggH124-1.png");
/*RooAbsReal* nll = CBall.createNLL(wdata, NumCPU(2));
	RooMinimizer(*nll).migrad();
	 RooPlot* frame1 = mean.frame(Bins(100),Range(124.0,126.0),Title("LL and profileLL in mean")) ;
   nll->plotOn(frame1,ShiftToZero()) ;
	RooAbsReal* pll_frac = nll->createProfile(mean) ;
	pll_frac->plotOn(frame1,ShiftToZero(),LineColor(kRed)) ;
	frame1->SetMinimum(0);
	frame1->SetMaximum(5);
	 TCanvas *canv = new TCanvas("rf605_profilell","rf605_profilell",800, 400);
     canv->cd(1) ; frame1->GetYaxis()->SetTitleOffset(1.4) ; frame1->Draw() ;
canv->SaveAs("maxlike-signal2.pdf");
   delete pll_frac ;
   delete nll ;
*/
}
void Analyzer::Loop()
{
	ofstream myfile;
	ofstream myfile1;
  myfile.open ("example.txt");
myfile1.open ("example1.txt");
	TCanvas *c1 = new TCanvas("c1","c1");
	c1->cd();
	TH1F *h1 = new TH1F("TransMomentum","",400,2.0,2.4); 

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
myfile <<"JENTRY: "<<"	LumiNumber : "<<"	overallEventWeight_data : "<<endl;
myfile1<<"jentry: "<<"		data"<<"		weight( (LumiNumber * 1000 * xsec * overallEventWeight) / genHEPMCweight * ggH_NNLOPS_weight"<<endl;
   Long64_t nentries = fChain->GetEntriesFast();
double min=900000,max=-1000000;
double suma=0.0;
int counter=0;
   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
      //h1->Fill(ZZMass);

	if(ZZMass>= 105.0 && ZZMass<=140.0){
		//myfile <<jentry<<"	"<<LumiNumber<<"	 "<<overallEventWeight<<endl;
		//myfile1<<jentry<<"		"<<ZZMass<<"		"<<(LumiNumber * 1000 * 0.0133352 * overallEventWeight) / 28744188.0 * ggH_NNLOPS_weight<<endl;		
//suma = suma+((137.0 * 1000 * 0.00158549 * KFactor_QCD_ggZZ_Nominal * overallEventWeight ) / 594858.56);
//cout<<jentry<<" : "<<L1prefiringWeight<<endl;
	}
	if(ZZMass>= 105.0 && ZZMass<=140.0){
	//cout<<"jentry: "<<jentry<<"	ggH_NNLOPS_weight: "<<ggH_NNLOPS_weight<<endl;
if(xsec<min){
min=xsec;}
if(xsec>max){
max=xsec;}
	}
      if(ZZMass>= 105.0 && ZZMass<=140.0){
	if(Z2Flav==-169 && Z1Flav==-169){// cout<<"jentry: "<<jentry<<"	"<<xsec<<endl;
x=ZZMass;
y=overallEventWeight;
z=ggH_NNLOPS_weight;
				test.add(RooArgSet(x));
overallEventWeight_data.add(RooArgSet(y));
ggH_NNLOPS_weight_data.add(RooArgSet(z));


suma= suma + (137.0 * 1000 * 0.0123274 * overallEventWeight  ) / 30233264.0 * ggH_NNLOPS_weight;
counter++;}
	}	
   }
   cout<<"min: "<<min<<"  max: "<<max<<endl; 
	cout<<"suma: "<<suma<<endl;
cout<<"counter: "<<counter<<endl;
myfile.close();
myfile1.close();
   //h1->Draw();
   //c1->SaveAs("KFactor_QCD_ggZZ_Nominal_histo.pdf");

}
