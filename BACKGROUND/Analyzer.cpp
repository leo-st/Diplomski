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
   c1->SaveAs("test.pdf");
}
void Analyzer::ZZTo4lext1()
{
TCanvas *c2 = new TCanvas("c2","c2");
	
	c2->cd();
	 

   
	RooRealVar ZZMass("ZZMass","ZZMass",110,140) ;
	//RooRealVar x("x","x",0,250) ;
	RooRealVar a("a","a",-1,-5,10) ;
	RooRealVar b("b","b",225,100,450) ;
	RooRealVar c("c","c",5000,-15000,15000) ;
	RooGenericPdf g1("g1","a*ZZMass*ZZMass + b*ZZMass + c", RooArgSet(ZZMass,a,b,c));
	//RooGaussian gauss("gauss","gauss(x,mean,sigma)",ZZMass,mean,sigma) ;
   
   
   //RooRealVar ZZMass("ZZMass","ZZMass",0,250) ;
	RooDataSet data("data","dataset with ZZMass",fChain,ZZMass) ;

   
   //mean.setConstant(kTRUE) ;
 g1.fitTo(data, Range(110,140));

	//samo gausijan test
	
	//RooPlot* xframe = x.frame();
	//gauss.plotOn(xframe);
	//xframe->Draw();




   // --- Plot toy data and composite PDF overlaid ---
   //Moze se dodati NormRange ako eksplicitno zelimo normirati inace ce uzet po defaultu range

   RooPlot* mesframe = ZZMass.frame();
   data.plotOn(mesframe,Range(110,140), LineColor(kBlue));
   g1.plotOn(mesframe,Range(110,140),  LineColor(kRed));
	g1.paramOn(mesframe, Layout(0.25));

   //model.plotOn(mesframe, Components(background), LineStyle(ELineStyle::kDashed));
	//RooChi2Var chi2("chi2","chi2",g,data) ;
   mesframe->Draw();
   c2->SaveAs("test-background.pdf");
	 //RooDataSet* dsmall = (RooDataSet*) data.reduce(EventRange(110,140)) ;
  //RooDataHist* dhsmall = data.binnedClone() ;
  //RooChi2Var chi2_lowstat("chi2_lowstat","chi2",g,*dhsmall) ;
  //cout << chi2_lowstat.getVal() << endl ;

}

