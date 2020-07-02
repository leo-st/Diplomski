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

void Analyzer::sumall(){

	
		
		TCanvas *canv = new TCanvas("canv","canv");
	
		canv->cd();
		
	 

   
		RooRealVar Masa("Masa","Masa",105,140) ;
		//RooRealVar x("x","x",0,250) ;
		RooRealVar mean("mean","Mean of Gaussian",124.85,124.65,125.05) ;
		RooRealVar sigma("sigma","Width of Gaussian",1.13,0.92,1.34) ;
		RooRealVar alpha("alpha","alpha",1.24,0.75,1.73) ;
		RooRealVar n("n","n",2.0,0.7,3.3) ;
		RooRealVar alpha2("alpha2","alpha2",1.72,1.0,2.44) ;
		RooRealVar n2("n2","n2",3.5,-0.8,7.8) ;
		RooDoubleCB CBall("CBall", "Crystal Ball shape", Masa, mean, sigma, alpha, n, alpha2 ,n2);
   
	   
	   //RooRealVar ZZMass("ZZMass","ZZMass",110,140) ;
		//RooDataSet data("data","dataset with ZZMass",fChain,ZZMass) ;

	   
	   //mean.setConstant(kTRUE) ;
	 	//CBall.fitTo(data, Range(110,140));

		//samo gausijan test
		
		//RooPlot* xframe = x.frame();
		//gauss.plotOn(xframe);
		//xframe->Draw();




	   // --- Plot toy data and composite PDF overlaid ---
	   //Moze se dodati NormRange ako eksplicitno zelimo normirati inace ce uzet po defaultu range

	   /*RooPlot* mesframe = ZZMass.frame();
	   data.plotOn(mesframe,Range(110,140), LineColor(kBlue));
	   CBall.plotOn(mesframe,Range(110,140),  LineColor(kRed));
	   //model.plotOn(mesframe, Components(background), LineStyle(ELineStyle::kDashed));
		CBall.paramOn(mesframe, Layout(0.55));
	   mesframe->Draw();
	   c1->SaveAs("test.pdf");*/
			
		
		//TCanvas *c2 = new TCanvas("c2","c2");
	
		//c2->cd();

		//RooRealVar ZZMass("ZZMass","ZZMass",110,140) ;
		//RooRealVar x("x","x",0,250) ;
		RooRealVar a1("a1","a1",-1.010,-1.59,-0.43) ;
		RooRealVar b1("b1","b1",252.0,115.0,389.0) ;
		RooRealVar c1("c1","c1",-14493,-22205.0,-6781.0) ;
		RooGenericPdf g1("g1","a1*Masa*Masa + b1*Masa + c1", RooArgSet(Masa,a1,b1,c1));
		//RooGaussian gauss("gauss","gauss(x,mean,sigma)",ZZMass,mean,sigma) ;
	   
	   
	   //RooRealVar ZZMass("ZZMass","ZZMass",0,250) ;
		//RooDataSet data("data","dataset with ZZMass",fChain,ZZMass) ;

	   
	   //mean.setConstant(kTRUE) ;
	 	//g1.fitTo(data, Range(110,140));

		//samo gausijan test
		
		//RooPlot* xframe = x.frame();
		//gauss.plotOn(xframe);
		//xframe->Draw();




	   // --- Plot toy data and composite PDF overlaid ---
	   //Moze se dodati NormRange ako eksplicitno zelimo normirati inace ce uzet po defaultu range

	  /* RooPlot* mesframe = ZZMass.frame();
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
		
		TCanvas *c3 = new TCanvas("c3","c3");
	
		c3->cd();*/
		 

	   
		//RooRealVar ZZMass("ZZMass","ZZMass",110,140) ;
		//RooRealVar x("x","x",0,250) ;
		RooRealVar a2("a2","a2",0.1,0.-0.1,0.3) ;
		RooRealVar b2("b2","b2",0.095,0.07,0.12) ;
		
		RooGenericPdf g2("g2","a2*Masa + b2", RooArgSet(Masa,a2,b2));
		//RooGaussian gauss("gauss","gauss(x,mean,sigma)",ZZMass,mean,sigma) ;
	   
	   
	   //RooRealVar ZZMass("ZZMass","ZZMass",0,250) ;
		//RooDataSet data("data","dataset with ZZMass",fChain,ZZMass) ;

	   
	   //mean.setConstant(kTRUE) ;
	 	//g2.fitTo(data, Range(110,140));

		//samo gausijan test
		
		//RooPlot* xframe = x.frame();
		//gauss.plotOn(xframe);
		//xframe->Draw();




	   // --- Plot toy data and composite PDF overlaid ---
	   //Moze se dodati NormRange ako eksplicitno zelimo normirati inace ce uzet po defaultu range

	  /* RooPlot* mesframe = ZZMass.frame();
	   data.plotOn(mesframe,Range(110,140), LineColor(kBlue));
	   g2.plotOn(mesframe,Range(110,140),  LineColor(kYellow));
		g2.paramOn(mesframe, Layout(0.25));

	   //model.plotOn(mesframe, Components(background), LineStyle(ELineStyle::kDashed));
		//RooChi2Var chi2("chi2","chi2",g,data) ;
	   mesframe->Draw();
	   c3->SaveAs("test-background-gg.pdf");
		//cout<<chi2.getVal()<<endl;
		//cout<<mesframe->chiSquare("g","data",3)<<endl;*/
		
	
	//RooRealVar masa("masa","masa",110,140);
	RooRealVar nsig("nsig","#signal events",6750);
  	RooRealVar nbkg1("nbkg1","#background events1",5300);
  	RooRealVar nbkg2("nbkg2","#background events2",5272);
   	RooAddPdf model("model","s+b1+b2",RooArgList(CBall,g1,g2),RooArgList(nsig,nbkg1,nbkg2));
   	
   	RooDataSet *podaci = model.generate(Masa, 6000);
   	model.fitTo(*podaci);
   	RooPlot* masaframe = Masa.frame();
   	
   	podaci->plotOn(masaframe);
   	model.plotOn(masaframe);
   	//model.plotOn(masaframe, Components(g1), LineStyle(ELineStyle::kDashed));
	model.plotOn(masaframe, Components(CBall), LineColor(kRed));
	model.plotOn(masaframe, Components(g1), LineColor(kBlue));
	model.plotOn(masaframe, Components(g2), LineColor(kGreen));

	model.paramOn(masaframe, Layout(0.7));

   masaframe->Draw();
   canv->SaveAs("final-test8.pdf");

}











