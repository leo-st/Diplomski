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

using namespace std;

int main(){
	TCanvas *c4 = new TCanvas("c1","c1");
	
	c4->cd();
	RooRealVar masa("masa","m_{ES} (GeV)",110.0,140.0);

	Analyzer *signal = new Analyzer("/home/public/data/HiggsMassMeasurement/2018/ggH125/");
	//signal->Loop();
	signal->runArgusModel();

	Analyzer *a = new Analyzer("/home/public/data/2018_MC/ZZTo4lext1/");
	//a->Loop();
	a->ZZTo4lext1();
	
	
	//Analyzer *b = new Analyzer("/home/public/data/2018_MC/ggTo4mu_Contin_MCFM701/");
	//b->ggTo4mutest();
	//b->Loop();
	RooRealVar nsig("nsig","#signal events",121570);
  	RooRealVar nbkg1("nbkg1","#background events1",163213);
  	//RooRealVar nbkg2("nbkg2","#background events2",332083);
   	RooAddPdf model("model","s+b1",RooArgList(signal->CBall,a->g1),RooArgList(nsig,nbkg1));
   	
   	RooDataSet *podaci = model.generate(masa, 10000);
   	//model.fitTo(*podaci);
   	//RooPlot* masaframe = masa.frame();
   	
   	//podaci->plotOn(masaframe);
   	//model.plotOn(masaframe);
   	//model.plotOn(masaframe, Components(a->g1,b->g2), LineStyle(ELineStyle::kDashed));

   //masaframe->Draw();
   //c4->SaveAs("final-test.pdf");
   	

	
	

	//a->runArgusModel();
	//a->runArgusModel();
	//a->Theoretical_noHiggs();
	//a->Expected_p_value_scan();
	//a->PlotMass();
	
return 0;
}
