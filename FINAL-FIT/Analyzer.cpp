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
#include "RooLandau.h"
#include "RooRealSumPdf.h"
#include "RooMinimizer.h"

RooRealVar  x("x","x",105.0,140.0) ;
RooDataSet test("test","test", RooArgSet(x));

using namespace RooFit;
void Analyzer::sumall(){
TCanvas *canv = new TCanvas("canv","canv");
	
		canv->cd();
		
	 

   
		//RooRealVar Masa("Masa","Masa",105,140) ;
		//RooRealVar x("x","x",0,250) ;
		//RooRealVar mean("mean","Mean of Gaussian",125.0,105,140) ;
		/*RooRealVar sigma("sigma","Width of Gaussian",1.13,0.9,1.4) ;
		RooRealVar alpha("alpha","alpha",1.24,0.95,1.55) ;
		RooRealVar n("n","n",2.0,1.4,2.9) ;
		RooRealVar alpha2("alpha2","alpha2",1.72,1.2,2.4) ;
		RooRealVar n2("n2","n2",3.5,1.2,15.0) ;
		RooRealVar c("c","c",0.37,0.0,1.0) ;*/

		/*RooRealVar mH("m_{H}","m_{H}",125.0,105,140) ;
		RooRealVar sigma("#sigma","Width of Gaussian",1.13,-10.1,1.4) ;
		RooRealVar alpha("alpha","alpha",1.24,-20.95,20.55) ;
		RooRealVar n("n","n",2.0,1.4,500.9) ;
		RooRealVar alpha2("alpha2","alpha2",1.72,1.2,20.2) ;
		RooRealVar n2("n2","n2",3.5,1.2,250.0) ;*/


		//RooRealVar mH("m_{H}","m_{H}",125.0,105,140) ;
		RooRealVar mH("m_{H}","m_{H}",105,140) ;
		RooRealVar sigma("#sigma","Width of Gaussian",1.161) ;
		RooRealVar alpha("alpha","alpha",1.24) ;
		RooRealVar n("n","n",2.035) ;
		RooRealVar alpha2("alpha2","alpha2",1.77) ;
		RooRealVar n2("n2","n2",3.192) ;
		

		RooRealVar p0("p0","p0",1.0);
		RooRealVar p1("p1","p1",-0.158);
		RooFormulaVar meanH("meanH","@0*@1 + @2",RooArgList(mH,p0,p1));

		/*RooRealVar p0s("p0s","p0s",0.009073);
		RooRealVar p1s("p1s","p1s",0.01463);
		RooFormulaVar sigmaH("sigmaH","@0*@1 + @2",RooArgList(mH,p0s,p1s));*/


		//RooRealVar shift("shift","shift",0.15);
		//RooFormulaVar mH("mH","@0+@1",RooArgList(mean,shift));
		RooDoubleCB CBall("CBall", "Crystal Ball shape", x, meanH, sigma, alpha, n, alpha2 ,n2);
   
	   
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
		
		/*RooRealVar a1("a1","a1",-1.010,-1.59,-0.43) ;
		RooRealVar b1("b1","b1",252.0,115.0,389.0) ;
		RooRealVar c1("c1","c1",-14493,-22205.0,-6781.0) ;*/

		RooRealVar a1("a1","a1",-1.010) ;
		RooRealVar b1("b1","b1",252.0) ;
		RooRealVar c1("c1","c1",-14493) ;

		RooGenericPdf g1("g1","a1*x*x + b1*x + c1", RooArgSet(x,a1,b1,c1));

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
		/*RooRealVar a2("a2","a2",0.1,-2.7,2.9) ;
		RooRealVar b2("b2","b2",38,-326,402) ;*/

		RooRealVar a2("a2","a2",0.1) ;
		RooRealVar b2("b2","b2",38.0) ;
		
		RooGenericPdf g2("g2","a2*x + b2", RooArgSet(x,a2,b2));
		//RooGaussian gauss("gauss","gauss(x,mean,sigma)",ZZMass,mean,sigma) ;
	   
	   
	   //RooRealVar ZZMass("ZZMass","ZZMass",0,250) ;
		//RooDataSet data("data","dataset with ZZMass",fChain,ZZMass) ;

	   
	   //mean.setConstant(kTRUE) ;
	 	//g2.fitTo(data, Range(110,140));

		//samo gausijan test
		
		//RooPlot* xframe = x.frame();
		//gauss.plotOn(xframe);
		//xframe->Draw();
	RooRealVar mean_l("mean_l","mean_l",133.6) ;
		RooRealVar sigma_l("sigma_l","sigma_l",18.8) ;
		
		RooLandau landau("landau","landau(x,mean_l,sigma_l)", x, mean_l,sigma_l);



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
	RooRealVar nsig("nsig","#signal events",84.30866);
  	RooRealVar nbkg1("nbkg1","#background events1",82.252);
  	RooRealVar nbkg2("nbkg2","#background events2",9.23738);
  	RooRealVar nbkg3("nbkg3","#background events3",37.3);
	RooRealVar nbkg("nbkg","#nbkg",128.789);

	/*RooRealVar nsig("nsig","#signal events",88.35);
  	RooRealVar nbkg1("nbkg1","#background events1",93.66);
  	RooRealVar nbkg2("nbkg2","#background events2",10.52);
  	RooRealVar nbkg3("nbkg3","#background events3",42.47);
	RooRealVar nbkg("nbkg","#nbkg",146.65);*/

	RooAddPdf model_backg("model_backg","b1+b2+b3",RooArgList(g1,g2,landau),RooArgList(nbkg1,nbkg2,nbkg3));
	//RooRealVar coeff("coeff","#coeff", 0.395);

	RooRealVar p0c("p0c","p0c",0.02108);
		RooRealVar p1c("p1c","p1c",-2.242);
		RooRealVar mu("mu","mu",1.0);
		RooFormulaVar coeffH("coeffH","@3*(@0*@1 + @2)",RooArgList(mH,p0c,p1c,mu));


   	//RooAddPdf model("model","s+b1+b2+b3",RooArgList(CBall,g1,g2,landau),RooArgList(nsig,nbkg1,nbkg2,nbkg3));
   	//RooAddPdf model("model","s+b",RooArgList(CBall,model_backg),coeff);
	RooAddPdf model("model","s+b",RooArgList(CBall,model_backg),coeffH);
   	
   	//RooDataSet *podaci = model.generate(x, 1000);
   		model.fitTo(test);
   	//model.fitTo(*podaci);
   	RooPlot* masaframe = x.frame();
   	
   	test.plotOn(masaframe);
   	//podaci->plotOn(masaframe);
   	model.plotOn(masaframe);
   	//model.plotOn(masaframe, Components(g1), LineStyle(ELineStyle::kDashed));
	model.plotOn(masaframe, Components(CBall), LineColor(kRed));
	model.plotOn(masaframe, Components(g1), LineColor(kBlue));
	model.plotOn(masaframe, Components(g2), LineColor(kGreen));
	model.plotOn(masaframe, Components(landau), LineColor(kYellow));
	model.plotOn(masaframe, Components(model_backg), LineColor(kBlack));

	model.paramOn(masaframe, Layout(0.15,0.48,0.9));
	masaframe->SetXTitle("m_{H} [GeV]");
	masaframe->SetYTitle("Broj dogadaja / (0.35) ");
	masaframe->SetTitle("");;
	

   masaframe->Draw();
   canv->SaveAs("sistematska-pogreska.png");
/*RooAbsReal* nll = model.createNLL(test, NumCPU(6));
	RooMinimizer(*nll).migrad();
	 RooPlot* frame1 = mH.frame(Bins(100),Range(124.0,126.0),Title("")) ;
   nll->plotOn(frame1,ShiftToZero()) ;
	//RooAbsReal* pll_frac = nll->createProfile(sigma) ;
	//pll_frac->plotOn(frame1,ShiftToZero(),LineColor(kRed)) ;
	frame1->SetMinimum(0);
	frame1->SetMaximum(3);
	 //TCanvas *canv = new TCanvas("rf605_profilell","rf605_profilell",800, 400);
     //canv->cd(1) ;
		frame1->SetTitle("");
		frame1->GetYaxis()->SetTitle("Projekcija -log(likelihood)");
	 frame1->GetYaxis()->SetTitleOffset(1.4) ; frame1->Draw() ;
	//double broj = nll->getVal(0.5);
	//cout<<broj<<endl;
canv->SaveAs("maxliike-sigma1.png");
   //delete pll_frac ;
   delete nll ;*/




}

void Analyzer::Loop()
{
int counter=0;
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
		cout<<jentry<<"		"<<ZZMass<<endl;
		if(Z1Flav==-169 && Z2Flav==-169){
			x=ZZMass;
			test.add(RooArgSet(x));
counter++;
		}

	}
   }
cout<<counter<<":::::::::::::::::::::::::::: "<<endl;
}
