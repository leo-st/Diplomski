#define Analyzer_cxx
#include "Analyzer.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TMath.h>
#include <TF1.h>
#include "RooRealVar.h"
#include "RooConstVar.h"
#include "RooGaussian.h"
#include "RooArgusBG.h"
#include "RooAddPdf.h"
#include "RooDataSet.h"
#include "RooPlot.h"

using namespace RooFit;
void Analyzer::runArgusModel() {
	TCanvas *c1 = new TCanvas("c1","c1");
	c1->cd();
	RooRealVar ZZMass("ZZMass","ZZMass",110,140) ;
	//RooRealVar x("x","x",0,250) ;
	RooRealVar mean("mean","Mean of Gaussian",125,110,140) ;
	RooRealVar sigma("sigma","Width of Gaussian",2,0,250) ;
	RooGaussian gauss("gauss","gauss(x,mean,sigma)",ZZMass,mean,sigma) ;
   
   
   //RooRealVar ZZMass("ZZMass","ZZMass",110,140) ;
	RooDataSet data("data","dataset with ZZMass",fChain,ZZMass) ;

   
   //mean.setConstant(kTRUE) ;
 gauss.fitTo(data, Range(110,140));

	//samo gausijan test
	
	//RooPlot* xframe = x.frame();
	//gauss.plotOn(xframe);
	//xframe->Draw();




   // --- Plot toy data and composite PDF overlaid ---
   RooPlot* mesframe = ZZMass.frame();
   data.plotOn(mesframe, LineColor(kBlue));
   gauss.plotOn(mesframe, LineColor(kRed));
   //model.plotOn(mesframe, Components(background), LineStyle(ELineStyle::kDashed));

   mesframe->Draw();
   c1->SaveAs("test7.pdf");
}

void Analyzer::Loop()
{
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
   }
   

}
