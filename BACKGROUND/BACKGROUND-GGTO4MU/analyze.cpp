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
	//suma: 9.23738


	//Analyzer *signal = new Analyzer("/home/public/data/HiggsMassMeasurement/2018/ggH125/");
	//signal->Loop();
	//signal->runArgusModel();

	//Analyzer *a = new Analyzer("/home/public/data/2018_MC/ZZTo4lext1/");
	//a->Loop();
	//a->ZZTo4lext1();
	
	
	Analyzer *b = new Analyzer("/home/public/data/2018_MC/ggTo4mu_Contin_MCFM701/");
	b->ggTo4mu();
	//b->Loop();
	

	//a->runArgusModel();
	//a->runArgusModel();
	//a->Theoretical_noHiggs();
	//a->Expected_p_value_scan();
	//a->PlotMass();
	
return 0;
}