void Analyzer::ggTo4mu()
{
TCanvas *c3 = new TCanvas("c3","c3");
	
	c3->cd();
	 

   
	RooRealVar ZZMass("ZZMass","ZZMass",110,140) ;
	//RooRealVar x("x","x",0,250) ;
	RooRealVar a("a","a",0.1,0.001,0.5) ;
	RooRealVar b("b","b",200,1,500) ;
	
	RooGenericPdf g2("g2","a*ZZMass + b", RooArgSet(ZZMass,a,b));
	//RooGaussian gauss("gauss","gauss(x,mean,sigma)",ZZMass,mean,sigma) ;
   
   
   //RooRealVar ZZMass("ZZMass","ZZMass",0,250) ;
	RooDataSet data("data","dataset with ZZMass",fChain,ZZMass) ;

   
   //mean.setConstant(kTRUE) ;
 g2.fitTo(data, Range(110,140));

	//samo gausijan test
	
	//RooPlot* xframe = x.frame();
	//gauss.plotOn(xframe);
	//xframe->Draw();




   // --- Plot toy data and composite PDF overlaid ---
   //Moze se dodati NormRange ako eksplicitno zelimo normirati inace ce uzet po defaultu range

   RooPlot* mesframe = ZZMass.frame();
   data.plotOn(mesframe,Range(110,140), LineColor(kBlue));
   g2.plotOn(mesframe,Range(110,140),  LineColor(kYellow));
	g2.paramOn(mesframe, Layout(0.25));

   //model.plotOn(mesframe, Components(background), LineStyle(ELineStyle::kDashed));
	//RooChi2Var chi2("chi2","chi2",g,data) ;
   mesframe->Draw();
   c3->SaveAs("test-background-gg.pdf");
	//cout<<chi2.getVal()<<endl;
	//cout<<mesframe->chiSquare("g","data",3)<<endl;

}
void Analyzer::ggTo4mutest()
{
TCanvas *c1 = new TCanvas("c1","c1");
	
	c1->cd();
	 
	//_lumi postavljam sam na neku vrijednost
	//xsec zadan u branchu = 0.00158549
	//_k_factor = 1 za signal, a za pozadinu je zadan u branchu
	//overallEventWeight zadan je kao branch
	//L1prefiringWeight zadan je kao u branchu  = 1
	//ggH_NNLOPS_weight=1 za signal, a za pozadinu je zadan u branchu
	//gen_sum_weights vrijednost 40-og bina u histogramu u ROOT file-u
	RooRealVar ZZMass("ZZMass","ZZMass",110,140) ;
	RooRealVar LumiNumber("LumiNumber","LumiNumber",1,10000) ;
	RooRealVar xsec("xsec","xsec",0.00158549) ;
	RooRealVar KFactor_QCD_ggZZ_Nominal("KFactor_QCD_ggZZ_Nominal","KFactor_QCD_ggZZ_Nominal",2.1,2.0,2.5) ;
	RooRealVar overallEventWeight("overallEventWeight","overallEventWeight",0.0,2.5) ;
	RooRealVar L1prefiringWeight("L1prefiringWeight","L1prefiringWeight",1) ;
	//RooRealVar ggH_NNLOPS_weight("ggH_NNLOPS_weight","ggH_NNLOPS_weight",110,140) ;
	RooRealVar genHEPMCweight("genHEPMCweight","genHEPMCweight",594858.56) ;
	
	//RooDataSet xsec_data("xsec_data","xsec_data",fChain,xsec) ;
	RooDataSet KFactor_QCD_ggZZ_Nominal_data("KFactor_QCD_ggZZ_Nominal","KFactor_QCD_ggZZ_Nominal",fChain,KFactor_QCD_ggZZ_Nominal) ;
	RooDataSet overallEventWeight_data("overallEventWeight_data","overallEventWeight_data",fChain,overallEventWeight) ;
	//RooDataSet L1prefiringWeight_data("L1prefiringWeight_data","L1prefiringWeight_data",fChain,L1prefiringWeight) ;
	//RooDataSet genHEPMCweight_data("genHEPMCweight_data","genHEPMCweight_data",fChain,genHEPMCweight) ;
	
	//RooRealVar ZZMass("ZZMass","ZZMass",0,250) ;
	RooDataSet data("data","dataset with ZZMass",fChain,ZZMass) ;
	

   
	//RooRealVar ZZMass("ZZMass","ZZMass",110,140) ;
	//RooRealVar x("x","x",0,250) ;
	RooRealVar a("a","a",0.1,0.001,0.5) ;
	RooRealVar b("b","b",200,1,500) ;
	
	RooGenericPdf g("g","a*ZZMass + b", RooArgSet(ZZMass,a,b));
	//RooGaussian gauss("gauss","gauss(x,mean,sigma)",ZZMass,mean,sigma) ;
   
   
   
	
	// Construct formula to calculate (fake) weight for events
   RooFormulaVar wFunc("gen","(LumiNumber * 1000 * xsec * KFactor_QCD_ggZZ_Nominal * overallEventWeight * L1prefiringWeight ) / genHEPMCweight",RooArgSet(LumiNumber,xsec, KFactor_QCD_ggZZ_Nominal, overallEventWeight,L1prefiringWeight,genHEPMCweight)) ;
   
   // Add column with variable w to previously generated dataset
   RooRealVar* w = (RooRealVar*) data.addColumn(wFunc) ;
   // Dataset d is now a dataset with two observable (x,w) with 1000 entries
   data.Print() ;
   // Instruct dataset wdata in interpret w as event weight rather than as observable
   RooDataSet wdata(data.GetName(),data.GetTitle(),*data.get(),w->GetName()) ;

   
   //mean.setConstant(kTRUE) ;
 g.fitTo(wdata, Range(110,140));

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
   c1->SaveAs("test-background-gg.pdf");
	//cout<<chi2.getVal()<<endl;
	//cout<<mesframe->chiSquare("g","data",3)<<endl;

}

void Analyzer::Loop()
{
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
   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
      //h1->Fill(ZZMass);
	if(ZZMass>= 110.0 && ZZMass<=140.0){
		cout<<jentry<<" : "<<ZZMass<<endl;
	}
      
   }
   //h1->Draw();
   //c1->SaveAs("KFactor_QCD_ggZZ_Nominal_histo.pdf");

}
