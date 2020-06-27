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

	
		
		TCanvas *c1 = new TCanvas("c1","c1");
	
		c1->cd();
		
	 

   
		RooRealVar ZZMass("ZZMass","ZZMass",105,140) ;
		//RooRealVar x("x","x",0,250) ;
		RooRealVar mean("mean","Mean of Gaussian",124.588,124.496,124.68) ;
		RooRealVar sigma("sigma","Width of Gaussian",1.4,1.25,1.55) ;
		RooRealVar alpha("alpha","alpha",0.77,0.64,0.91) ;
		RooRealVar n("n","n",4.13,3.22,5.05) ;
		RooRealVar alpha2("alpha2","alpha2",1.41,1.17,1.65) ;
		RooRealVar n2("n2","n2",4.9,3.0,6.8) ;
		RooDoubleCB CBall("CBall", "Crystal Ball shape", ZZMass, mean, sigma, alpha, n, alpha2 ,n2);
   
	   
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
		RooRealVar a("a","a",-0.41,-0.58,-0.21) ;
		RooRealVar b("b","b",106.0,45.0,167.0) ;
		RooRealVar c("c","c",-6366.6,-8695.0,-4035.0) ;
		RooGenericPdf g1("g1","a*ZZMass*ZZMass + b*ZZMass + c", RooArgSet(ZZMass,a,b,c));
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
		RooRealVar aa("aa","aa",0.1,-0.34,0.53) ;
		RooRealVar bb("bb","bb",36,-235,305) ;
		
		RooGenericPdf g2("g2","aa*ZZMass + bb", RooArgSet(ZZMass,aa,bb));
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
	RooRealVar nsig("nsig","#signal events",121570);
  	RooRealVar nbkg1("nbkg1","#background events1",163213);
  	RooRealVar nbkg2("nbkg2","#background events2",332083);
   	RooAddPdf model("model","s+b1+b2",RooArgList(CBall,g1,g2),RooArgList(nsig,nbkg1,nbkg2));
   	
   	RooDataSet *podaci = model.generate(ZZMass, 6000);
   	model.fitTo(*podaci);
   	RooPlot* masaframe = ZZMass.frame();
   	
   	podaci->plotOn(masaframe);
   	model.plotOn(masaframe);
   	//model.plotOn(masaframe, Components(g1), LineStyle(ELineStyle::kDashed));
	model.plotOn(masaframe, Components(CBall), LineColor(kRed));
	model.plotOn(masaframe, Components(g1), LineColor(kBlue));
	model.plotOn(masaframe, Components(g2), LineColor(kGreen));

   masaframe->Draw();
   c1->SaveAs("final-test3.pdf");

}











