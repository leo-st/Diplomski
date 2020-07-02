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
#include <iostream>
#include <fstream>

 RooRealVar  x("x","x",105,140) ;
RooRealVar  y("y","y",-2.0,2.0) ;
RooRealVar  z("z","z",-2.0,9.0) ;
RooDataSet test("test","test", RooArgSet(x));
RooDataSet KFactor_EW_qqZZ_data("KFactor_EW_qqZZ","KFactor_EW_qqZZ",RooArgSet(y)) ;
RooDataSet overallEventWeight_data("overallEventWeight_data","overallEventWeight_data",RooArgSet(z)) ;

using namespace RooFit;

void Analyzer::ZZTo4lext1()
{
TCanvas *c1 = new TCanvas("c1","c1");
	
	c1->cd();
	// RooRealVar ZZMass("ZZMass","ZZMass",105,140) ;
	RooRealVar LumiNumber("LumiNumber","LumiNumber",137.0) ;
	RooRealVar xsec("xsec","xsec",1.256) ;
	//RooRealVar KFactor_EW_qqZZ("KFactor_EW_qqZZ","KFactor_EW_qqZZ",-2.0,2.0) ;
	//RooRealVar overallEventWeight("overallEventWeight","overallEventWeight",-2.0,9.0) ;
	RooRealVar L1prefiringWeight("L1prefiringWeight","L1prefiringWeight",1.0) ;
	//RooRealVar ggH_NNLOPS_weight("ggH_NNLOPS_weight","ggH_NNLOPS_weight",110,140) ;
	RooRealVar genHEPMCweight("genHEPMCweight","genHEPMCweight",8398762.0) ;
	
	//RooDataSet xsec_data("xsec_data","xsec_data",fChain,xsec) ;
	//RooDataSet KFactor_EW_qqZZ_data("KFactor_EW_qqZZ","KFactor_EW_qqZZ",fChain,KFactor_EW_qqZZ) ;
	//RooDataSet overallEventWeight_data("overallEventWeight_data","overallEventWeight_data",fChain,overallEventWeight) ;
	//RooDataSet L1prefiringWeight_data("L1prefiringWeight_data","L1prefiringWeight_data",fChain,L1prefiringWeight) ;
	//RooDataSet genHEPMCweight_data("genHEPMCweight_data","genHEPMCweight_data",fChain,genHEPMCweight) ;
	
	//RooRealVar ZZMass("ZZMass","ZZMass",0,250) ;
	//RooDataSet data("data","dataset with ZZMass",fChain,ZZMass) ;
	

   
	//RooRealVar ZZMass("ZZMass","ZZMass",105,140) ;
	//RooRealVar x("x","x",0,250) ;
	RooRealVar a("a","a",-1,-5,5) ;
	RooRealVar b("b","b",250,-50,450) ;
	RooRealVar c("c","c",-15000,-20000,10000) ;
	RooGenericPdf g("g","a*x*x + b*x + c", RooArgSet(x,a,b,c));
	//RooGaussian gauss("gauss","gauss(x,mean,sigma)",ZZMass,mean,sigma) ;  
   
   
	
	// Construct formula to calculate (fake) weight for events
   RooFormulaVar wFunc("gen","(LumiNumber * 1000 * xsec * y * z * L1prefiringWeight ) / genHEPMCweight",RooArgSet(LumiNumber,xsec, y, z,L1prefiringWeight,genHEPMCweight)) ;
   
   // Add column with variable w to previously generated dataset
   RooRealVar* w = (RooRealVar*) test.addColumn(wFunc) ;
   // Dataset d is now a dataset with two observable (x,w) with 1000 entries
   //test.Print() ;
   // Instruct dataset wdata in interpret w as event weight rather than as observable
   RooDataSet wdata(test.GetName(),test.GetTitle(),&test, *test.get(),0,w->GetName()) ;


   
   //mean.setConstant(kTRUE) ;
 g.fitTo(wdata, Range(105,140));

	//samo gausijan test
	
	//RooPlot* xframe = x.frame();
	//gauss.plotOn(xframe);
	//xframe->Draw();




   // --- Plot toy data and composite PDF overlaid ---
   //Moze se dodati NormRange ako eksplicitno zelimo normirati inace ce uzet po defaultu range

   RooPlot* mesframe = x.frame();
   wdata.plotOn(mesframe,Range(105,140), LineColor(kBlue));
   g.plotOn(mesframe,Range(105,140),  LineColor(kRed));
	g.paramOn(mesframe, Layout(0.65));

   //model.plotOn(mesframe, Components(background), LineStyle(ELineStyle::kDashed));
	//RooChi2Var chi2("chi2","chi2",g,data) ;
   mesframe->Draw();
   c1->SaveAs("background-ZZto4l4.pdf");
	//cout<<chi2.getVal()<<endl;
	//cout<<mesframe->chiSquare("g","data",3)<<endl;

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
	//cout<<"jentry: "<<jentry<<"	"<<L1prefiringWeight<<endl;
if(L1prefiringWeight<min){
min=L1prefiringWeight;}
if(L1prefiringWeight>max){
max=L1prefiringWeight;}
	}
      if(ZZMass>= 105.0 && ZZMass<=140.0){
	if(Z2Flav==-169 && Z1Flav==-169){ cout<<"jentry: "<<jentry<<"	"<<xsec<<endl;
x=ZZMass;
y=KFactor_EW_qqZZ;
z=overallEventWeight;
				test.add(RooArgSet(x));
	suma=suma +((137.0 * 1000 * 1.256 * KFactor_EW_qqZZ * overallEventWeight ) / 8398762.0);
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
