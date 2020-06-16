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
extern RooDoubleCB CBall;
extern RooGenericPdf g1;
extern RooGenericPdf g2;

using namespace RooFit;

void sumall(TString path){

	
    if(tree=0){
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject(path+ "ZZ4lAnalysis.root");
      if (!f || !f->IsOpen()) {
         f = new TFile(path+"ZZ4lAnalysis.root");
      }
      TDirectory * dir = (TDirectory*)f->Get(path+ "ZZ4lAnalysis.root:/ZZTree");
      dir->GetObject("candTree",tree);

 	}
   Init(tree);

	if(path=="/home/public/data/HiggsMassMeasurement/2018/ggH125/"){
		
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
	   return;
			
	
	}
	else if(path=="/home/public/data/2018_MC/ZZTo4lext1/"){
		
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
		return;
	
	}
	else{
		
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
	RooRealVar masa("masa","masa",110,140);
	RooRealVar nsig("nsig","#signal events",121570);
  	RooRealVar nbkg1("nbkg1","#background events1",163213);
  	//RooRealVar nbkg2("nbkg2","#background events2",332083);
   	RooAddPdf model("model","s+b1",RooArgList(CBall,g1),RooArgList(nsig,nbkg1));
   	
   	RooDataSet *podaci = model.generate(masa, 10000);
   	//model.fitTo(*podaci);
   	//RooPlot* masaframe = masa.frame();
   	
   	//podaci->plotOn(masaframe);
   	//model.plotOn(masaframe);
   	//model.plotOn(masaframe, Components(a->g1,b->g2), LineStyle(ELineStyle::kDashed));

   //masaframe->Draw();
   //c4->SaveAs("final-test.pdf");

}











