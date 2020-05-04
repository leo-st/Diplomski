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
	RooRealVar x("x","x",100,150) ;
	RooRealVar mean("mean","Mean of Gaussian",125,100,150) ;
	RooRealVar sigma("sigma","Width of Gaussian",3,100,150) ;
	RooGaussian gauss("gauss","gauss(x,mean,sigma)",x,mean,sigma) ;
   // --- Observable ---
   //RooRealVar mes("mes","m_{ES} (GeV)",5.20,5.30);

   // --- Parameters ---
   //RooRealVar sigmean("sigmean","B^{#pm} mass",5.28,5.20,5.30);
   //RooRealVar sigwidth("sigwidth","B^{#pm} width",0.0027,0.001,1.);

   // --- Build Gaussian PDF ---
   //RooGaussian signalModel("signal","signal PDF",mes,sigmean,sigwidth);

   // --- Build Argus background PDF ---
   //RooRealVar argpar("argpar","argus shape parameter",-20.0,-100.,-1.);
   //RooArgusBG background("background","Argus PDF",mes,RooConst(5.291),argpar);

   // --- Construct signal+background PDF ---
   //RooRealVar nsig("nsig","#signal events",200,0.,10000);
   //RooRealVar nbkg("nbkg","#background events",800,0.,10000);
   //RooAddPdf model("model","g+a",RooArgList(signalModel,background),RooArgList(nsig,nbkg));

   //We can now use this p.d.f. to generate an unbinned toy dataset, fit the p.d.f to that dataset using an unbinned maximum likelihood fit
   //and visualise the data with the p.d.f overlaid.

   // --- Generate a toyMC sample from composite PDF ---
   RooRealVar ZZMass("ZZMass","ZZMass",100,200) ;
	RooDataSet data("data","dataset with ZZMass",fChain,ZZMass) ;

   // --- Perform extended ML fit of composite PDF to toy data ---
   gauss.fitTo(data);

   // --- Plot toy data and composite PDF overlaid ---
   RooPlot* mesframe = ZZMass.frame();
   data.plotOn(mesframe);
   gauss.plotOn(mesframe);
   //model.plotOn(mesframe, Components(background), LineStyle(ELineStyle::kDashed));

   mesframe->Draw();
   c1->SaveAs("test.pdf");
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
