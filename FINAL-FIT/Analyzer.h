//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Jul  3 12:44:12 2020 by ROOT version 6.20/06
// from TTree candTree/Event Summary
// found on file: /home/public/data/Data_Run2/ZZ4lAnalysis.root
//////////////////////////////////////////////////////////

#ifndef Analyzer_h
#define Analyzer_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "vector"
#include "vector"
#include "vector"

using namespace std;

class Analyzer {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           RunNumber;
   Long64_t        EventNumber;
   Int_t           LumiNumber;
   Short_t         NRecoMu;
   Short_t         NRecoEle;
   Short_t         Nvtx;
   Short_t         NObsInt;
   Float_t         NTrueInt;
   Float_t         GenMET;
   Float_t         GenMETPhi;
   Float_t         PFMET;
   Float_t         PFMET_jesUp;
   Float_t         PFMET_jesDn;
   Float_t         PFMETPhi;
   Float_t         PFMETPhi_jesUp;
   Float_t         PFMETPhi_jesDn;
   Float_t         PFMET_corrected;
   Float_t         PFMET_corrected_jesUp;
   Float_t         PFMET_corrected_jesDn;
   Float_t         PFMET_corrected_jerUp;
   Float_t         PFMET_corrected_jerDn;
   Float_t         PFMET_corrected_puUp;
   Float_t         PFMET_corrected_puDn;
   Float_t         PFMET_corrected_metUp;
   Float_t         PFMET_corrected_metDn;
   Float_t         PFMETPhi_corrected;
   Float_t         PFMETPhi_corrected_jesUp;
   Float_t         PFMETPhi_corrected_jesDn;
   Float_t         PFMETPhi_corrected_jerUp;
   Float_t         PFMETPhi_corrected_jerDn;
   Float_t         PFMETPhi_corrected_puUp;
   Float_t         PFMETPhi_corrected_puDn;
   Float_t         PFMETPhi_corrected_metUp;
   Float_t         PFMETPhi_corrected_metDn;
   Short_t         nCleanedJets;
   Short_t         nCleanedJetsPt30;
   Short_t         nCleanedJetsPt30_jesUp;
   Short_t         nCleanedJetsPt30_jesDn;
   Short_t         nCleanedJetsPt30_jerUp;
   Short_t         nCleanedJetsPt30_jerDn;
   Short_t         nCleanedJetsPt30BTagged;
   Short_t         nCleanedJetsPt30BTagged_bTagSF;
   Short_t         nCleanedJetsPt30BTagged_bTagSF_jesUp;
   Short_t         nCleanedJetsPt30BTagged_bTagSF_jesDn;
   Short_t         nCleanedJetsPt30BTagged_bTagSF_jerUp;
   Short_t         nCleanedJetsPt30BTagged_bTagSF_jerDn;
   Short_t         nCleanedJetsPt30BTagged_bTagSFUp;
   Short_t         nCleanedJetsPt30BTagged_bTagSFDn;
   Short_t         trigWord;
   Short_t         evtPassMETFilter;
   Float_t         ZZMass;
   Float_t         ZZMassErr;
   Float_t         ZZMassErrCorr;
   Float_t         ZZMassPreFSR;
   Short_t         ZZsel;
   Float_t         ZZPt;
   Float_t         ZZEta;
   Float_t         ZZPhi;
   Float_t         ZZjjPt;
   Int_t           CRflag;
   Float_t         Z1Mass;
   Float_t         Z1Pt;
   Short_t         Z1Flav;
   Float_t         ZZMassRefit;
   Float_t         ZZMassRefitErr;
   Float_t         ZZMassUnrefitErr;
   Float_t         Z2Mass;
   Float_t         Z2Pt;
   Short_t         Z2Flav;
   Float_t         costhetastar;
   Float_t         helphi;
   Float_t         helcosthetaZ1;
   Float_t         helcosthetaZ2;
   Float_t         phistarZ1;
   Float_t         phistarZ2;
   Float_t         xi;
   Float_t         xistar;
   vector<float>   *LepPt;
   vector<float>   *LepEta;
   vector<float>   *LepPhi;
   vector<float>   *LepSCEta;
   vector<short>   *LepLepId;
   vector<float>   *LepSIP;
   vector<float>   *Lepdxy;
   vector<float>   *Lepdz;
   vector<float>   *LepTime;
   vector<bool>    *LepisID;
   vector<short>   *LepisLoose;
   vector<float>   *LepBDT;
   vector<bool>    *LepisCrack;
   vector<char>    *LepMissingHit;
   vector<float>   *LepChargedHadIso;
   vector<float>   *LepNeutralHadIso;
   vector<float>   *LepPhotonIso;
   vector<float>   *LepPUIsoComponent;
   vector<float>   *LepCombRelIsoPF;
   vector<float>   *LepSF;
   vector<float>   *LepSF_Unc;
   vector<float>   *LepScale_Total_Up;
   vector<float>   *LepScale_Total_Dn;
   vector<float>   *LepScale_Stat_Up;
   vector<float>   *LepScale_Stat_Dn;
   vector<float>   *LepScale_Syst_Up;
   vector<float>   *LepScale_Syst_Dn;
   vector<float>   *LepScale_Gain_Up;
   vector<float>   *LepScale_Gain_Dn;
   vector<float>   *LepSigma_Total_Up;
   vector<float>   *LepSigma_Total_Dn;
   vector<float>   *LepSigma_Rho_Up;
   vector<float>   *LepSigma_Rho_Dn;
   vector<float>   *LepSigma_Phi_Up;
   vector<float>   *LepSigma_Phi_Dn;
   vector<float>   *fsrPt;
   vector<float>   *fsrEta;
   vector<float>   *fsrPhi;
   vector<short>   *fsrLept;
   Bool_t          passIsoPreFSR;
   vector<float>   *JetPt;
   vector<float>   *JetEta;
   vector<float>   *JetPhi;
   vector<float>   *JetMass;
   vector<float>   *JetBTagger;
   vector<float>   *JetIsBtagged;
   vector<float>   *JetIsBtaggedWithSF;
   vector<float>   *JetIsBtaggedWithSFUp;
   vector<float>   *JetIsBtaggedWithSFDn;
   vector<float>   *JetQGLikelihood;
   vector<float>   *JetAxis2;
   vector<float>   *JetMult;
   vector<float>   *JetPtD;
   vector<float>   *JetSigma;
   vector<short>   *JetHadronFlavour;
   vector<short>   *JetPartonFlavour;
   vector<float>   *JetRawPt;
   vector<float>   *JetPtJEC_noJER;
   vector<float>   *JetPt_JESUp;
   vector<float>   *JetPt_JESDown;
   vector<float>   *JetPt_JERUp;
   vector<float>   *JetPt_JERDown;
   vector<short>   *JetID;
   vector<short>   *JetPUID;
   vector<float>   *JetPUValue;
   Float_t         DiJetMass;
   Float_t         DiJetDEta;
   Float_t         DiJetFisher;
   vector<float>   *PhotonPt;
   vector<float>   *PhotonEta;
   vector<float>   *PhotonPhi;
   vector<bool>    *PhotonIsCutBasedLooseID;
   Short_t         nExtraLep;
   Short_t         nExtraZ;
   vector<float>   *ExtraLepPt;
   vector<float>   *ExtraLepEta;
   vector<float>   *ExtraLepPhi;
   vector<short>   *ExtraLepLepId;
   Float_t         ZXFakeweight;
   Float_t         pConst_GG_SIG_ghg2_1_ghz1_1_JHUGen;
   Float_t         p_GG_SIG_ghg2_1_ghz1_1_JHUGen;
   Float_t         p_GG_SIG_ghg2_1_ghz1prime2_1E4_JHUGen;
   Float_t         p_GG_SIG_ghg2_1_ghz2_1_JHUGen;
   Float_t         p_GG_SIG_ghg2_1_ghz4_1_JHUGen;
   Float_t         p_GG_SIG_ghg2_1_ghza1prime2_1E4_JHUGen;
   Float_t         p_GG_SIG_ghg2_1_ghza2_1_JHUGen;
   Float_t         p_GG_SIG_ghg2_1_ghza4_1_JHUGen;
   Float_t         p_GG_SIG_ghg2_1_gha2_1_JHUGen;
   Float_t         p_GG_SIG_ghg2_1_gha4_1_JHUGen;
   Float_t         p_GG_SIG_ghg2_1_ghz1_1_ghz1prime2_1E4_JHUGen;
   Float_t         p_GG_SIG_ghg2_1_ghz1_1_ghz2_1_JHUGen;
   Float_t         p_GG_SIG_ghg2_1_ghz1_1_ghz2_i_JHUGen;
   Float_t         p_GG_SIG_ghg2_1_ghz1_1_ghz4_1_JHUGen;
   Float_t         p_GG_SIG_ghg2_1_ghz1_1_ghz4_i_JHUGen;
   Float_t         p_GG_SIG_ghg2_1_ghz1_1_ghza1prime2_1E4_JHUGen;
   Float_t         p_GG_SIG_ghg2_1_ghz1_1_ghza1prime2_1E4i_JHUGen;
   Float_t         p_GG_SIG_ghg2_1_ghz1_1_ghza2_1_JHUGen;
   Float_t         p_GG_SIG_ghg2_1_ghz1_1_ghza4_1_JHUGen;
   Float_t         p_GG_SIG_ghg2_1_ghz1_1_gha2_1_JHUGen;
   Float_t         p_GG_SIG_ghg2_1_ghz1_1_gha4_1_JHUGen;
   Float_t         p_GG_SIG_ghg2_1_ghz1prime2_1E4_ghz2_1_JHUGen;
   Float_t         p_GG_SIG_ghg2_1_ghz1prime2_1E4_ghz4_1_JHUGen;
   Float_t         p_GG_SIG_ghg2_1_ghz1prime2_1E4_ghza1prime2_1E4_JHUGen;
   Float_t         p_GG_SIG_ghg2_1_ghz2_1_ghz4_1_JHUGen;
   Float_t         p_GG_SIG_ghg2_1_ghz2_1_ghza1prime2_1E4_JHUGen;
   Float_t         p_GG_SIG_ghg2_1_ghz4_1_ghza1prime2_1E4_JHUGen;
   Float_t         pAux_JVBF_SIG_ghv1_1_JHUGen_JECNominal;
   Float_t         p_JVBF_SIG_ghv1_1_JHUGen_JECNominal;
   Float_t         pConst_JQCD_SIG_ghg2_1_JHUGen_JECNominal;
   Float_t         p_JQCD_SIG_ghg2_1_JHUGen_JECNominal;
   Float_t         pConst_JJVBF_SIG_ghv1_1_JHUGen_JECNominal;
   Float_t         p_JJVBF_SIG_ghv1_1_JHUGen_JECNominal;
   Float_t         p_JJVBF_SIG_ghv1prime2_1E4_JHUGen_JECNominal;
   Float_t         p_JJVBF_SIG_ghv2_1_JHUGen_JECNominal;
   Float_t         p_JJVBF_SIG_ghv4_1_JHUGen_JECNominal;
   Float_t         p_JJVBF_SIG_ghza1prime2_1E4_JHUGen_JECNominal;
   Float_t         p_JJVBF_SIG_ghza2_1_JHUGen_JECNominal;
   Float_t         p_JJVBF_SIG_ghza4_1_JHUGen_JECNominal;
   Float_t         p_JJVBF_SIG_gha2_1_JHUGen_JECNominal;
   Float_t         p_JJVBF_SIG_gha4_1_JHUGen_JECNominal;
   Float_t         p_JJVBF_SIG_ghv1_1_ghv1prime2_1E4_JHUGen_JECNominal;
   Float_t         p_JJVBF_SIG_ghv1_1_ghv2_1_JHUGen_JECNominal;
   Float_t         p_JJVBF_SIG_ghv1_1_ghv4_1_JHUGen_JECNominal;
   Float_t         p_JJVBF_SIG_ghv1_1_ghza1prime2_1E4_JHUGen_JECNominal;
   Float_t         p_JJVBF_SIG_ghv1_1_ghza2_1_JHUGen_JECNominal;
   Float_t         p_JJVBF_SIG_ghv1_1_ghza4_1_JHUGen_JECNominal;
   Float_t         p_JJVBF_SIG_ghv1_1_gha2_1_JHUGen_JECNominal;
   Float_t         p_JJVBF_SIG_ghv1_1_gha4_1_JHUGen_JECNominal;
   Float_t         pConst_JJQCD_SIG_ghg2_1_JHUGen_JECNominal;
   Float_t         p_JJQCD_SIG_ghg2_1_JHUGen_JECNominal;
   Float_t         p_JJQCD_SIG_ghg4_1_JHUGen_JECNominal;
   Float_t         p_JJQCD_SIG_ghg2_1_ghg4_1_JHUGen_JECNominal;
   Float_t         pConst_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JECNominal;
   Float_t         p_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JECNominal;
   Float_t         p_JJQCD_InitialQQ_SIG_ghg4_1_JHUGen_JECNominal;
   Float_t         p_JJQCD_InitialQQ_SIG_ghg2_1_ghg4_1_JHUGen_JECNominal;
   Float_t         pConst_HadZH_SIG_ghz1_1_JHUGen_JECNominal;
   Float_t         p_HadZH_SIG_ghz1_1_JHUGen_JECNominal;
   Float_t         p_HadZH_SIG_ghz1prime2_1E4_JHUGen_JECNominal;
   Float_t         p_HadZH_SIG_ghz2_1_JHUGen_JECNominal;
   Float_t         p_HadZH_SIG_ghz4_1_JHUGen_JECNominal;
   Float_t         p_HadZH_SIG_ghza1prime2_1E4_JHUGen_JECNominal;
   Float_t         p_HadZH_SIG_ghza2_1_JHUGen_JECNominal;
   Float_t         p_HadZH_SIG_ghza4_1_JHUGen_JECNominal;
   Float_t         p_HadZH_SIG_gha2_1_JHUGen_JECNominal;
   Float_t         p_HadZH_SIG_gha4_1_JHUGen_JECNominal;
   Float_t         p_HadZH_SIG_ghz1_1_ghz1prime2_1E4_JHUGen_JECNominal;
   Float_t         p_HadZH_SIG_ghz1_1_ghz2_1_JHUGen_JECNominal;
   Float_t         p_HadZH_SIG_ghz1_1_ghz4_1_JHUGen_JECNominal;
   Float_t         p_HadZH_SIG_ghz1_1_ghza1prime2_1E4_JHUGen_JECNominal;
   Float_t         p_HadZH_SIG_ghz1_1_ghza2_1_JHUGen_JECNominal;
   Float_t         p_HadZH_SIG_ghz1_1_ghza4_1_JHUGen_JECNominal;
   Float_t         p_HadZH_SIG_ghz1_1_gha2_1_JHUGen_JECNominal;
   Float_t         p_HadZH_SIG_ghz1_1_gha4_1_JHUGen_JECNominal;
   Float_t         pConst_HadWH_SIG_ghw1_1_JHUGen_JECNominal;
   Float_t         p_HadWH_SIG_ghw1_1_JHUGen_JECNominal;
   Float_t         p_HadWH_SIG_ghw1prime2_1E4_JHUGen_JECNominal;
   Float_t         p_HadWH_SIG_ghw2_1_JHUGen_JECNominal;
   Float_t         p_HadWH_SIG_ghw4_1_JHUGen_JECNominal;
   Float_t         p_HadWH_SIG_ghw1_1_ghw1prime2_1E4_JHUGen_JECNominal;
   Float_t         p_HadWH_SIG_ghw1_1_ghw2_1_JHUGen_JECNominal;
   Float_t         p_HadWH_SIG_ghw1_1_ghw4_1_JHUGen_JECNominal;
   Float_t         p_ttHUndecayed_SIG_kappa_1_JHUGen_JECNominal;
   Float_t         p_ttHUndecayed_SIG_kappatilde_1_JHUGen_JECNominal;
   Float_t         p_ttHUndecayed_SIG_kappa_1_kappatilde_1_JHUGen_JECNominal;
   Float_t         p_bbH_SIG_kappa_1_JHUGen_JECNominal;
   Float_t         pAux_JVBF_SIG_ghv1_1_JHUGen_JESUp;
   Float_t         p_JVBF_SIG_ghv1_1_JHUGen_JESUp;
   Float_t         pConst_JQCD_SIG_ghg2_1_JHUGen_JESUp;
   Float_t         p_JQCD_SIG_ghg2_1_JHUGen_JESUp;
   Float_t         pConst_JJVBF_SIG_ghv1_1_JHUGen_JESUp;
   Float_t         p_JJVBF_SIG_ghv1_1_JHUGen_JESUp;
   Float_t         p_JJVBF_SIG_ghv1prime2_1E4_JHUGen_JESUp;
   Float_t         p_JJVBF_SIG_ghv2_1_JHUGen_JESUp;
   Float_t         p_JJVBF_SIG_ghv4_1_JHUGen_JESUp;
   Float_t         p_JJVBF_SIG_ghza1prime2_1E4_JHUGen_JESUp;
   Float_t         p_JJVBF_SIG_ghza2_1_JHUGen_JESUp;
   Float_t         p_JJVBF_SIG_ghza4_1_JHUGen_JESUp;
   Float_t         p_JJVBF_SIG_gha2_1_JHUGen_JESUp;
   Float_t         p_JJVBF_SIG_gha4_1_JHUGen_JESUp;
   Float_t         p_JJVBF_SIG_ghv1_1_ghv1prime2_1E4_JHUGen_JESUp;
   Float_t         p_JJVBF_SIG_ghv1_1_ghv2_1_JHUGen_JESUp;
   Float_t         p_JJVBF_SIG_ghv1_1_ghv4_1_JHUGen_JESUp;
   Float_t         p_JJVBF_SIG_ghv1_1_ghza1prime2_1E4_JHUGen_JESUp;
   Float_t         p_JJVBF_SIG_ghv1_1_ghza2_1_JHUGen_JESUp;
   Float_t         p_JJVBF_SIG_ghv1_1_ghza4_1_JHUGen_JESUp;
   Float_t         p_JJVBF_SIG_ghv1_1_gha2_1_JHUGen_JESUp;
   Float_t         p_JJVBF_SIG_ghv1_1_gha4_1_JHUGen_JESUp;
   Float_t         pConst_JJQCD_SIG_ghg2_1_JHUGen_JESUp;
   Float_t         p_JJQCD_SIG_ghg2_1_JHUGen_JESUp;
   Float_t         p_JJQCD_SIG_ghg4_1_JHUGen_JESUp;
   Float_t         p_JJQCD_SIG_ghg2_1_ghg4_1_JHUGen_JESUp;
   Float_t         pConst_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JESUp;
   Float_t         p_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JESUp;
   Float_t         p_JJQCD_InitialQQ_SIG_ghg4_1_JHUGen_JESUp;
   Float_t         p_JJQCD_InitialQQ_SIG_ghg2_1_ghg4_1_JHUGen_JESUp;
   Float_t         pConst_HadZH_SIG_ghz1_1_JHUGen_JESUp;
   Float_t         p_HadZH_SIG_ghz1_1_JHUGen_JESUp;
   Float_t         p_HadZH_SIG_ghz1prime2_1E4_JHUGen_JESUp;
   Float_t         p_HadZH_SIG_ghz2_1_JHUGen_JESUp;
   Float_t         p_HadZH_SIG_ghz4_1_JHUGen_JESUp;
   Float_t         p_HadZH_SIG_ghza1prime2_1E4_JHUGen_JESUp;
   Float_t         p_HadZH_SIG_ghza2_1_JHUGen_JESUp;
   Float_t         p_HadZH_SIG_ghza4_1_JHUGen_JESUp;
   Float_t         p_HadZH_SIG_gha2_1_JHUGen_JESUp;
   Float_t         p_HadZH_SIG_gha4_1_JHUGen_JESUp;
   Float_t         p_HadZH_SIG_ghz1_1_ghz1prime2_1E4_JHUGen_JESUp;
   Float_t         p_HadZH_SIG_ghz1_1_ghz2_1_JHUGen_JESUp;
   Float_t         p_HadZH_SIG_ghz1_1_ghz4_1_JHUGen_JESUp;
   Float_t         p_HadZH_SIG_ghz1_1_ghza1prime2_1E4_JHUGen_JESUp;
   Float_t         p_HadZH_SIG_ghz1_1_ghza2_1_JHUGen_JESUp;
   Float_t         p_HadZH_SIG_ghz1_1_ghza4_1_JHUGen_JESUp;
   Float_t         p_HadZH_SIG_ghz1_1_gha2_1_JHUGen_JESUp;
   Float_t         p_HadZH_SIG_ghz1_1_gha4_1_JHUGen_JESUp;
   Float_t         pConst_HadWH_SIG_ghw1_1_JHUGen_JESUp;
   Float_t         p_HadWH_SIG_ghw1_1_JHUGen_JESUp;
   Float_t         p_HadWH_SIG_ghw1prime2_1E4_JHUGen_JESUp;
   Float_t         p_HadWH_SIG_ghw2_1_JHUGen_JESUp;
   Float_t         p_HadWH_SIG_ghw4_1_JHUGen_JESUp;
   Float_t         p_HadWH_SIG_ghw1_1_ghw1prime2_1E4_JHUGen_JESUp;
   Float_t         p_HadWH_SIG_ghw1_1_ghw2_1_JHUGen_JESUp;
   Float_t         p_HadWH_SIG_ghw1_1_ghw4_1_JHUGen_JESUp;
   Float_t         p_ttHUndecayed_SIG_kappa_1_JHUGen_JESUp;
   Float_t         p_ttHUndecayed_SIG_kappatilde_1_JHUGen_JESUp;
   Float_t         p_ttHUndecayed_SIG_kappa_1_kappatilde_1_JHUGen_JESUp;
   Float_t         p_bbH_SIG_kappa_1_JHUGen_JESUp;
   Float_t         pAux_JVBF_SIG_ghv1_1_JHUGen_JESDn;
   Float_t         p_JVBF_SIG_ghv1_1_JHUGen_JESDn;
   Float_t         pConst_JQCD_SIG_ghg2_1_JHUGen_JESDn;
   Float_t         p_JQCD_SIG_ghg2_1_JHUGen_JESDn;
   Float_t         pConst_JJVBF_SIG_ghv1_1_JHUGen_JESDn;
   Float_t         p_JJVBF_SIG_ghv1_1_JHUGen_JESDn;
   Float_t         p_JJVBF_SIG_ghv1prime2_1E4_JHUGen_JESDn;
   Float_t         p_JJVBF_SIG_ghv2_1_JHUGen_JESDn;
   Float_t         p_JJVBF_SIG_ghv4_1_JHUGen_JESDn;
   Float_t         p_JJVBF_SIG_ghza1prime2_1E4_JHUGen_JESDn;
   Float_t         p_JJVBF_SIG_ghza2_1_JHUGen_JESDn;
   Float_t         p_JJVBF_SIG_ghza4_1_JHUGen_JESDn;
   Float_t         p_JJVBF_SIG_gha2_1_JHUGen_JESDn;
   Float_t         p_JJVBF_SIG_gha4_1_JHUGen_JESDn;
   Float_t         p_JJVBF_SIG_ghv1_1_ghv1prime2_1E4_JHUGen_JESDn;
   Float_t         p_JJVBF_SIG_ghv1_1_ghv2_1_JHUGen_JESDn;
   Float_t         p_JJVBF_SIG_ghv1_1_ghv4_1_JHUGen_JESDn;
   Float_t         p_JJVBF_SIG_ghv1_1_ghza1prime2_1E4_JHUGen_JESDn;
   Float_t         p_JJVBF_SIG_ghv1_1_ghza2_1_JHUGen_JESDn;
   Float_t         p_JJVBF_SIG_ghv1_1_ghza4_1_JHUGen_JESDn;
   Float_t         p_JJVBF_SIG_ghv1_1_gha2_1_JHUGen_JESDn;
   Float_t         p_JJVBF_SIG_ghv1_1_gha4_1_JHUGen_JESDn;
   Float_t         pConst_JJQCD_SIG_ghg2_1_JHUGen_JESDn;
   Float_t         p_JJQCD_SIG_ghg2_1_JHUGen_JESDn;
   Float_t         p_JJQCD_SIG_ghg4_1_JHUGen_JESDn;
   Float_t         p_JJQCD_SIG_ghg2_1_ghg4_1_JHUGen_JESDn;
   Float_t         pConst_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JESDn;
   Float_t         p_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JESDn;
   Float_t         p_JJQCD_InitialQQ_SIG_ghg4_1_JHUGen_JESDn;
   Float_t         p_JJQCD_InitialQQ_SIG_ghg2_1_ghg4_1_JHUGen_JESDn;
   Float_t         pConst_HadZH_SIG_ghz1_1_JHUGen_JESDn;
   Float_t         p_HadZH_SIG_ghz1_1_JHUGen_JESDn;
   Float_t         p_HadZH_SIG_ghz1prime2_1E4_JHUGen_JESDn;
   Float_t         p_HadZH_SIG_ghz2_1_JHUGen_JESDn;
   Float_t         p_HadZH_SIG_ghz4_1_JHUGen_JESDn;
   Float_t         p_HadZH_SIG_ghza1prime2_1E4_JHUGen_JESDn;
   Float_t         p_HadZH_SIG_ghza2_1_JHUGen_JESDn;
   Float_t         p_HadZH_SIG_ghza4_1_JHUGen_JESDn;
   Float_t         p_HadZH_SIG_gha2_1_JHUGen_JESDn;
   Float_t         p_HadZH_SIG_gha4_1_JHUGen_JESDn;
   Float_t         p_HadZH_SIG_ghz1_1_ghz1prime2_1E4_JHUGen_JESDn;
   Float_t         p_HadZH_SIG_ghz1_1_ghz2_1_JHUGen_JESDn;
   Float_t         p_HadZH_SIG_ghz1_1_ghz4_1_JHUGen_JESDn;
   Float_t         p_HadZH_SIG_ghz1_1_ghza1prime2_1E4_JHUGen_JESDn;
   Float_t         p_HadZH_SIG_ghz1_1_ghza2_1_JHUGen_JESDn;
   Float_t         p_HadZH_SIG_ghz1_1_ghza4_1_JHUGen_JESDn;
   Float_t         p_HadZH_SIG_ghz1_1_gha2_1_JHUGen_JESDn;
   Float_t         p_HadZH_SIG_ghz1_1_gha4_1_JHUGen_JESDn;
   Float_t         pConst_HadWH_SIG_ghw1_1_JHUGen_JESDn;
   Float_t         p_HadWH_SIG_ghw1_1_JHUGen_JESDn;
   Float_t         p_HadWH_SIG_ghw1prime2_1E4_JHUGen_JESDn;
   Float_t         p_HadWH_SIG_ghw2_1_JHUGen_JESDn;
   Float_t         p_HadWH_SIG_ghw4_1_JHUGen_JESDn;
   Float_t         p_HadWH_SIG_ghw1_1_ghw1prime2_1E4_JHUGen_JESDn;
   Float_t         p_HadWH_SIG_ghw1_1_ghw2_1_JHUGen_JESDn;
   Float_t         p_HadWH_SIG_ghw1_1_ghw4_1_JHUGen_JESDn;
   Float_t         p_ttHUndecayed_SIG_kappa_1_JHUGen_JESDn;
   Float_t         p_ttHUndecayed_SIG_kappatilde_1_JHUGen_JESDn;
   Float_t         p_ttHUndecayed_SIG_kappa_1_kappatilde_1_JHUGen_JESDn;
   Float_t         p_bbH_SIG_kappa_1_JHUGen_JESDn;
   Float_t         pAux_JVBF_SIG_ghv1_1_JHUGen_JERUp;
   Float_t         p_JVBF_SIG_ghv1_1_JHUGen_JERUp;
   Float_t         pConst_JQCD_SIG_ghg2_1_JHUGen_JERUp;
   Float_t         p_JQCD_SIG_ghg2_1_JHUGen_JERUp;
   Float_t         pConst_JJVBF_SIG_ghv1_1_JHUGen_JERUp;
   Float_t         p_JJVBF_SIG_ghv1_1_JHUGen_JERUp;
   Float_t         p_JJVBF_SIG_ghv1prime2_1E4_JHUGen_JERUp;
   Float_t         p_JJVBF_SIG_ghv2_1_JHUGen_JERUp;
   Float_t         p_JJVBF_SIG_ghv4_1_JHUGen_JERUp;
   Float_t         p_JJVBF_SIG_ghza1prime2_1E4_JHUGen_JERUp;
   Float_t         p_JJVBF_SIG_ghza2_1_JHUGen_JERUp;
   Float_t         p_JJVBF_SIG_ghza4_1_JHUGen_JERUp;
   Float_t         p_JJVBF_SIG_gha2_1_JHUGen_JERUp;
   Float_t         p_JJVBF_SIG_gha4_1_JHUGen_JERUp;
   Float_t         p_JJVBF_SIG_ghv1_1_ghv1prime2_1E4_JHUGen_JERUp;
   Float_t         p_JJVBF_SIG_ghv1_1_ghv2_1_JHUGen_JERUp;
   Float_t         p_JJVBF_SIG_ghv1_1_ghv4_1_JHUGen_JERUp;
   Float_t         p_JJVBF_SIG_ghv1_1_ghza1prime2_1E4_JHUGen_JERUp;
   Float_t         p_JJVBF_SIG_ghv1_1_ghza2_1_JHUGen_JERUp;
   Float_t         p_JJVBF_SIG_ghv1_1_ghza4_1_JHUGen_JERUp;
   Float_t         p_JJVBF_SIG_ghv1_1_gha2_1_JHUGen_JERUp;
   Float_t         p_JJVBF_SIG_ghv1_1_gha4_1_JHUGen_JERUp;
   Float_t         pConst_JJQCD_SIG_ghg2_1_JHUGen_JERUp;
   Float_t         p_JJQCD_SIG_ghg2_1_JHUGen_JERUp;
   Float_t         p_JJQCD_SIG_ghg4_1_JHUGen_JERUp;
   Float_t         p_JJQCD_SIG_ghg2_1_ghg4_1_JHUGen_JERUp;
   Float_t         pConst_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JERUp;
   Float_t         p_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JERUp;
   Float_t         p_JJQCD_InitialQQ_SIG_ghg4_1_JHUGen_JERUp;
   Float_t         p_JJQCD_InitialQQ_SIG_ghg2_1_ghg4_1_JHUGen_JERUp;
   Float_t         pConst_HadZH_SIG_ghz1_1_JHUGen_JERUp;
   Float_t         p_HadZH_SIG_ghz1_1_JHUGen_JERUp;
   Float_t         p_HadZH_SIG_ghz1prime2_1E4_JHUGen_JERUp;
   Float_t         p_HadZH_SIG_ghz2_1_JHUGen_JERUp;
   Float_t         p_HadZH_SIG_ghz4_1_JHUGen_JERUp;
   Float_t         p_HadZH_SIG_ghza1prime2_1E4_JHUGen_JERUp;
   Float_t         p_HadZH_SIG_ghza2_1_JHUGen_JERUp;
   Float_t         p_HadZH_SIG_ghza4_1_JHUGen_JERUp;
   Float_t         p_HadZH_SIG_gha2_1_JHUGen_JERUp;
   Float_t         p_HadZH_SIG_gha4_1_JHUGen_JERUp;
   Float_t         p_HadZH_SIG_ghz1_1_ghz1prime2_1E4_JHUGen_JERUp;
   Float_t         p_HadZH_SIG_ghz1_1_ghz2_1_JHUGen_JERUp;
   Float_t         p_HadZH_SIG_ghz1_1_ghz4_1_JHUGen_JERUp;
   Float_t         p_HadZH_SIG_ghz1_1_ghza1prime2_1E4_JHUGen_JERUp;
   Float_t         p_HadZH_SIG_ghz1_1_ghza2_1_JHUGen_JERUp;
   Float_t         p_HadZH_SIG_ghz1_1_ghza4_1_JHUGen_JERUp;
   Float_t         p_HadZH_SIG_ghz1_1_gha2_1_JHUGen_JERUp;
   Float_t         p_HadZH_SIG_ghz1_1_gha4_1_JHUGen_JERUp;
   Float_t         pConst_HadWH_SIG_ghw1_1_JHUGen_JERUp;
   Float_t         p_HadWH_SIG_ghw1_1_JHUGen_JERUp;
   Float_t         p_HadWH_SIG_ghw1prime2_1E4_JHUGen_JERUp;
   Float_t         p_HadWH_SIG_ghw2_1_JHUGen_JERUp;
   Float_t         p_HadWH_SIG_ghw4_1_JHUGen_JERUp;
   Float_t         p_HadWH_SIG_ghw1_1_ghw1prime2_1E4_JHUGen_JERUp;
   Float_t         p_HadWH_SIG_ghw1_1_ghw2_1_JHUGen_JERUp;
   Float_t         p_HadWH_SIG_ghw1_1_ghw4_1_JHUGen_JERUp;
   Float_t         p_ttHUndecayed_SIG_kappa_1_JHUGen_JERUp;
   Float_t         p_ttHUndecayed_SIG_kappatilde_1_JHUGen_JERUp;
   Float_t         p_ttHUndecayed_SIG_kappa_1_kappatilde_1_JHUGen_JERUp;
   Float_t         p_bbH_SIG_kappa_1_JHUGen_JERUp;
   Float_t         pAux_JVBF_SIG_ghv1_1_JHUGen_JERDn;
   Float_t         p_JVBF_SIG_ghv1_1_JHUGen_JERDn;
   Float_t         pConst_JQCD_SIG_ghg2_1_JHUGen_JERDn;
   Float_t         p_JQCD_SIG_ghg2_1_JHUGen_JERDn;
   Float_t         pConst_JJVBF_SIG_ghv1_1_JHUGen_JERDn;
   Float_t         p_JJVBF_SIG_ghv1_1_JHUGen_JERDn;
   Float_t         p_JJVBF_SIG_ghv1prime2_1E4_JHUGen_JERDn;
   Float_t         p_JJVBF_SIG_ghv2_1_JHUGen_JERDn;
   Float_t         p_JJVBF_SIG_ghv4_1_JHUGen_JERDn;
   Float_t         p_JJVBF_SIG_ghza1prime2_1E4_JHUGen_JERDn;
   Float_t         p_JJVBF_SIG_ghza2_1_JHUGen_JERDn;
   Float_t         p_JJVBF_SIG_ghza4_1_JHUGen_JERDn;
   Float_t         p_JJVBF_SIG_gha2_1_JHUGen_JERDn;
   Float_t         p_JJVBF_SIG_gha4_1_JHUGen_JERDn;
   Float_t         p_JJVBF_SIG_ghv1_1_ghv1prime2_1E4_JHUGen_JERDn;
   Float_t         p_JJVBF_SIG_ghv1_1_ghv2_1_JHUGen_JERDn;
   Float_t         p_JJVBF_SIG_ghv1_1_ghv4_1_JHUGen_JERDn;
   Float_t         p_JJVBF_SIG_ghv1_1_ghza1prime2_1E4_JHUGen_JERDn;
   Float_t         p_JJVBF_SIG_ghv1_1_ghza2_1_JHUGen_JERDn;
   Float_t         p_JJVBF_SIG_ghv1_1_ghza4_1_JHUGen_JERDn;
   Float_t         p_JJVBF_SIG_ghv1_1_gha2_1_JHUGen_JERDn;
   Float_t         p_JJVBF_SIG_ghv1_1_gha4_1_JHUGen_JERDn;
   Float_t         pConst_JJQCD_SIG_ghg2_1_JHUGen_JERDn;
   Float_t         p_JJQCD_SIG_ghg2_1_JHUGen_JERDn;
   Float_t         p_JJQCD_SIG_ghg4_1_JHUGen_JERDn;
   Float_t         p_JJQCD_SIG_ghg2_1_ghg4_1_JHUGen_JERDn;
   Float_t         pConst_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JERDn;
   Float_t         p_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JERDn;
   Float_t         p_JJQCD_InitialQQ_SIG_ghg4_1_JHUGen_JERDn;
   Float_t         p_JJQCD_InitialQQ_SIG_ghg2_1_ghg4_1_JHUGen_JERDn;
   Float_t         pConst_HadZH_SIG_ghz1_1_JHUGen_JERDn;
   Float_t         p_HadZH_SIG_ghz1_1_JHUGen_JERDn;
   Float_t         p_HadZH_SIG_ghz1prime2_1E4_JHUGen_JERDn;
   Float_t         p_HadZH_SIG_ghz2_1_JHUGen_JERDn;
   Float_t         p_HadZH_SIG_ghz4_1_JHUGen_JERDn;
   Float_t         p_HadZH_SIG_ghza1prime2_1E4_JHUGen_JERDn;
   Float_t         p_HadZH_SIG_ghza2_1_JHUGen_JERDn;
   Float_t         p_HadZH_SIG_ghza4_1_JHUGen_JERDn;
   Float_t         p_HadZH_SIG_gha2_1_JHUGen_JERDn;
   Float_t         p_HadZH_SIG_gha4_1_JHUGen_JERDn;
   Float_t         p_HadZH_SIG_ghz1_1_ghz1prime2_1E4_JHUGen_JERDn;
   Float_t         p_HadZH_SIG_ghz1_1_ghz2_1_JHUGen_JERDn;
   Float_t         p_HadZH_SIG_ghz1_1_ghz4_1_JHUGen_JERDn;
   Float_t         p_HadZH_SIG_ghz1_1_ghza1prime2_1E4_JHUGen_JERDn;
   Float_t         p_HadZH_SIG_ghz1_1_ghza2_1_JHUGen_JERDn;
   Float_t         p_HadZH_SIG_ghz1_1_ghza4_1_JHUGen_JERDn;
   Float_t         p_HadZH_SIG_ghz1_1_gha2_1_JHUGen_JERDn;
   Float_t         p_HadZH_SIG_ghz1_1_gha4_1_JHUGen_JERDn;
   Float_t         pConst_HadWH_SIG_ghw1_1_JHUGen_JERDn;
   Float_t         p_HadWH_SIG_ghw1_1_JHUGen_JERDn;
   Float_t         p_HadWH_SIG_ghw1prime2_1E4_JHUGen_JERDn;
   Float_t         p_HadWH_SIG_ghw2_1_JHUGen_JERDn;
   Float_t         p_HadWH_SIG_ghw4_1_JHUGen_JERDn;
   Float_t         p_HadWH_SIG_ghw1_1_ghw1prime2_1E4_JHUGen_JERDn;
   Float_t         p_HadWH_SIG_ghw1_1_ghw2_1_JHUGen_JERDn;
   Float_t         p_HadWH_SIG_ghw1_1_ghw4_1_JHUGen_JERDn;
   Float_t         p_ttHUndecayed_SIG_kappa_1_JHUGen_JERDn;
   Float_t         p_ttHUndecayed_SIG_kappatilde_1_JHUGen_JERDn;
   Float_t         p_ttHUndecayed_SIG_kappa_1_kappatilde_1_JHUGen_JERDn;
   Float_t         p_bbH_SIG_kappa_1_JHUGen_JERDn;
   Float_t         p_LepZH_SIG_ghz1_1_JHUGen;
   Float_t         p_LepZH_SIG_ghz1prime2_1E4_JHUGen;
   Float_t         p_LepZH_SIG_ghz2_1_JHUGen;
   Float_t         p_LepZH_SIG_ghz4_1_JHUGen;
   Float_t         p_LepZH_SIG_ghza1prime2_1E4_JHUGen;
   Float_t         p_LepZH_SIG_ghza2_1_JHUGen;
   Float_t         p_LepZH_SIG_ghza4_1_JHUGen;
   Float_t         p_LepZH_SIG_gha2_1_JHUGen;
   Float_t         p_LepZH_SIG_gha4_1_JHUGen;
   Float_t         p_LepZH_SIG_ghz1_1_ghz1prime2_1E4_JHUGen;
   Float_t         p_LepZH_SIG_ghz1_1_ghz2_1_JHUGen;
   Float_t         p_LepZH_SIG_ghz1_1_ghz4_1_JHUGen;
   Float_t         p_LepZH_SIG_ghz1_1_ghza1prime2_1E4_JHUGen;
   Float_t         p_LepZH_SIG_ghz1_1_ghza2_1_JHUGen;
   Float_t         p_LepZH_SIG_ghz1_1_ghza4_1_JHUGen;
   Float_t         p_LepZH_SIG_ghz1_1_gha2_1_JHUGen;
   Float_t         p_LepZH_SIG_ghz1_1_gha4_1_JHUGen;
   Float_t         p_LepWH_SIG_ghw1_1_JHUGen;
   Float_t         p_LepWH_SIG_ghw1prime2_1E4_JHUGen;
   Float_t         p_LepWH_SIG_ghw2_1_JHUGen;
   Float_t         p_LepWH_SIG_ghw4_1_JHUGen;
   Float_t         p_LepWH_SIG_ghw1_1_ghw1prime2_1E4_JHUGen;
   Float_t         p_LepWH_SIG_ghw1_1_ghw2_1_JHUGen;
   Float_t         p_LepWH_SIG_ghw1_1_ghw4_1_JHUGen;
   Float_t         p_QQB_SIG_ZPqqLR_1_gZPz1_1_JHUGen;
   Float_t         p_QQB_SIG_ZPqqLR_1_gZPz2_1_JHUGen;
   Float_t         p_INDEPENDENT_SIG_gZPz1_1_JHUGen;
   Float_t         p_INDEPENDENT_SIG_gZPz2_1_JHUGen;
   Float_t         p_GG_SIG_gXg1_1_gXz1_1_JHUGen;
   Float_t         p_GG_SIG_gXg2_1_gXz2_1_JHUGen;
   Float_t         p_GG_SIG_gXg3_1_gXz3_1_JHUGen;
   Float_t         p_GG_SIG_gXg4_1_gXz4_1_JHUGen;
   Float_t         p_GG_SIG_gXg1_1_gXz5_1_JHUGen;
   Float_t         p_GG_SIG_gXg1_1_gXz1_1_gXz5_1_JHUGen;
   Float_t         p_GG_SIG_gXg1_1_gXz6_1_JHUGen;
   Float_t         p_GG_SIG_gXg1_1_gXz7_1_JHUGen;
   Float_t         p_GG_SIG_gXg5_1_gXz8_1_JHUGen;
   Float_t         p_GG_SIG_gXg5_1_gXz9_1_JHUGen;
   Float_t         p_GG_SIG_gXg5_1_gXz10_1_JHUGen;
   Float_t         p_QQB_SIG_XqqLR_1_gXz1_1_JHUGen;
   Float_t         p_QQB_SIG_XqqLR_1_gXz2_1_JHUGen;
   Float_t         p_QQB_SIG_XqqLR_1_gXz3_1_JHUGen;
   Float_t         p_QQB_SIG_XqqLR_1_gXz4_1_JHUGen;
   Float_t         p_QQB_SIG_XqqLR_1_gXz5_1_JHUGen;
   Float_t         p_QQB_SIG_XqqLR_1_gXz1_1_gXz5_1_JHUGen;
   Float_t         p_QQB_SIG_XqqLR_1_gXz6_1_JHUGen;
   Float_t         p_QQB_SIG_XqqLR_1_gXz7_1_JHUGen;
   Float_t         p_QQB_SIG_XqqLR_1_gXz8_1_JHUGen;
   Float_t         p_QQB_SIG_XqqLR_1_gXz9_1_JHUGen;
   Float_t         p_QQB_SIG_XqqLR_1_gXz10_1_JHUGen;
   Float_t         p_INDEPENDENT_SIG_gXz1_1_JHUGen;
   Float_t         p_INDEPENDENT_SIG_gXz2_1_JHUGen;
   Float_t         p_INDEPENDENT_SIG_gXz3_1_JHUGen;
   Float_t         p_INDEPENDENT_SIG_gXz4_1_JHUGen;
   Float_t         p_INDEPENDENT_SIG_gXz5_1_JHUGen;
   Float_t         p_INDEPENDENT_SIG_gXz1_1_gXz5_1_JHUGen;
   Float_t         p_INDEPENDENT_SIG_gXz6_1_JHUGen;
   Float_t         p_INDEPENDENT_SIG_gXz7_1_JHUGen;
   Float_t         p_INDEPENDENT_SIG_gXz8_1_JHUGen;
   Float_t         p_INDEPENDENT_SIG_gXz9_1_JHUGen;
   Float_t         p_INDEPENDENT_SIG_gXz10_1_JHUGen;
   Float_t         pConst_GG_SIG_kappaTopBot_1_ghz1_1_MCFM;
   Float_t         p_GG_SIG_kappaTopBot_1_ghz1_1_MCFM;
   Float_t         p_GG_BSI_kappaTopBot_1_ghz1_1_MCFM;
   Float_t         p_GG_BSI_kappaTopBot_1_ghz1_i_MCFM;
   Float_t         pConst_GG_BKG_MCFM;
   Float_t         p_GG_BKG_MCFM;
   Float_t         pConst_QQB_BKG_MCFM;
   Float_t         p_QQB_BKG_MCFM;
   Float_t         pConst_ZJJ_BKG_MCFM;
   Float_t         p_ZJJ_BKG_MCFM;
   Float_t         p_JJEW_SIG_ghv1_1_MCFM_JECNominal;
   Float_t         p_JJEW_BSI_ghv1_1_MCFM_JECNominal;
   Float_t         p_JJEW_BSI_ghv1_i_MCFM_JECNominal;
   Float_t         p_JJEW_BKG_MCFM_JECNominal;
   Float_t         pConst_JJVBF_S_SIG_ghv1_1_MCFM_JECNominal;
   Float_t         p_JJVBF_S_SIG_ghv1_1_MCFM_JECNominal;
   Float_t         p_JJVBF_S_BSI_ghv1_1_MCFM_JECNominal;
   Float_t         p_JJVBF_S_BSI_ghv1_i_MCFM_JECNominal;
   Float_t         p_JJVBF_SIG_ghv1_1_MCFM_JECNominal;
   Float_t         p_JJVBF_BSI_ghv1_1_MCFM_JECNominal;
   Float_t         p_JJVBF_BSI_ghv1_i_MCFM_JECNominal;
   Float_t         pConst_JJVBF_BKG_MCFM_JECNominal;
   Float_t         p_JJVBF_BKG_MCFM_JECNominal;
   Float_t         pConst_HadZH_S_SIG_ghz1_1_MCFM_JECNominal;
   Float_t         p_HadZH_S_SIG_ghz1_1_MCFM_JECNominal;
   Float_t         p_HadZH_S_BSI_ghz1_1_MCFM_JECNominal;
   Float_t         p_HadZH_S_BSI_ghz1_i_MCFM_JECNominal;
   Float_t         p_HadZH_SIG_ghz1_1_MCFM_JECNominal;
   Float_t         p_HadZH_BSI_ghz1_1_MCFM_JECNominal;
   Float_t         p_HadZH_BSI_ghz1_i_MCFM_JECNominal;
   Float_t         pConst_HadZH_BKG_MCFM_JECNominal;
   Float_t         p_HadZH_BKG_MCFM_JECNominal;
   Float_t         pConst_HadWH_S_SIG_ghw1_1_MCFM_JECNominal;
   Float_t         p_HadWH_S_SIG_ghw1_1_MCFM_JECNominal;
   Float_t         p_HadWH_S_BSI_ghw1_1_MCFM_JECNominal;
   Float_t         p_HadWH_S_BSI_ghw1_i_MCFM_JECNominal;
   Float_t         pConst_HadWH_BKG_MCFM_JECNominal;
   Float_t         p_HadWH_BKG_MCFM_JECNominal;
   Float_t         pConst_JJQCD_BKG_MCFM_JECNominal;
   Float_t         p_JJQCD_BKG_MCFM_JECNominal;
   Float_t         p_JJEW_SIG_ghv1_1_MCFM_JESUp;
   Float_t         p_JJEW_BSI_ghv1_1_MCFM_JESUp;
   Float_t         p_JJEW_BSI_ghv1_i_MCFM_JESUp;
   Float_t         p_JJEW_BKG_MCFM_JESUp;
   Float_t         pConst_JJVBF_S_SIG_ghv1_1_MCFM_JESUp;
   Float_t         p_JJVBF_S_SIG_ghv1_1_MCFM_JESUp;
   Float_t         p_JJVBF_S_BSI_ghv1_1_MCFM_JESUp;
   Float_t         p_JJVBF_S_BSI_ghv1_i_MCFM_JESUp;
   Float_t         p_JJVBF_SIG_ghv1_1_MCFM_JESUp;
   Float_t         p_JJVBF_BSI_ghv1_1_MCFM_JESUp;
   Float_t         p_JJVBF_BSI_ghv1_i_MCFM_JESUp;
   Float_t         pConst_JJVBF_BKG_MCFM_JESUp;
   Float_t         p_JJVBF_BKG_MCFM_JESUp;
   Float_t         pConst_HadZH_S_SIG_ghz1_1_MCFM_JESUp;
   Float_t         p_HadZH_S_SIG_ghz1_1_MCFM_JESUp;
   Float_t         p_HadZH_S_BSI_ghz1_1_MCFM_JESUp;
   Float_t         p_HadZH_S_BSI_ghz1_i_MCFM_JESUp;
   Float_t         p_HadZH_SIG_ghz1_1_MCFM_JESUp;
   Float_t         p_HadZH_BSI_ghz1_1_MCFM_JESUp;
   Float_t         p_HadZH_BSI_ghz1_i_MCFM_JESUp;
   Float_t         pConst_HadZH_BKG_MCFM_JESUp;
   Float_t         p_HadZH_BKG_MCFM_JESUp;
   Float_t         pConst_HadWH_S_SIG_ghw1_1_MCFM_JESUp;
   Float_t         p_HadWH_S_SIG_ghw1_1_MCFM_JESUp;
   Float_t         p_HadWH_S_BSI_ghw1_1_MCFM_JESUp;
   Float_t         p_HadWH_S_BSI_ghw1_i_MCFM_JESUp;
   Float_t         pConst_HadWH_BKG_MCFM_JESUp;
   Float_t         p_HadWH_BKG_MCFM_JESUp;
   Float_t         pConst_JJQCD_BKG_MCFM_JESUp;
   Float_t         p_JJQCD_BKG_MCFM_JESUp;
   Float_t         p_JJEW_SIG_ghv1_1_MCFM_JESDn;
   Float_t         p_JJEW_BSI_ghv1_1_MCFM_JESDn;
   Float_t         p_JJEW_BSI_ghv1_i_MCFM_JESDn;
   Float_t         p_JJEW_BKG_MCFM_JESDn;
   Float_t         pConst_JJVBF_S_SIG_ghv1_1_MCFM_JESDn;
   Float_t         p_JJVBF_S_SIG_ghv1_1_MCFM_JESDn;
   Float_t         p_JJVBF_S_BSI_ghv1_1_MCFM_JESDn;
   Float_t         p_JJVBF_S_BSI_ghv1_i_MCFM_JESDn;
   Float_t         p_JJVBF_SIG_ghv1_1_MCFM_JESDn;
   Float_t         p_JJVBF_BSI_ghv1_1_MCFM_JESDn;
   Float_t         p_JJVBF_BSI_ghv1_i_MCFM_JESDn;
   Float_t         pConst_JJVBF_BKG_MCFM_JESDn;
   Float_t         p_JJVBF_BKG_MCFM_JESDn;
   Float_t         pConst_HadZH_S_SIG_ghz1_1_MCFM_JESDn;
   Float_t         p_HadZH_S_SIG_ghz1_1_MCFM_JESDn;
   Float_t         p_HadZH_S_BSI_ghz1_1_MCFM_JESDn;
   Float_t         p_HadZH_S_BSI_ghz1_i_MCFM_JESDn;
   Float_t         p_HadZH_SIG_ghz1_1_MCFM_JESDn;
   Float_t         p_HadZH_BSI_ghz1_1_MCFM_JESDn;
   Float_t         p_HadZH_BSI_ghz1_i_MCFM_JESDn;
   Float_t         pConst_HadZH_BKG_MCFM_JESDn;
   Float_t         p_HadZH_BKG_MCFM_JESDn;
   Float_t         pConst_HadWH_S_SIG_ghw1_1_MCFM_JESDn;
   Float_t         p_HadWH_S_SIG_ghw1_1_MCFM_JESDn;
   Float_t         p_HadWH_S_BSI_ghw1_1_MCFM_JESDn;
   Float_t         p_HadWH_S_BSI_ghw1_i_MCFM_JESDn;
   Float_t         pConst_HadWH_BKG_MCFM_JESDn;
   Float_t         p_HadWH_BKG_MCFM_JESDn;
   Float_t         pConst_JJQCD_BKG_MCFM_JESDn;
   Float_t         p_JJQCD_BKG_MCFM_JESDn;
   Float_t         p_JJEW_SIG_ghv1_1_MCFM_JERUp;
   Float_t         p_JJEW_BSI_ghv1_1_MCFM_JERUp;
   Float_t         p_JJEW_BSI_ghv1_i_MCFM_JERUp;
   Float_t         p_JJEW_BKG_MCFM_JERUp;
   Float_t         pConst_JJVBF_S_SIG_ghv1_1_MCFM_JERUp;
   Float_t         p_JJVBF_S_SIG_ghv1_1_MCFM_JERUp;
   Float_t         p_JJVBF_S_BSI_ghv1_1_MCFM_JERUp;
   Float_t         p_JJVBF_S_BSI_ghv1_i_MCFM_JERUp;
   Float_t         p_JJVBF_SIG_ghv1_1_MCFM_JERUp;
   Float_t         p_JJVBF_BSI_ghv1_1_MCFM_JERUp;
   Float_t         p_JJVBF_BSI_ghv1_i_MCFM_JERUp;
   Float_t         pConst_JJVBF_BKG_MCFM_JERUp;
   Float_t         p_JJVBF_BKG_MCFM_JERUp;
   Float_t         pConst_HadZH_S_SIG_ghz1_1_MCFM_JERUp;
   Float_t         p_HadZH_S_SIG_ghz1_1_MCFM_JERUp;
   Float_t         p_HadZH_S_BSI_ghz1_1_MCFM_JERUp;
   Float_t         p_HadZH_S_BSI_ghz1_i_MCFM_JERUp;
   Float_t         p_HadZH_SIG_ghz1_1_MCFM_JERUp;
   Float_t         p_HadZH_BSI_ghz1_1_MCFM_JERUp;
   Float_t         p_HadZH_BSI_ghz1_i_MCFM_JERUp;
   Float_t         pConst_HadZH_BKG_MCFM_JERUp;
   Float_t         p_HadZH_BKG_MCFM_JERUp;
   Float_t         pConst_HadWH_S_SIG_ghw1_1_MCFM_JERUp;
   Float_t         p_HadWH_S_SIG_ghw1_1_MCFM_JERUp;
   Float_t         p_HadWH_S_BSI_ghw1_1_MCFM_JERUp;
   Float_t         p_HadWH_S_BSI_ghw1_i_MCFM_JERUp;
   Float_t         pConst_HadWH_BKG_MCFM_JERUp;
   Float_t         p_HadWH_BKG_MCFM_JERUp;
   Float_t         pConst_JJQCD_BKG_MCFM_JERUp;
   Float_t         p_JJQCD_BKG_MCFM_JERUp;
   Float_t         p_JJEW_SIG_ghv1_1_MCFM_JERDn;
   Float_t         p_JJEW_BSI_ghv1_1_MCFM_JERDn;
   Float_t         p_JJEW_BSI_ghv1_i_MCFM_JERDn;
   Float_t         p_JJEW_BKG_MCFM_JERDn;
   Float_t         pConst_JJVBF_S_SIG_ghv1_1_MCFM_JERDn;
   Float_t         p_JJVBF_S_SIG_ghv1_1_MCFM_JERDn;
   Float_t         p_JJVBF_S_BSI_ghv1_1_MCFM_JERDn;
   Float_t         p_JJVBF_S_BSI_ghv1_i_MCFM_JERDn;
   Float_t         p_JJVBF_SIG_ghv1_1_MCFM_JERDn;
   Float_t         p_JJVBF_BSI_ghv1_1_MCFM_JERDn;
   Float_t         p_JJVBF_BSI_ghv1_i_MCFM_JERDn;
   Float_t         pConst_JJVBF_BKG_MCFM_JERDn;
   Float_t         p_JJVBF_BKG_MCFM_JERDn;
   Float_t         pConst_HadZH_S_SIG_ghz1_1_MCFM_JERDn;
   Float_t         p_HadZH_S_SIG_ghz1_1_MCFM_JERDn;
   Float_t         p_HadZH_S_BSI_ghz1_1_MCFM_JERDn;
   Float_t         p_HadZH_S_BSI_ghz1_i_MCFM_JERDn;
   Float_t         p_HadZH_SIG_ghz1_1_MCFM_JERDn;
   Float_t         p_HadZH_BSI_ghz1_1_MCFM_JERDn;
   Float_t         p_HadZH_BSI_ghz1_i_MCFM_JERDn;
   Float_t         pConst_HadZH_BKG_MCFM_JERDn;
   Float_t         p_HadZH_BKG_MCFM_JERDn;
   Float_t         pConst_HadWH_S_SIG_ghw1_1_MCFM_JERDn;
   Float_t         p_HadWH_S_SIG_ghw1_1_MCFM_JERDn;
   Float_t         p_HadWH_S_BSI_ghw1_1_MCFM_JERDn;
   Float_t         p_HadWH_S_BSI_ghw1_i_MCFM_JERDn;
   Float_t         pConst_HadWH_BKG_MCFM_JERDn;
   Float_t         p_HadWH_BKG_MCFM_JERDn;
   Float_t         pConst_JJQCD_BKG_MCFM_JERDn;
   Float_t         p_JJQCD_BKG_MCFM_JERDn;
   Float_t         p_m4l_SIG;
   Float_t         p_m4l_BKG;
   Float_t         p_m4l_SIG_ScaleDown;
   Float_t         p_m4l_BKG_ScaleDown;
   Float_t         p_m4l_SIG_ResDown;
   Float_t         p_m4l_BKG_ResDown;
   Float_t         p_m4l_SIG_ScaleUp;
   Float_t         p_m4l_BKG_ScaleUp;
   Float_t         p_m4l_SIG_ResUp;
   Float_t         p_m4l_BKG_ResUp;
   Float_t         p_HadZH_mavjj_true_JECNominal;
   Float_t         p_HadWH_mavjj_true_JECNominal;
   Float_t         p_HadZH_mavjj_JECNominal;
   Float_t         p_HadWH_mavjj_JECNominal;
   Float_t         p_HadZH_mavjj_true_JESUp;
   Float_t         p_HadWH_mavjj_true_JESUp;
   Float_t         p_HadZH_mavjj_JESUp;
   Float_t         p_HadWH_mavjj_JESUp;
   Float_t         p_HadZH_mavjj_true_JESDn;
   Float_t         p_HadWH_mavjj_true_JESDn;
   Float_t         p_HadZH_mavjj_JESDn;
   Float_t         p_HadWH_mavjj_JESDn;
   Float_t         p_HadZH_mavjj_true_JERUp;
   Float_t         p_HadWH_mavjj_true_JERUp;
   Float_t         p_HadZH_mavjj_JERUp;
   Float_t         p_HadWH_mavjj_JERUp;
   Float_t         p_HadZH_mavjj_true_JERDn;
   Float_t         p_HadWH_mavjj_true_JERDn;
   Float_t         p_HadZH_mavjj_JERDn;
   Float_t         p_HadWH_mavjj_JERDn;
   Float_t         pConst_JJVBF_SIG_ghv1_1_JHUGen_JECNominal_BestDJJ;
   Float_t         p_JJVBF_SIG_ghv1_1_JHUGen_JECNominal_BestDJJ;
   Float_t         pConst_JJQCD_SIG_ghg2_1_JHUGen_JECNominal_BestDJJ;
   Float_t         p_JJQCD_SIG_ghg2_1_JHUGen_JECNominal_BestDJJ;
   Float_t         pConst_JJVBF_SIG_ghv1_1_JHUGen_JESUp_BestDJJ;
   Float_t         p_JJVBF_SIG_ghv1_1_JHUGen_JESUp_BestDJJ;
   Float_t         pConst_JJQCD_SIG_ghg2_1_JHUGen_JESUp_BestDJJ;
   Float_t         p_JJQCD_SIG_ghg2_1_JHUGen_JESUp_BestDJJ;
   Float_t         pConst_JJVBF_SIG_ghv1_1_JHUGen_JESDn_BestDJJ;
   Float_t         p_JJVBF_SIG_ghv1_1_JHUGen_JESDn_BestDJJ;
   Float_t         pConst_JJQCD_SIG_ghg2_1_JHUGen_JESDn_BestDJJ;
   Float_t         p_JJQCD_SIG_ghg2_1_JHUGen_JESDn_BestDJJ;
   Float_t         pConst_JJVBF_SIG_ghv1_1_JHUGen_JERUp_BestDJJ;
   Float_t         p_JJVBF_SIG_ghv1_1_JHUGen_JERUp_BestDJJ;
   Float_t         pConst_JJQCD_SIG_ghg2_1_JHUGen_JERUp_BestDJJ;
   Float_t         p_JJQCD_SIG_ghg2_1_JHUGen_JERUp_BestDJJ;
   Float_t         pConst_JJVBF_SIG_ghv1_1_JHUGen_JERDn_BestDJJ;
   Float_t         p_JJVBF_SIG_ghv1_1_JHUGen_JERDn_BestDJJ;
   Float_t         pConst_JJQCD_SIG_ghg2_1_JHUGen_JERDn_BestDJJ;
   Float_t         p_JJQCD_SIG_ghg2_1_JHUGen_JERDn_BestDJJ;

   // List of branches
   TBranch        *b_RunNumber;   //!
   TBranch        *b_EventNumber;   //!
   TBranch        *b_LumiNumber;   //!
   TBranch        *b_NRecoMu;   //!
   TBranch        *b_NRecoEle;   //!
   TBranch        *b_Nvtx;   //!
   TBranch        *b_NObsInt;   //!
   TBranch        *b_NTrueInt;   //!
   TBranch        *b_GenMET;   //!
   TBranch        *b_GenMETPhi;   //!
   TBranch        *b_PFMET;   //!
   TBranch        *b_PFMET_jesUp;   //!
   TBranch        *b_PFMET_jesDn;   //!
   TBranch        *b_PFMETPhi;   //!
   TBranch        *b_PFMETPhi_jesUp;   //!
   TBranch        *b_PFMETPhi_jesDn;   //!
   TBranch        *b_PFMET_corrected;   //!
   TBranch        *b_PFMET_corrected_jesUp;   //!
   TBranch        *b_PFMET_corrected_jesDn;   //!
   TBranch        *b_PFMET_corrected_jerUp;   //!
   TBranch        *b_PFMET_corrected_jerDn;   //!
   TBranch        *b_PFMET_corrected_puUp;   //!
   TBranch        *b_PFMET_corrected_puDn;   //!
   TBranch        *b_PFMET_corrected_metUp;   //!
   TBranch        *b_PFMET_corrected_metDn;   //!
   TBranch        *b_PFMETPhi_corrected;   //!
   TBranch        *b_PFMETPhi_corrected_jesUp;   //!
   TBranch        *b_PFMETPhi_corrected_jesDn;   //!
   TBranch        *b_PFMETPhi_corrected_jerUp;   //!
   TBranch        *b_PFMETPhi_corrected_jerDn;   //!
   TBranch        *b_PFMETPhi_corrected_puUp;   //!
   TBranch        *b_PFMETPhi_corrected_puDn;   //!
   TBranch        *b_PFMETPhi_corrected_metUp;   //!
   TBranch        *b_PFMETPhi_corrected_metDn;   //!
   TBranch        *b_nCleanedJets;   //!
   TBranch        *b_nCleanedJetsPt30;   //!
   TBranch        *b_nCleanedJetsPt30_jesUp;   //!
   TBranch        *b_nCleanedJetsPt30_jesDn;   //!
   TBranch        *b_nCleanedJetsPt30_jerUp;   //!
   TBranch        *b_nCleanedJetsPt30_jerDn;   //!
   TBranch        *b_nCleanedJetsPt30BTagged;   //!
   TBranch        *b_nCleanedJetsPt30BTagged_bTagSF;   //!
   TBranch        *b_nCleanedJetsPt30BTagged_bTagSF_jesUp;   //!
   TBranch        *b_nCleanedJetsPt30BTagged_bTagSF_jesDn;   //!
   TBranch        *b_nCleanedJetsPt30BTagged_bTagSF_jerUp;   //!
   TBranch        *b_nCleanedJetsPt30BTagged_bTagSF_jerDn;   //!
   TBranch        *b_nCleanedJetsPt30BTagged_bTagSFUp;   //!
   TBranch        *b_nCleanedJetsPt30BTagged_bTagSFDn;   //!
   TBranch        *b_trigWord;   //!
   TBranch        *b_evtPassMETFilter;   //!
   TBranch        *b_ZZMass;   //!
   TBranch        *b_ZZMassErr;   //!
   TBranch        *b_ZZMassErrCorr;   //!
   TBranch        *b_ZZMassPreFSR;   //!
   TBranch        *b_ZZsel;   //!
   TBranch        *b_ZZPt;   //!
   TBranch        *b_ZZEta;   //!
   TBranch        *b_ZZPhi;   //!
   TBranch        *b_ZZjjPt;   //!
   TBranch        *b_CRflag;   //!
   TBranch        *b_Z1Mass;   //!
   TBranch        *b_Z1Pt;   //!
   TBranch        *b_Z1Flav;   //!
   TBranch        *b_ZZMassRefit;   //!
   TBranch        *b_ZZMassRefitErr;   //!
   TBranch        *b_ZZMassUnrefitErr;   //!
   TBranch        *b_Z2Mass;   //!
   TBranch        *b_Z2Pt;   //!
   TBranch        *b_Z2Flav;   //!
   TBranch        *b_costhetastar;   //!
   TBranch        *b_helphi;   //!
   TBranch        *b_helcosthetaZ1;   //!
   TBranch        *b_helcosthetaZ2;   //!
   TBranch        *b_phistarZ1;   //!
   TBranch        *b_phistarZ2;   //!
   TBranch        *b_xi;   //!
   TBranch        *b_xistar;   //!
   TBranch        *b_LepPt;   //!
   TBranch        *b_LepEta;   //!
   TBranch        *b_LepPhi;   //!
   TBranch        *b_LepSCEta;   //!
   TBranch        *b_LepLepId;   //!
   TBranch        *b_LepSIP;   //!
   TBranch        *b_Lepdxy;   //!
   TBranch        *b_Lepdz;   //!
   TBranch        *b_LepTime;   //!
   TBranch        *b_LepisID;   //!
   TBranch        *b_LepisLoose;   //!
   TBranch        *b_LepBDT;   //!
   TBranch        *b_LepisCrack;   //!
   TBranch        *b_LepMissingHit;   //!
   TBranch        *b_LepChargedHadIso;   //!
   TBranch        *b_LepNeutralHadIso;   //!
   TBranch        *b_LepPhotonIso;   //!
   TBranch        *b_LepPUIsoComponent;   //!
   TBranch        *b_LepCombRelIsoPF;   //!
   TBranch        *b_LepSF;   //!
   TBranch        *b_LepSF_Unc;   //!
   TBranch        *b_LepScale_Total_Up;   //!
   TBranch        *b_LepScale_Total_Dn;   //!
   TBranch        *b_LepScale_Stat_Up;   //!
   TBranch        *b_LepScale_Stat_Dn;   //!
   TBranch        *b_LepScale_Syst_Up;   //!
   TBranch        *b_LepScale_Syst_Dn;   //!
   TBranch        *b_LepScale_Gain_Up;   //!
   TBranch        *b_LepScale_Gain_Dn;   //!
   TBranch        *b_LepSigma_Total_Up;   //!
   TBranch        *b_LepSigma_Total_Dn;   //!
   TBranch        *b_LepSigma_Rho_Up;   //!
   TBranch        *b_LepSigma_Rho_Dn;   //!
   TBranch        *b_LepSigma_Phi_Up;   //!
   TBranch        *b_LepSigma_Phi_Dn;   //!
   TBranch        *b_fsrPt;   //!
   TBranch        *b_fsrEta;   //!
   TBranch        *b_fsrPhi;   //!
   TBranch        *b_fsrLept;   //!
   TBranch        *b_passIsoPreFSR;   //!
   TBranch        *b_JetPt;   //!
   TBranch        *b_JetEta;   //!
   TBranch        *b_JetPhi;   //!
   TBranch        *b_JetMass;   //!
   TBranch        *b_JetBTagger;   //!
   TBranch        *b_JetIsBtagged;   //!
   TBranch        *b_JetIsBtaggedWithSF;   //!
   TBranch        *b_JetIsBtaggedWithSFUp;   //!
   TBranch        *b_JetIsBtaggedWithSFDn;   //!
   TBranch        *b_JetQGLikelihood;   //!
   TBranch        *b_JetAxis2;   //!
   TBranch        *b_JetMult;   //!
   TBranch        *b_JetPtD;   //!
   TBranch        *b_JetSigma;   //!
   TBranch        *b_JetHadronFlavour;   //!
   TBranch        *b_JetPartonFlavour;   //!
   TBranch        *b_JetRawPt;   //!
   TBranch        *b_JetPtJEC_noJER;   //!
   TBranch        *b_JetPt_JESUp;   //!
   TBranch        *b_JetPt_JESDown;   //!
   TBranch        *b_JetPt_JERUp;   //!
   TBranch        *b_JetPt_JERDown;   //!
   TBranch        *b_JetID;   //!
   TBranch        *b_JetPUID;   //!
   TBranch        *b_JetPUValue;   //!
   TBranch        *b_DiJetMass;   //!
   TBranch        *b_DiJetDEta;   //!
   TBranch        *b_DiJetFisher;   //!
   TBranch        *b_PhotonPt;   //!
   TBranch        *b_PhotonEta;   //!
   TBranch        *b_PhotonPhi;   //!
   TBranch        *b_PhotonIsCutBasedLooseID;   //!
   TBranch        *b_nExtraLep;   //!
   TBranch        *b_nExtraZ;   //!
   TBranch        *b_ExtraLepPt;   //!
   TBranch        *b_ExtraLepEta;   //!
   TBranch        *b_ExtraLepPhi;   //!
   TBranch        *b_ExtraLepLepId;   //!
   TBranch        *b_ZXFakeweight;   //!
   TBranch        *b_pConst_GG_SIG_ghg2_1_ghz1_1_JHUGen;   //!
   TBranch        *b_p_GG_SIG_ghg2_1_ghz1_1_JHUGen;   //!
   TBranch        *b_p_GG_SIG_ghg2_1_ghz1prime2_1E4_JHUGen;   //!
   TBranch        *b_p_GG_SIG_ghg2_1_ghz2_1_JHUGen;   //!
   TBranch        *b_p_GG_SIG_ghg2_1_ghz4_1_JHUGen;   //!
   TBranch        *b_p_GG_SIG_ghg2_1_ghza1prime2_1E4_JHUGen;   //!
   TBranch        *b_p_GG_SIG_ghg2_1_ghza2_1_JHUGen;   //!
   TBranch        *b_p_GG_SIG_ghg2_1_ghza4_1_JHUGen;   //!
   TBranch        *b_p_GG_SIG_ghg2_1_gha2_1_JHUGen;   //!
   TBranch        *b_p_GG_SIG_ghg2_1_gha4_1_JHUGen;   //!
   TBranch        *b_p_GG_SIG_ghg2_1_ghz1_1_ghz1prime2_1E4_JHUGen;   //!
   TBranch        *b_p_GG_SIG_ghg2_1_ghz1_1_ghz2_1_JHUGen;   //!
   TBranch        *b_p_GG_SIG_ghg2_1_ghz1_1_ghz2_i_JHUGen;   //!
   TBranch        *b_p_GG_SIG_ghg2_1_ghz1_1_ghz4_1_JHUGen;   //!
   TBranch        *b_p_GG_SIG_ghg2_1_ghz1_1_ghz4_i_JHUGen;   //!
   TBranch        *b_p_GG_SIG_ghg2_1_ghz1_1_ghza1prime2_1E4_JHUGen;   //!
   TBranch        *b_p_GG_SIG_ghg2_1_ghz1_1_ghza1prime2_1E4i_JHUGen;   //!
   TBranch        *b_p_GG_SIG_ghg2_1_ghz1_1_ghza2_1_JHUGen;   //!
   TBranch        *b_p_GG_SIG_ghg2_1_ghz1_1_ghza4_1_JHUGen;   //!
   TBranch        *b_p_GG_SIG_ghg2_1_ghz1_1_gha2_1_JHUGen;   //!
   TBranch        *b_p_GG_SIG_ghg2_1_ghz1_1_gha4_1_JHUGen;   //!
   TBranch        *b_p_GG_SIG_ghg2_1_ghz1prime2_1E4_ghz2_1_JHUGen;   //!
   TBranch        *b_p_GG_SIG_ghg2_1_ghz1prime2_1E4_ghz4_1_JHUGen;   //!
   TBranch        *b_p_GG_SIG_ghg2_1_ghz1prime2_1E4_ghza1prime2_1E4_JHUGen;   //!
   TBranch        *b_p_GG_SIG_ghg2_1_ghz2_1_ghz4_1_JHUGen;   //!
   TBranch        *b_p_GG_SIG_ghg2_1_ghz2_1_ghza1prime2_1E4_JHUGen;   //!
   TBranch        *b_p_GG_SIG_ghg2_1_ghz4_1_ghza1prime2_1E4_JHUGen;   //!
   TBranch        *b_pAux_JVBF_SIG_ghv1_1_JHUGen_JECNominal;   //!
   TBranch        *b_p_JVBF_SIG_ghv1_1_JHUGen_JECNominal;   //!
   TBranch        *b_pConst_JQCD_SIG_ghg2_1_JHUGen_JECNominal;   //!
   TBranch        *b_p_JQCD_SIG_ghg2_1_JHUGen_JECNominal;   //!
   TBranch        *b_pConst_JJVBF_SIG_ghv1_1_JHUGen_JECNominal;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_JHUGen_JECNominal;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1prime2_1E4_JHUGen_JECNominal;   //!
   TBranch        *b_p_JJVBF_SIG_ghv2_1_JHUGen_JECNominal;   //!
   TBranch        *b_p_JJVBF_SIG_ghv4_1_JHUGen_JECNominal;   //!
   TBranch        *b_p_JJVBF_SIG_ghza1prime2_1E4_JHUGen_JECNominal;   //!
   TBranch        *b_p_JJVBF_SIG_ghza2_1_JHUGen_JECNominal;   //!
   TBranch        *b_p_JJVBF_SIG_ghza4_1_JHUGen_JECNominal;   //!
   TBranch        *b_p_JJVBF_SIG_gha2_1_JHUGen_JECNominal;   //!
   TBranch        *b_p_JJVBF_SIG_gha4_1_JHUGen_JECNominal;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_ghv1prime2_1E4_JHUGen_JECNominal;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_ghv2_1_JHUGen_JECNominal;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_ghv4_1_JHUGen_JECNominal;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_ghza1prime2_1E4_JHUGen_JECNominal;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_ghza2_1_JHUGen_JECNominal;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_ghza4_1_JHUGen_JECNominal;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_gha2_1_JHUGen_JECNominal;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_gha4_1_JHUGen_JECNominal;   //!
   TBranch        *b_pConst_JJQCD_SIG_ghg2_1_JHUGen_JECNominal;   //!
   TBranch        *b_p_JJQCD_SIG_ghg2_1_JHUGen_JECNominal;   //!
   TBranch        *b_p_JJQCD_SIG_ghg4_1_JHUGen_JECNominal;   //!
   TBranch        *b_p_JJQCD_SIG_ghg2_1_ghg4_1_JHUGen_JECNominal;   //!
   TBranch        *b_pConst_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JECNominal;   //!
   TBranch        *b_p_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JECNominal;   //!
   TBranch        *b_p_JJQCD_InitialQQ_SIG_ghg4_1_JHUGen_JECNominal;   //!
   TBranch        *b_p_JJQCD_InitialQQ_SIG_ghg2_1_ghg4_1_JHUGen_JECNominal;   //!
   TBranch        *b_pConst_HadZH_SIG_ghz1_1_JHUGen_JECNominal;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_JHUGen_JECNominal;   //!
   TBranch        *b_p_HadZH_SIG_ghz1prime2_1E4_JHUGen_JECNominal;   //!
   TBranch        *b_p_HadZH_SIG_ghz2_1_JHUGen_JECNominal;   //!
   TBranch        *b_p_HadZH_SIG_ghz4_1_JHUGen_JECNominal;   //!
   TBranch        *b_p_HadZH_SIG_ghza1prime2_1E4_JHUGen_JECNominal;   //!
   TBranch        *b_p_HadZH_SIG_ghza2_1_JHUGen_JECNominal;   //!
   TBranch        *b_p_HadZH_SIG_ghza4_1_JHUGen_JECNominal;   //!
   TBranch        *b_p_HadZH_SIG_gha2_1_JHUGen_JECNominal;   //!
   TBranch        *b_p_HadZH_SIG_gha4_1_JHUGen_JECNominal;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_ghz1prime2_1E4_JHUGen_JECNominal;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_ghz2_1_JHUGen_JECNominal;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_ghz4_1_JHUGen_JECNominal;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_ghza1prime2_1E4_JHUGen_JECNominal;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_ghza2_1_JHUGen_JECNominal;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_ghza4_1_JHUGen_JECNominal;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_gha2_1_JHUGen_JECNominal;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_gha4_1_JHUGen_JECNominal;   //!
   TBranch        *b_pConst_HadWH_SIG_ghw1_1_JHUGen_JECNominal;   //!
   TBranch        *b_p_HadWH_SIG_ghw1_1_JHUGen_JECNominal;   //!
   TBranch        *b_p_HadWH_SIG_ghw1prime2_1E4_JHUGen_JECNominal;   //!
   TBranch        *b_p_HadWH_SIG_ghw2_1_JHUGen_JECNominal;   //!
   TBranch        *b_p_HadWH_SIG_ghw4_1_JHUGen_JECNominal;   //!
   TBranch        *b_p_HadWH_SIG_ghw1_1_ghw1prime2_1E4_JHUGen_JECNominal;   //!
   TBranch        *b_p_HadWH_SIG_ghw1_1_ghw2_1_JHUGen_JECNominal;   //!
   TBranch        *b_p_HadWH_SIG_ghw1_1_ghw4_1_JHUGen_JECNominal;   //!
   TBranch        *b_p_ttHUndecayed_SIG_kappa_1_JHUGen_JECNominal;   //!
   TBranch        *b_p_ttHUndecayed_SIG_kappatilde_1_JHUGen_JECNominal;   //!
   TBranch        *b_p_ttHUndecayed_SIG_kappa_1_kappatilde_1_JHUGen_JECNominal;   //!
   TBranch        *b_p_bbH_SIG_kappa_1_JHUGen_JECNominal;   //!
   TBranch        *b_pAux_JVBF_SIG_ghv1_1_JHUGen_JESUp;   //!
   TBranch        *b_p_JVBF_SIG_ghv1_1_JHUGen_JESUp;   //!
   TBranch        *b_pConst_JQCD_SIG_ghg2_1_JHUGen_JESUp;   //!
   TBranch        *b_p_JQCD_SIG_ghg2_1_JHUGen_JESUp;   //!
   TBranch        *b_pConst_JJVBF_SIG_ghv1_1_JHUGen_JESUp;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_JHUGen_JESUp;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1prime2_1E4_JHUGen_JESUp;   //!
   TBranch        *b_p_JJVBF_SIG_ghv2_1_JHUGen_JESUp;   //!
   TBranch        *b_p_JJVBF_SIG_ghv4_1_JHUGen_JESUp;   //!
   TBranch        *b_p_JJVBF_SIG_ghza1prime2_1E4_JHUGen_JESUp;   //!
   TBranch        *b_p_JJVBF_SIG_ghza2_1_JHUGen_JESUp;   //!
   TBranch        *b_p_JJVBF_SIG_ghza4_1_JHUGen_JESUp;   //!
   TBranch        *b_p_JJVBF_SIG_gha2_1_JHUGen_JESUp;   //!
   TBranch        *b_p_JJVBF_SIG_gha4_1_JHUGen_JESUp;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_ghv1prime2_1E4_JHUGen_JESUp;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_ghv2_1_JHUGen_JESUp;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_ghv4_1_JHUGen_JESUp;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_ghza1prime2_1E4_JHUGen_JESUp;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_ghza2_1_JHUGen_JESUp;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_ghza4_1_JHUGen_JESUp;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_gha2_1_JHUGen_JESUp;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_gha4_1_JHUGen_JESUp;   //!
   TBranch        *b_pConst_JJQCD_SIG_ghg2_1_JHUGen_JESUp;   //!
   TBranch        *b_p_JJQCD_SIG_ghg2_1_JHUGen_JESUp;   //!
   TBranch        *b_p_JJQCD_SIG_ghg4_1_JHUGen_JESUp;   //!
   TBranch        *b_p_JJQCD_SIG_ghg2_1_ghg4_1_JHUGen_JESUp;   //!
   TBranch        *b_pConst_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JESUp;   //!
   TBranch        *b_p_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JESUp;   //!
   TBranch        *b_p_JJQCD_InitialQQ_SIG_ghg4_1_JHUGen_JESUp;   //!
   TBranch        *b_p_JJQCD_InitialQQ_SIG_ghg2_1_ghg4_1_JHUGen_JESUp;   //!
   TBranch        *b_pConst_HadZH_SIG_ghz1_1_JHUGen_JESUp;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_JHUGen_JESUp;   //!
   TBranch        *b_p_HadZH_SIG_ghz1prime2_1E4_JHUGen_JESUp;   //!
   TBranch        *b_p_HadZH_SIG_ghz2_1_JHUGen_JESUp;   //!
   TBranch        *b_p_HadZH_SIG_ghz4_1_JHUGen_JESUp;   //!
   TBranch        *b_p_HadZH_SIG_ghza1prime2_1E4_JHUGen_JESUp;   //!
   TBranch        *b_p_HadZH_SIG_ghza2_1_JHUGen_JESUp;   //!
   TBranch        *b_p_HadZH_SIG_ghza4_1_JHUGen_JESUp;   //!
   TBranch        *b_p_HadZH_SIG_gha2_1_JHUGen_JESUp;   //!
   TBranch        *b_p_HadZH_SIG_gha4_1_JHUGen_JESUp;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_ghz1prime2_1E4_JHUGen_JESUp;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_ghz2_1_JHUGen_JESUp;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_ghz4_1_JHUGen_JESUp;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_ghza1prime2_1E4_JHUGen_JESUp;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_ghza2_1_JHUGen_JESUp;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_ghza4_1_JHUGen_JESUp;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_gha2_1_JHUGen_JESUp;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_gha4_1_JHUGen_JESUp;   //!
   TBranch        *b_pConst_HadWH_SIG_ghw1_1_JHUGen_JESUp;   //!
   TBranch        *b_p_HadWH_SIG_ghw1_1_JHUGen_JESUp;   //!
   TBranch        *b_p_HadWH_SIG_ghw1prime2_1E4_JHUGen_JESUp;   //!
   TBranch        *b_p_HadWH_SIG_ghw2_1_JHUGen_JESUp;   //!
   TBranch        *b_p_HadWH_SIG_ghw4_1_JHUGen_JESUp;   //!
   TBranch        *b_p_HadWH_SIG_ghw1_1_ghw1prime2_1E4_JHUGen_JESUp;   //!
   TBranch        *b_p_HadWH_SIG_ghw1_1_ghw2_1_JHUGen_JESUp;   //!
   TBranch        *b_p_HadWH_SIG_ghw1_1_ghw4_1_JHUGen_JESUp;   //!
   TBranch        *b_p_ttHUndecayed_SIG_kappa_1_JHUGen_JESUp;   //!
   TBranch        *b_p_ttHUndecayed_SIG_kappatilde_1_JHUGen_JESUp;   //!
   TBranch        *b_p_ttHUndecayed_SIG_kappa_1_kappatilde_1_JHUGen_JESUp;   //!
   TBranch        *b_p_bbH_SIG_kappa_1_JHUGen_JESUp;   //!
   TBranch        *b_pAux_JVBF_SIG_ghv1_1_JHUGen_JESDn;   //!
   TBranch        *b_p_JVBF_SIG_ghv1_1_JHUGen_JESDn;   //!
   TBranch        *b_pConst_JQCD_SIG_ghg2_1_JHUGen_JESDn;   //!
   TBranch        *b_p_JQCD_SIG_ghg2_1_JHUGen_JESDn;   //!
   TBranch        *b_pConst_JJVBF_SIG_ghv1_1_JHUGen_JESDn;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_JHUGen_JESDn;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1prime2_1E4_JHUGen_JESDn;   //!
   TBranch        *b_p_JJVBF_SIG_ghv2_1_JHUGen_JESDn;   //!
   TBranch        *b_p_JJVBF_SIG_ghv4_1_JHUGen_JESDn;   //!
   TBranch        *b_p_JJVBF_SIG_ghza1prime2_1E4_JHUGen_JESDn;   //!
   TBranch        *b_p_JJVBF_SIG_ghza2_1_JHUGen_JESDn;   //!
   TBranch        *b_p_JJVBF_SIG_ghza4_1_JHUGen_JESDn;   //!
   TBranch        *b_p_JJVBF_SIG_gha2_1_JHUGen_JESDn;   //!
   TBranch        *b_p_JJVBF_SIG_gha4_1_JHUGen_JESDn;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_ghv1prime2_1E4_JHUGen_JESDn;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_ghv2_1_JHUGen_JESDn;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_ghv4_1_JHUGen_JESDn;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_ghza1prime2_1E4_JHUGen_JESDn;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_ghza2_1_JHUGen_JESDn;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_ghza4_1_JHUGen_JESDn;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_gha2_1_JHUGen_JESDn;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_gha4_1_JHUGen_JESDn;   //!
   TBranch        *b_pConst_JJQCD_SIG_ghg2_1_JHUGen_JESDn;   //!
   TBranch        *b_p_JJQCD_SIG_ghg2_1_JHUGen_JESDn;   //!
   TBranch        *b_p_JJQCD_SIG_ghg4_1_JHUGen_JESDn;   //!
   TBranch        *b_p_JJQCD_SIG_ghg2_1_ghg4_1_JHUGen_JESDn;   //!
   TBranch        *b_pConst_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JESDn;   //!
   TBranch        *b_p_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JESDn;   //!
   TBranch        *b_p_JJQCD_InitialQQ_SIG_ghg4_1_JHUGen_JESDn;   //!
   TBranch        *b_p_JJQCD_InitialQQ_SIG_ghg2_1_ghg4_1_JHUGen_JESDn;   //!
   TBranch        *b_pConst_HadZH_SIG_ghz1_1_JHUGen_JESDn;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_JHUGen_JESDn;   //!
   TBranch        *b_p_HadZH_SIG_ghz1prime2_1E4_JHUGen_JESDn;   //!
   TBranch        *b_p_HadZH_SIG_ghz2_1_JHUGen_JESDn;   //!
   TBranch        *b_p_HadZH_SIG_ghz4_1_JHUGen_JESDn;   //!
   TBranch        *b_p_HadZH_SIG_ghza1prime2_1E4_JHUGen_JESDn;   //!
   TBranch        *b_p_HadZH_SIG_ghza2_1_JHUGen_JESDn;   //!
   TBranch        *b_p_HadZH_SIG_ghza4_1_JHUGen_JESDn;   //!
   TBranch        *b_p_HadZH_SIG_gha2_1_JHUGen_JESDn;   //!
   TBranch        *b_p_HadZH_SIG_gha4_1_JHUGen_JESDn;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_ghz1prime2_1E4_JHUGen_JESDn;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_ghz2_1_JHUGen_JESDn;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_ghz4_1_JHUGen_JESDn;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_ghza1prime2_1E4_JHUGen_JESDn;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_ghza2_1_JHUGen_JESDn;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_ghza4_1_JHUGen_JESDn;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_gha2_1_JHUGen_JESDn;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_gha4_1_JHUGen_JESDn;   //!
   TBranch        *b_pConst_HadWH_SIG_ghw1_1_JHUGen_JESDn;   //!
   TBranch        *b_p_HadWH_SIG_ghw1_1_JHUGen_JESDn;   //!
   TBranch        *b_p_HadWH_SIG_ghw1prime2_1E4_JHUGen_JESDn;   //!
   TBranch        *b_p_HadWH_SIG_ghw2_1_JHUGen_JESDn;   //!
   TBranch        *b_p_HadWH_SIG_ghw4_1_JHUGen_JESDn;   //!
   TBranch        *b_p_HadWH_SIG_ghw1_1_ghw1prime2_1E4_JHUGen_JESDn;   //!
   TBranch        *b_p_HadWH_SIG_ghw1_1_ghw2_1_JHUGen_JESDn;   //!
   TBranch        *b_p_HadWH_SIG_ghw1_1_ghw4_1_JHUGen_JESDn;   //!
   TBranch        *b_p_ttHUndecayed_SIG_kappa_1_JHUGen_JESDn;   //!
   TBranch        *b_p_ttHUndecayed_SIG_kappatilde_1_JHUGen_JESDn;   //!
   TBranch        *b_p_ttHUndecayed_SIG_kappa_1_kappatilde_1_JHUGen_JESDn;   //!
   TBranch        *b_p_bbH_SIG_kappa_1_JHUGen_JESDn;   //!
   TBranch        *b_pAux_JVBF_SIG_ghv1_1_JHUGen_JERUp;   //!
   TBranch        *b_p_JVBF_SIG_ghv1_1_JHUGen_JERUp;   //!
   TBranch        *b_pConst_JQCD_SIG_ghg2_1_JHUGen_JERUp;   //!
   TBranch        *b_p_JQCD_SIG_ghg2_1_JHUGen_JERUp;   //!
   TBranch        *b_pConst_JJVBF_SIG_ghv1_1_JHUGen_JERUp;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_JHUGen_JERUp;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1prime2_1E4_JHUGen_JERUp;   //!
   TBranch        *b_p_JJVBF_SIG_ghv2_1_JHUGen_JERUp;   //!
   TBranch        *b_p_JJVBF_SIG_ghv4_1_JHUGen_JERUp;   //!
   TBranch        *b_p_JJVBF_SIG_ghza1prime2_1E4_JHUGen_JERUp;   //!
   TBranch        *b_p_JJVBF_SIG_ghza2_1_JHUGen_JERUp;   //!
   TBranch        *b_p_JJVBF_SIG_ghza4_1_JHUGen_JERUp;   //!
   TBranch        *b_p_JJVBF_SIG_gha2_1_JHUGen_JERUp;   //!
   TBranch        *b_p_JJVBF_SIG_gha4_1_JHUGen_JERUp;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_ghv1prime2_1E4_JHUGen_JERUp;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_ghv2_1_JHUGen_JERUp;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_ghv4_1_JHUGen_JERUp;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_ghza1prime2_1E4_JHUGen_JERUp;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_ghza2_1_JHUGen_JERUp;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_ghza4_1_JHUGen_JERUp;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_gha2_1_JHUGen_JERUp;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_gha4_1_JHUGen_JERUp;   //!
   TBranch        *b_pConst_JJQCD_SIG_ghg2_1_JHUGen_JERUp;   //!
   TBranch        *b_p_JJQCD_SIG_ghg2_1_JHUGen_JERUp;   //!
   TBranch        *b_p_JJQCD_SIG_ghg4_1_JHUGen_JERUp;   //!
   TBranch        *b_p_JJQCD_SIG_ghg2_1_ghg4_1_JHUGen_JERUp;   //!
   TBranch        *b_pConst_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JERUp;   //!
   TBranch        *b_p_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JERUp;   //!
   TBranch        *b_p_JJQCD_InitialQQ_SIG_ghg4_1_JHUGen_JERUp;   //!
   TBranch        *b_p_JJQCD_InitialQQ_SIG_ghg2_1_ghg4_1_JHUGen_JERUp;   //!
   TBranch        *b_pConst_HadZH_SIG_ghz1_1_JHUGen_JERUp;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_JHUGen_JERUp;   //!
   TBranch        *b_p_HadZH_SIG_ghz1prime2_1E4_JHUGen_JERUp;   //!
   TBranch        *b_p_HadZH_SIG_ghz2_1_JHUGen_JERUp;   //!
   TBranch        *b_p_HadZH_SIG_ghz4_1_JHUGen_JERUp;   //!
   TBranch        *b_p_HadZH_SIG_ghza1prime2_1E4_JHUGen_JERUp;   //!
   TBranch        *b_p_HadZH_SIG_ghza2_1_JHUGen_JERUp;   //!
   TBranch        *b_p_HadZH_SIG_ghza4_1_JHUGen_JERUp;   //!
   TBranch        *b_p_HadZH_SIG_gha2_1_JHUGen_JERUp;   //!
   TBranch        *b_p_HadZH_SIG_gha4_1_JHUGen_JERUp;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_ghz1prime2_1E4_JHUGen_JERUp;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_ghz2_1_JHUGen_JERUp;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_ghz4_1_JHUGen_JERUp;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_ghza1prime2_1E4_JHUGen_JERUp;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_ghza2_1_JHUGen_JERUp;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_ghza4_1_JHUGen_JERUp;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_gha2_1_JHUGen_JERUp;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_gha4_1_JHUGen_JERUp;   //!
   TBranch        *b_pConst_HadWH_SIG_ghw1_1_JHUGen_JERUp;   //!
   TBranch        *b_p_HadWH_SIG_ghw1_1_JHUGen_JERUp;   //!
   TBranch        *b_p_HadWH_SIG_ghw1prime2_1E4_JHUGen_JERUp;   //!
   TBranch        *b_p_HadWH_SIG_ghw2_1_JHUGen_JERUp;   //!
   TBranch        *b_p_HadWH_SIG_ghw4_1_JHUGen_JERUp;   //!
   TBranch        *b_p_HadWH_SIG_ghw1_1_ghw1prime2_1E4_JHUGen_JERUp;   //!
   TBranch        *b_p_HadWH_SIG_ghw1_1_ghw2_1_JHUGen_JERUp;   //!
   TBranch        *b_p_HadWH_SIG_ghw1_1_ghw4_1_JHUGen_JERUp;   //!
   TBranch        *b_p_ttHUndecayed_SIG_kappa_1_JHUGen_JERUp;   //!
   TBranch        *b_p_ttHUndecayed_SIG_kappatilde_1_JHUGen_JERUp;   //!
   TBranch        *b_p_ttHUndecayed_SIG_kappa_1_kappatilde_1_JHUGen_JERUp;   //!
   TBranch        *b_p_bbH_SIG_kappa_1_JHUGen_JERUp;   //!
   TBranch        *b_pAux_JVBF_SIG_ghv1_1_JHUGen_JERDn;   //!
   TBranch        *b_p_JVBF_SIG_ghv1_1_JHUGen_JERDn;   //!
   TBranch        *b_pConst_JQCD_SIG_ghg2_1_JHUGen_JERDn;   //!
   TBranch        *b_p_JQCD_SIG_ghg2_1_JHUGen_JERDn;   //!
   TBranch        *b_pConst_JJVBF_SIG_ghv1_1_JHUGen_JERDn;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_JHUGen_JERDn;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1prime2_1E4_JHUGen_JERDn;   //!
   TBranch        *b_p_JJVBF_SIG_ghv2_1_JHUGen_JERDn;   //!
   TBranch        *b_p_JJVBF_SIG_ghv4_1_JHUGen_JERDn;   //!
   TBranch        *b_p_JJVBF_SIG_ghza1prime2_1E4_JHUGen_JERDn;   //!
   TBranch        *b_p_JJVBF_SIG_ghza2_1_JHUGen_JERDn;   //!
   TBranch        *b_p_JJVBF_SIG_ghza4_1_JHUGen_JERDn;   //!
   TBranch        *b_p_JJVBF_SIG_gha2_1_JHUGen_JERDn;   //!
   TBranch        *b_p_JJVBF_SIG_gha4_1_JHUGen_JERDn;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_ghv1prime2_1E4_JHUGen_JERDn;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_ghv2_1_JHUGen_JERDn;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_ghv4_1_JHUGen_JERDn;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_ghza1prime2_1E4_JHUGen_JERDn;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_ghza2_1_JHUGen_JERDn;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_ghza4_1_JHUGen_JERDn;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_gha2_1_JHUGen_JERDn;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_gha4_1_JHUGen_JERDn;   //!
   TBranch        *b_pConst_JJQCD_SIG_ghg2_1_JHUGen_JERDn;   //!
   TBranch        *b_p_JJQCD_SIG_ghg2_1_JHUGen_JERDn;   //!
   TBranch        *b_p_JJQCD_SIG_ghg4_1_JHUGen_JERDn;   //!
   TBranch        *b_p_JJQCD_SIG_ghg2_1_ghg4_1_JHUGen_JERDn;   //!
   TBranch        *b_pConst_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JERDn;   //!
   TBranch        *b_p_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JERDn;   //!
   TBranch        *b_p_JJQCD_InitialQQ_SIG_ghg4_1_JHUGen_JERDn;   //!
   TBranch        *b_p_JJQCD_InitialQQ_SIG_ghg2_1_ghg4_1_JHUGen_JERDn;   //!
   TBranch        *b_pConst_HadZH_SIG_ghz1_1_JHUGen_JERDn;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_JHUGen_JERDn;   //!
   TBranch        *b_p_HadZH_SIG_ghz1prime2_1E4_JHUGen_JERDn;   //!
   TBranch        *b_p_HadZH_SIG_ghz2_1_JHUGen_JERDn;   //!
   TBranch        *b_p_HadZH_SIG_ghz4_1_JHUGen_JERDn;   //!
   TBranch        *b_p_HadZH_SIG_ghza1prime2_1E4_JHUGen_JERDn;   //!
   TBranch        *b_p_HadZH_SIG_ghza2_1_JHUGen_JERDn;   //!
   TBranch        *b_p_HadZH_SIG_ghza4_1_JHUGen_JERDn;   //!
   TBranch        *b_p_HadZH_SIG_gha2_1_JHUGen_JERDn;   //!
   TBranch        *b_p_HadZH_SIG_gha4_1_JHUGen_JERDn;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_ghz1prime2_1E4_JHUGen_JERDn;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_ghz2_1_JHUGen_JERDn;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_ghz4_1_JHUGen_JERDn;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_ghza1prime2_1E4_JHUGen_JERDn;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_ghza2_1_JHUGen_JERDn;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_ghza4_1_JHUGen_JERDn;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_gha2_1_JHUGen_JERDn;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_gha4_1_JHUGen_JERDn;   //!
   TBranch        *b_pConst_HadWH_SIG_ghw1_1_JHUGen_JERDn;   //!
   TBranch        *b_p_HadWH_SIG_ghw1_1_JHUGen_JERDn;   //!
   TBranch        *b_p_HadWH_SIG_ghw1prime2_1E4_JHUGen_JERDn;   //!
   TBranch        *b_p_HadWH_SIG_ghw2_1_JHUGen_JERDn;   //!
   TBranch        *b_p_HadWH_SIG_ghw4_1_JHUGen_JERDn;   //!
   TBranch        *b_p_HadWH_SIG_ghw1_1_ghw1prime2_1E4_JHUGen_JERDn;   //!
   TBranch        *b_p_HadWH_SIG_ghw1_1_ghw2_1_JHUGen_JERDn;   //!
   TBranch        *b_p_HadWH_SIG_ghw1_1_ghw4_1_JHUGen_JERDn;   //!
   TBranch        *b_p_ttHUndecayed_SIG_kappa_1_JHUGen_JERDn;   //!
   TBranch        *b_p_ttHUndecayed_SIG_kappatilde_1_JHUGen_JERDn;   //!
   TBranch        *b_p_ttHUndecayed_SIG_kappa_1_kappatilde_1_JHUGen_JERDn;   //!
   TBranch        *b_p_bbH_SIG_kappa_1_JHUGen_JERDn;   //!
   TBranch        *b_p_LepZH_SIG_ghz1_1_JHUGen;   //!
   TBranch        *b_p_LepZH_SIG_ghz1prime2_1E4_JHUGen;   //!
   TBranch        *b_p_LepZH_SIG_ghz2_1_JHUGen;   //!
   TBranch        *b_p_LepZH_SIG_ghz4_1_JHUGen;   //!
   TBranch        *b_p_LepZH_SIG_ghza1prime2_1E4_JHUGen;   //!
   TBranch        *b_p_LepZH_SIG_ghza2_1_JHUGen;   //!
   TBranch        *b_p_LepZH_SIG_ghza4_1_JHUGen;   //!
   TBranch        *b_p_LepZH_SIG_gha2_1_JHUGen;   //!
   TBranch        *b_p_LepZH_SIG_gha4_1_JHUGen;   //!
   TBranch        *b_p_LepZH_SIG_ghz1_1_ghz1prime2_1E4_JHUGen;   //!
   TBranch        *b_p_LepZH_SIG_ghz1_1_ghz2_1_JHUGen;   //!
   TBranch        *b_p_LepZH_SIG_ghz1_1_ghz4_1_JHUGen;   //!
   TBranch        *b_p_LepZH_SIG_ghz1_1_ghza1prime2_1E4_JHUGen;   //!
   TBranch        *b_p_LepZH_SIG_ghz1_1_ghza2_1_JHUGen;   //!
   TBranch        *b_p_LepZH_SIG_ghz1_1_ghza4_1_JHUGen;   //!
   TBranch        *b_p_LepZH_SIG_ghz1_1_gha2_1_JHUGen;   //!
   TBranch        *b_p_LepZH_SIG_ghz1_1_gha4_1_JHUGen;   //!
   TBranch        *b_p_LepWH_SIG_ghw1_1_JHUGen;   //!
   TBranch        *b_p_LepWH_SIG_ghw1prime2_1E4_JHUGen;   //!
   TBranch        *b_p_LepWH_SIG_ghw2_1_JHUGen;   //!
   TBranch        *b_p_LepWH_SIG_ghw4_1_JHUGen;   //!
   TBranch        *b_p_LepWH_SIG_ghw1_1_ghw1prime2_1E4_JHUGen;   //!
   TBranch        *b_p_LepWH_SIG_ghw1_1_ghw2_1_JHUGen;   //!
   TBranch        *b_p_LepWH_SIG_ghw1_1_ghw4_1_JHUGen;   //!
   TBranch        *b_p_QQB_SIG_ZPqqLR_1_gZPz1_1_JHUGen;   //!
   TBranch        *b_p_QQB_SIG_ZPqqLR_1_gZPz2_1_JHUGen;   //!
   TBranch        *b_p_INDEPENDENT_SIG_gZPz1_1_JHUGen;   //!
   TBranch        *b_p_INDEPENDENT_SIG_gZPz2_1_JHUGen;   //!
   TBranch        *b_p_GG_SIG_gXg1_1_gXz1_1_JHUGen;   //!
   TBranch        *b_p_GG_SIG_gXg2_1_gXz2_1_JHUGen;   //!
   TBranch        *b_p_GG_SIG_gXg3_1_gXz3_1_JHUGen;   //!
   TBranch        *b_p_GG_SIG_gXg4_1_gXz4_1_JHUGen;   //!
   TBranch        *b_p_GG_SIG_gXg1_1_gXz5_1_JHUGen;   //!
   TBranch        *b_p_GG_SIG_gXg1_1_gXz1_1_gXz5_1_JHUGen;   //!
   TBranch        *b_p_GG_SIG_gXg1_1_gXz6_1_JHUGen;   //!
   TBranch        *b_p_GG_SIG_gXg1_1_gXz7_1_JHUGen;   //!
   TBranch        *b_p_GG_SIG_gXg5_1_gXz8_1_JHUGen;   //!
   TBranch        *b_p_GG_SIG_gXg5_1_gXz9_1_JHUGen;   //!
   TBranch        *b_p_GG_SIG_gXg5_1_gXz10_1_JHUGen;   //!
   TBranch        *b_p_QQB_SIG_XqqLR_1_gXz1_1_JHUGen;   //!
   TBranch        *b_p_QQB_SIG_XqqLR_1_gXz2_1_JHUGen;   //!
   TBranch        *b_p_QQB_SIG_XqqLR_1_gXz3_1_JHUGen;   //!
   TBranch        *b_p_QQB_SIG_XqqLR_1_gXz4_1_JHUGen;   //!
   TBranch        *b_p_QQB_SIG_XqqLR_1_gXz5_1_JHUGen;   //!
   TBranch        *b_p_QQB_SIG_XqqLR_1_gXz1_1_gXz5_1_JHUGen;   //!
   TBranch        *b_p_QQB_SIG_XqqLR_1_gXz6_1_JHUGen;   //!
   TBranch        *b_p_QQB_SIG_XqqLR_1_gXz7_1_JHUGen;   //!
   TBranch        *b_p_QQB_SIG_XqqLR_1_gXz8_1_JHUGen;   //!
   TBranch        *b_p_QQB_SIG_XqqLR_1_gXz9_1_JHUGen;   //!
   TBranch        *b_p_QQB_SIG_XqqLR_1_gXz10_1_JHUGen;   //!
   TBranch        *b_p_INDEPENDENT_SIG_gXz1_1_JHUGen;   //!
   TBranch        *b_p_INDEPENDENT_SIG_gXz2_1_JHUGen;   //!
   TBranch        *b_p_INDEPENDENT_SIG_gXz3_1_JHUGen;   //!
   TBranch        *b_p_INDEPENDENT_SIG_gXz4_1_JHUGen;   //!
   TBranch        *b_p_INDEPENDENT_SIG_gXz5_1_JHUGen;   //!
   TBranch        *b_p_INDEPENDENT_SIG_gXz1_1_gXz5_1_JHUGen;   //!
   TBranch        *b_p_INDEPENDENT_SIG_gXz6_1_JHUGen;   //!
   TBranch        *b_p_INDEPENDENT_SIG_gXz7_1_JHUGen;   //!
   TBranch        *b_p_INDEPENDENT_SIG_gXz8_1_JHUGen;   //!
   TBranch        *b_p_INDEPENDENT_SIG_gXz9_1_JHUGen;   //!
   TBranch        *b_p_INDEPENDENT_SIG_gXz10_1_JHUGen;   //!
   TBranch        *b_pConst_GG_SIG_kappaTopBot_1_ghz1_1_MCFM;   //!
   TBranch        *b_p_GG_SIG_kappaTopBot_1_ghz1_1_MCFM;   //!
   TBranch        *b_p_GG_BSI_kappaTopBot_1_ghz1_1_MCFM;   //!
   TBranch        *b_p_GG_BSI_kappaTopBot_1_ghz1_i_MCFM;   //!
   TBranch        *b_pConst_GG_BKG_MCFM;   //!
   TBranch        *b_p_GG_BKG_MCFM;   //!
   TBranch        *b_pConst_QQB_BKG_MCFM;   //!
   TBranch        *b_p_QQB_BKG_MCFM;   //!
   TBranch        *b_pConst_ZJJ_BKG_MCFM;   //!
   TBranch        *b_p_ZJJ_BKG_MCFM;   //!
   TBranch        *b_p_JJEW_SIG_ghv1_1_MCFM_JECNominal;   //!
   TBranch        *b_p_JJEW_BSI_ghv1_1_MCFM_JECNominal;   //!
   TBranch        *b_p_JJEW_BSI_ghv1_i_MCFM_JECNominal;   //!
   TBranch        *b_p_JJEW_BKG_MCFM_JECNominal;   //!
   TBranch        *b_pConst_JJVBF_S_SIG_ghv1_1_MCFM_JECNominal;   //!
   TBranch        *b_p_JJVBF_S_SIG_ghv1_1_MCFM_JECNominal;   //!
   TBranch        *b_p_JJVBF_S_BSI_ghv1_1_MCFM_JECNominal;   //!
   TBranch        *b_p_JJVBF_S_BSI_ghv1_i_MCFM_JECNominal;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_MCFM_JECNominal;   //!
   TBranch        *b_p_JJVBF_BSI_ghv1_1_MCFM_JECNominal;   //!
   TBranch        *b_p_JJVBF_BSI_ghv1_i_MCFM_JECNominal;   //!
   TBranch        *b_pConst_JJVBF_BKG_MCFM_JECNominal;   //!
   TBranch        *b_p_JJVBF_BKG_MCFM_JECNominal;   //!
   TBranch        *b_pConst_HadZH_S_SIG_ghz1_1_MCFM_JECNominal;   //!
   TBranch        *b_p_HadZH_S_SIG_ghz1_1_MCFM_JECNominal;   //!
   TBranch        *b_p_HadZH_S_BSI_ghz1_1_MCFM_JECNominal;   //!
   TBranch        *b_p_HadZH_S_BSI_ghz1_i_MCFM_JECNominal;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_MCFM_JECNominal;   //!
   TBranch        *b_p_HadZH_BSI_ghz1_1_MCFM_JECNominal;   //!
   TBranch        *b_p_HadZH_BSI_ghz1_i_MCFM_JECNominal;   //!
   TBranch        *b_pConst_HadZH_BKG_MCFM_JECNominal;   //!
   TBranch        *b_p_HadZH_BKG_MCFM_JECNominal;   //!
   TBranch        *b_pConst_HadWH_S_SIG_ghw1_1_MCFM_JECNominal;   //!
   TBranch        *b_p_HadWH_S_SIG_ghw1_1_MCFM_JECNominal;   //!
   TBranch        *b_p_HadWH_S_BSI_ghw1_1_MCFM_JECNominal;   //!
   TBranch        *b_p_HadWH_S_BSI_ghw1_i_MCFM_JECNominal;   //!
   TBranch        *b_pConst_HadWH_BKG_MCFM_JECNominal;   //!
   TBranch        *b_p_HadWH_BKG_MCFM_JECNominal;   //!
   TBranch        *b_pConst_JJQCD_BKG_MCFM_JECNominal;   //!
   TBranch        *b_p_JJQCD_BKG_MCFM_JECNominal;   //!
   TBranch        *b_p_JJEW_SIG_ghv1_1_MCFM_JESUp;   //!
   TBranch        *b_p_JJEW_BSI_ghv1_1_MCFM_JESUp;   //!
   TBranch        *b_p_JJEW_BSI_ghv1_i_MCFM_JESUp;   //!
   TBranch        *b_p_JJEW_BKG_MCFM_JESUp;   //!
   TBranch        *b_pConst_JJVBF_S_SIG_ghv1_1_MCFM_JESUp;   //!
   TBranch        *b_p_JJVBF_S_SIG_ghv1_1_MCFM_JESUp;   //!
   TBranch        *b_p_JJVBF_S_BSI_ghv1_1_MCFM_JESUp;   //!
   TBranch        *b_p_JJVBF_S_BSI_ghv1_i_MCFM_JESUp;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_MCFM_JESUp;   //!
   TBranch        *b_p_JJVBF_BSI_ghv1_1_MCFM_JESUp;   //!
   TBranch        *b_p_JJVBF_BSI_ghv1_i_MCFM_JESUp;   //!
   TBranch        *b_pConst_JJVBF_BKG_MCFM_JESUp;   //!
   TBranch        *b_p_JJVBF_BKG_MCFM_JESUp;   //!
   TBranch        *b_pConst_HadZH_S_SIG_ghz1_1_MCFM_JESUp;   //!
   TBranch        *b_p_HadZH_S_SIG_ghz1_1_MCFM_JESUp;   //!
   TBranch        *b_p_HadZH_S_BSI_ghz1_1_MCFM_JESUp;   //!
   TBranch        *b_p_HadZH_S_BSI_ghz1_i_MCFM_JESUp;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_MCFM_JESUp;   //!
   TBranch        *b_p_HadZH_BSI_ghz1_1_MCFM_JESUp;   //!
   TBranch        *b_p_HadZH_BSI_ghz1_i_MCFM_JESUp;   //!
   TBranch        *b_pConst_HadZH_BKG_MCFM_JESUp;   //!
   TBranch        *b_p_HadZH_BKG_MCFM_JESUp;   //!
   TBranch        *b_pConst_HadWH_S_SIG_ghw1_1_MCFM_JESUp;   //!
   TBranch        *b_p_HadWH_S_SIG_ghw1_1_MCFM_JESUp;   //!
   TBranch        *b_p_HadWH_S_BSI_ghw1_1_MCFM_JESUp;   //!
   TBranch        *b_p_HadWH_S_BSI_ghw1_i_MCFM_JESUp;   //!
   TBranch        *b_pConst_HadWH_BKG_MCFM_JESUp;   //!
   TBranch        *b_p_HadWH_BKG_MCFM_JESUp;   //!
   TBranch        *b_pConst_JJQCD_BKG_MCFM_JESUp;   //!
   TBranch        *b_p_JJQCD_BKG_MCFM_JESUp;   //!
   TBranch        *b_p_JJEW_SIG_ghv1_1_MCFM_JESDn;   //!
   TBranch        *b_p_JJEW_BSI_ghv1_1_MCFM_JESDn;   //!
   TBranch        *b_p_JJEW_BSI_ghv1_i_MCFM_JESDn;   //!
   TBranch        *b_p_JJEW_BKG_MCFM_JESDn;   //!
   TBranch        *b_pConst_JJVBF_S_SIG_ghv1_1_MCFM_JESDn;   //!
   TBranch        *b_p_JJVBF_S_SIG_ghv1_1_MCFM_JESDn;   //!
   TBranch        *b_p_JJVBF_S_BSI_ghv1_1_MCFM_JESDn;   //!
   TBranch        *b_p_JJVBF_S_BSI_ghv1_i_MCFM_JESDn;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_MCFM_JESDn;   //!
   TBranch        *b_p_JJVBF_BSI_ghv1_1_MCFM_JESDn;   //!
   TBranch        *b_p_JJVBF_BSI_ghv1_i_MCFM_JESDn;   //!
   TBranch        *b_pConst_JJVBF_BKG_MCFM_JESDn;   //!
   TBranch        *b_p_JJVBF_BKG_MCFM_JESDn;   //!
   TBranch        *b_pConst_HadZH_S_SIG_ghz1_1_MCFM_JESDn;   //!
   TBranch        *b_p_HadZH_S_SIG_ghz1_1_MCFM_JESDn;   //!
   TBranch        *b_p_HadZH_S_BSI_ghz1_1_MCFM_JESDn;   //!
   TBranch        *b_p_HadZH_S_BSI_ghz1_i_MCFM_JESDn;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_MCFM_JESDn;   //!
   TBranch        *b_p_HadZH_BSI_ghz1_1_MCFM_JESDn;   //!
   TBranch        *b_p_HadZH_BSI_ghz1_i_MCFM_JESDn;   //!
   TBranch        *b_pConst_HadZH_BKG_MCFM_JESDn;   //!
   TBranch        *b_p_HadZH_BKG_MCFM_JESDn;   //!
   TBranch        *b_pConst_HadWH_S_SIG_ghw1_1_MCFM_JESDn;   //!
   TBranch        *b_p_HadWH_S_SIG_ghw1_1_MCFM_JESDn;   //!
   TBranch        *b_p_HadWH_S_BSI_ghw1_1_MCFM_JESDn;   //!
   TBranch        *b_p_HadWH_S_BSI_ghw1_i_MCFM_JESDn;   //!
   TBranch        *b_pConst_HadWH_BKG_MCFM_JESDn;   //!
   TBranch        *b_p_HadWH_BKG_MCFM_JESDn;   //!
   TBranch        *b_pConst_JJQCD_BKG_MCFM_JESDn;   //!
   TBranch        *b_p_JJQCD_BKG_MCFM_JESDn;   //!
   TBranch        *b_p_JJEW_SIG_ghv1_1_MCFM_JERUp;   //!
   TBranch        *b_p_JJEW_BSI_ghv1_1_MCFM_JERUp;   //!
   TBranch        *b_p_JJEW_BSI_ghv1_i_MCFM_JERUp;   //!
   TBranch        *b_p_JJEW_BKG_MCFM_JERUp;   //!
   TBranch        *b_pConst_JJVBF_S_SIG_ghv1_1_MCFM_JERUp;   //!
   TBranch        *b_p_JJVBF_S_SIG_ghv1_1_MCFM_JERUp;   //!
   TBranch        *b_p_JJVBF_S_BSI_ghv1_1_MCFM_JERUp;   //!
   TBranch        *b_p_JJVBF_S_BSI_ghv1_i_MCFM_JERUp;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_MCFM_JERUp;   //!
   TBranch        *b_p_JJVBF_BSI_ghv1_1_MCFM_JERUp;   //!
   TBranch        *b_p_JJVBF_BSI_ghv1_i_MCFM_JERUp;   //!
   TBranch        *b_pConst_JJVBF_BKG_MCFM_JERUp;   //!
   TBranch        *b_p_JJVBF_BKG_MCFM_JERUp;   //!
   TBranch        *b_pConst_HadZH_S_SIG_ghz1_1_MCFM_JERUp;   //!
   TBranch        *b_p_HadZH_S_SIG_ghz1_1_MCFM_JERUp;   //!
   TBranch        *b_p_HadZH_S_BSI_ghz1_1_MCFM_JERUp;   //!
   TBranch        *b_p_HadZH_S_BSI_ghz1_i_MCFM_JERUp;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_MCFM_JERUp;   //!
   TBranch        *b_p_HadZH_BSI_ghz1_1_MCFM_JERUp;   //!
   TBranch        *b_p_HadZH_BSI_ghz1_i_MCFM_JERUp;   //!
   TBranch        *b_pConst_HadZH_BKG_MCFM_JERUp;   //!
   TBranch        *b_p_HadZH_BKG_MCFM_JERUp;   //!
   TBranch        *b_pConst_HadWH_S_SIG_ghw1_1_MCFM_JERUp;   //!
   TBranch        *b_p_HadWH_S_SIG_ghw1_1_MCFM_JERUp;   //!
   TBranch        *b_p_HadWH_S_BSI_ghw1_1_MCFM_JERUp;   //!
   TBranch        *b_p_HadWH_S_BSI_ghw1_i_MCFM_JERUp;   //!
   TBranch        *b_pConst_HadWH_BKG_MCFM_JERUp;   //!
   TBranch        *b_p_HadWH_BKG_MCFM_JERUp;   //!
   TBranch        *b_pConst_JJQCD_BKG_MCFM_JERUp;   //!
   TBranch        *b_p_JJQCD_BKG_MCFM_JERUp;   //!
   TBranch        *b_p_JJEW_SIG_ghv1_1_MCFM_JERDn;   //!
   TBranch        *b_p_JJEW_BSI_ghv1_1_MCFM_JERDn;   //!
   TBranch        *b_p_JJEW_BSI_ghv1_i_MCFM_JERDn;   //!
   TBranch        *b_p_JJEW_BKG_MCFM_JERDn;   //!
   TBranch        *b_pConst_JJVBF_S_SIG_ghv1_1_MCFM_JERDn;   //!
   TBranch        *b_p_JJVBF_S_SIG_ghv1_1_MCFM_JERDn;   //!
   TBranch        *b_p_JJVBF_S_BSI_ghv1_1_MCFM_JERDn;   //!
   TBranch        *b_p_JJVBF_S_BSI_ghv1_i_MCFM_JERDn;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_MCFM_JERDn;   //!
   TBranch        *b_p_JJVBF_BSI_ghv1_1_MCFM_JERDn;   //!
   TBranch        *b_p_JJVBF_BSI_ghv1_i_MCFM_JERDn;   //!
   TBranch        *b_pConst_JJVBF_BKG_MCFM_JERDn;   //!
   TBranch        *b_p_JJVBF_BKG_MCFM_JERDn;   //!
   TBranch        *b_pConst_HadZH_S_SIG_ghz1_1_MCFM_JERDn;   //!
   TBranch        *b_p_HadZH_S_SIG_ghz1_1_MCFM_JERDn;   //!
   TBranch        *b_p_HadZH_S_BSI_ghz1_1_MCFM_JERDn;   //!
   TBranch        *b_p_HadZH_S_BSI_ghz1_i_MCFM_JERDn;   //!
   TBranch        *b_p_HadZH_SIG_ghz1_1_MCFM_JERDn;   //!
   TBranch        *b_p_HadZH_BSI_ghz1_1_MCFM_JERDn;   //!
   TBranch        *b_p_HadZH_BSI_ghz1_i_MCFM_JERDn;   //!
   TBranch        *b_pConst_HadZH_BKG_MCFM_JERDn;   //!
   TBranch        *b_p_HadZH_BKG_MCFM_JERDn;   //!
   TBranch        *b_pConst_HadWH_S_SIG_ghw1_1_MCFM_JERDn;   //!
   TBranch        *b_p_HadWH_S_SIG_ghw1_1_MCFM_JERDn;   //!
   TBranch        *b_p_HadWH_S_BSI_ghw1_1_MCFM_JERDn;   //!
   TBranch        *b_p_HadWH_S_BSI_ghw1_i_MCFM_JERDn;   //!
   TBranch        *b_pConst_HadWH_BKG_MCFM_JERDn;   //!
   TBranch        *b_p_HadWH_BKG_MCFM_JERDn;   //!
   TBranch        *b_pConst_JJQCD_BKG_MCFM_JERDn;   //!
   TBranch        *b_p_JJQCD_BKG_MCFM_JERDn;   //!
   TBranch        *b_p_m4l_SIG;   //!
   TBranch        *b_p_m4l_BKG;   //!
   TBranch        *b_p_m4l_SIG_ScaleDown;   //!
   TBranch        *b_p_m4l_BKG_ScaleDown;   //!
   TBranch        *b_p_m4l_SIG_ResDown;   //!
   TBranch        *b_p_m4l_BKG_ResDown;   //!
   TBranch        *b_p_m4l_SIG_ScaleUp;   //!
   TBranch        *b_p_m4l_BKG_ScaleUp;   //!
   TBranch        *b_p_m4l_SIG_ResUp;   //!
   TBranch        *b_p_m4l_BKG_ResUp;   //!
   TBranch        *b_p_HadZH_mavjj_true_JECNominal;   //!
   TBranch        *b_p_HadWH_mavjj_true_JECNominal;   //!
   TBranch        *b_p_HadZH_mavjj_JECNominal;   //!
   TBranch        *b_p_HadWH_mavjj_JECNominal;   //!
   TBranch        *b_p_HadZH_mavjj_true_JESUp;   //!
   TBranch        *b_p_HadWH_mavjj_true_JESUp;   //!
   TBranch        *b_p_HadZH_mavjj_JESUp;   //!
   TBranch        *b_p_HadWH_mavjj_JESUp;   //!
   TBranch        *b_p_HadZH_mavjj_true_JESDn;   //!
   TBranch        *b_p_HadWH_mavjj_true_JESDn;   //!
   TBranch        *b_p_HadZH_mavjj_JESDn;   //!
   TBranch        *b_p_HadWH_mavjj_JESDn;   //!
   TBranch        *b_p_HadZH_mavjj_true_JERUp;   //!
   TBranch        *b_p_HadWH_mavjj_true_JERUp;   //!
   TBranch        *b_p_HadZH_mavjj_JERUp;   //!
   TBranch        *b_p_HadWH_mavjj_JERUp;   //!
   TBranch        *b_p_HadZH_mavjj_true_JERDn;   //!
   TBranch        *b_p_HadWH_mavjj_true_JERDn;   //!
   TBranch        *b_p_HadZH_mavjj_JERDn;   //!
   TBranch        *b_p_HadWH_mavjj_JERDn;   //!
   TBranch        *b_pConst_JJVBF_SIG_ghv1_1_JHUGen_JECNominal_BestDJJ;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_JHUGen_JECNominal_BestDJJ;   //!
   TBranch        *b_pConst_JJQCD_SIG_ghg2_1_JHUGen_JECNominal_BestDJJ;   //!
   TBranch        *b_p_JJQCD_SIG_ghg2_1_JHUGen_JECNominal_BestDJJ;   //!
   TBranch        *b_pConst_JJVBF_SIG_ghv1_1_JHUGen_JESUp_BestDJJ;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_JHUGen_JESUp_BestDJJ;   //!
   TBranch        *b_pConst_JJQCD_SIG_ghg2_1_JHUGen_JESUp_BestDJJ;   //!
   TBranch        *b_p_JJQCD_SIG_ghg2_1_JHUGen_JESUp_BestDJJ;   //!
   TBranch        *b_pConst_JJVBF_SIG_ghv1_1_JHUGen_JESDn_BestDJJ;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_JHUGen_JESDn_BestDJJ;   //!
   TBranch        *b_pConst_JJQCD_SIG_ghg2_1_JHUGen_JESDn_BestDJJ;   //!
   TBranch        *b_p_JJQCD_SIG_ghg2_1_JHUGen_JESDn_BestDJJ;   //!
   TBranch        *b_pConst_JJVBF_SIG_ghv1_1_JHUGen_JERUp_BestDJJ;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_JHUGen_JERUp_BestDJJ;   //!
   TBranch        *b_pConst_JJQCD_SIG_ghg2_1_JHUGen_JERUp_BestDJJ;   //!
   TBranch        *b_p_JJQCD_SIG_ghg2_1_JHUGen_JERUp_BestDJJ;   //!
   TBranch        *b_pConst_JJVBF_SIG_ghv1_1_JHUGen_JERDn_BestDJJ;   //!
   TBranch        *b_p_JJVBF_SIG_ghv1_1_JHUGen_JERDn_BestDJJ;   //!
   TBranch        *b_pConst_JJQCD_SIG_ghg2_1_JHUGen_JERDn_BestDJJ;   //!
   TBranch        *b_p_JJQCD_SIG_ghg2_1_JHUGen_JERDn_BestDJJ;   //!

   Analyzer(TString path, TTree *tree=0);
   virtual ~Analyzer();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
	virtual void sumall();
};

#endif

#ifdef Analyzer_cxx
Analyzer::Analyzer(TString path, TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject(path+"ZZ4lAnalysis.root");
      if (!f || !f->IsOpen()) {
         f = new TFile(path+"ZZ4lAnalysis.root");
      }
      f->GetObject("candTree",tree);

   }
   Init(tree);
}

Analyzer::~Analyzer()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t Analyzer::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t Analyzer::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void Analyzer::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   LepPt = 0;
   LepEta = 0;
   LepPhi = 0;
   LepSCEta = 0;
   LepLepId = 0;
   LepSIP = 0;
   Lepdxy = 0;
   Lepdz = 0;
   LepTime = 0;
   LepisID = 0;
   LepisLoose = 0;
   LepBDT = 0;
   LepisCrack = 0;
   LepMissingHit = 0;
   LepChargedHadIso = 0;
   LepNeutralHadIso = 0;
   LepPhotonIso = 0;
   LepPUIsoComponent = 0;
   LepCombRelIsoPF = 0;
   LepSF = 0;
   LepSF_Unc = 0;
   LepScale_Total_Up = 0;
   LepScale_Total_Dn = 0;
   LepScale_Stat_Up = 0;
   LepScale_Stat_Dn = 0;
   LepScale_Syst_Up = 0;
   LepScale_Syst_Dn = 0;
   LepScale_Gain_Up = 0;
   LepScale_Gain_Dn = 0;
   LepSigma_Total_Up = 0;
   LepSigma_Total_Dn = 0;
   LepSigma_Rho_Up = 0;
   LepSigma_Rho_Dn = 0;
   LepSigma_Phi_Up = 0;
   LepSigma_Phi_Dn = 0;
   fsrPt = 0;
   fsrEta = 0;
   fsrPhi = 0;
   fsrLept = 0;
   JetPt = 0;
   JetEta = 0;
   JetPhi = 0;
   JetMass = 0;
   JetBTagger = 0;
   JetIsBtagged = 0;
   JetIsBtaggedWithSF = 0;
   JetIsBtaggedWithSFUp = 0;
   JetIsBtaggedWithSFDn = 0;
   JetQGLikelihood = 0;
   JetAxis2 = 0;
   JetMult = 0;
   JetPtD = 0;
   JetSigma = 0;
   JetHadronFlavour = 0;
   JetPartonFlavour = 0;
   JetRawPt = 0;
   JetPtJEC_noJER = 0;
   JetPt_JESUp = 0;
   JetPt_JESDown = 0;
   JetPt_JERUp = 0;
   JetPt_JERDown = 0;
   JetID = 0;
   JetPUID = 0;
   JetPUValue = 0;
   PhotonPt = 0;
   PhotonEta = 0;
   PhotonPhi = 0;
   PhotonIsCutBasedLooseID = 0;
   ExtraLepPt = 0;
   ExtraLepEta = 0;
   ExtraLepPhi = 0;
   ExtraLepLepId = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("RunNumber", &RunNumber, &b_RunNumber);
   fChain->SetBranchAddress("EventNumber", &EventNumber, &b_EventNumber);
   fChain->SetBranchAddress("LumiNumber", &LumiNumber, &b_LumiNumber);
   fChain->SetBranchAddress("NRecoMu", &NRecoMu, &b_NRecoMu);
   fChain->SetBranchAddress("NRecoEle", &NRecoEle, &b_NRecoEle);
   fChain->SetBranchAddress("Nvtx", &Nvtx, &b_Nvtx);
   fChain->SetBranchAddress("NObsInt", &NObsInt, &b_NObsInt);
   fChain->SetBranchAddress("NTrueInt", &NTrueInt, &b_NTrueInt);
   fChain->SetBranchAddress("GenMET", &GenMET, &b_GenMET);
   fChain->SetBranchAddress("GenMETPhi", &GenMETPhi, &b_GenMETPhi);
   fChain->SetBranchAddress("PFMET", &PFMET, &b_PFMET);
   fChain->SetBranchAddress("PFMET_jesUp", &PFMET_jesUp, &b_PFMET_jesUp);
   fChain->SetBranchAddress("PFMET_jesDn", &PFMET_jesDn, &b_PFMET_jesDn);
   fChain->SetBranchAddress("PFMETPhi", &PFMETPhi, &b_PFMETPhi);
   fChain->SetBranchAddress("PFMETPhi_jesUp", &PFMETPhi_jesUp, &b_PFMETPhi_jesUp);
   fChain->SetBranchAddress("PFMETPhi_jesDn", &PFMETPhi_jesDn, &b_PFMETPhi_jesDn);
   fChain->SetBranchAddress("PFMET_corrected", &PFMET_corrected, &b_PFMET_corrected);
   fChain->SetBranchAddress("PFMET_corrected_jesUp", &PFMET_corrected_jesUp, &b_PFMET_corrected_jesUp);
   fChain->SetBranchAddress("PFMET_corrected_jesDn", &PFMET_corrected_jesDn, &b_PFMET_corrected_jesDn);
   fChain->SetBranchAddress("PFMET_corrected_jerUp", &PFMET_corrected_jerUp, &b_PFMET_corrected_jerUp);
   fChain->SetBranchAddress("PFMET_corrected_jerDn", &PFMET_corrected_jerDn, &b_PFMET_corrected_jerDn);
   fChain->SetBranchAddress("PFMET_corrected_puUp", &PFMET_corrected_puUp, &b_PFMET_corrected_puUp);
   fChain->SetBranchAddress("PFMET_corrected_puDn", &PFMET_corrected_puDn, &b_PFMET_corrected_puDn);
   fChain->SetBranchAddress("PFMET_corrected_metUp", &PFMET_corrected_metUp, &b_PFMET_corrected_metUp);
   fChain->SetBranchAddress("PFMET_corrected_metDn", &PFMET_corrected_metDn, &b_PFMET_corrected_metDn);
   fChain->SetBranchAddress("PFMETPhi_corrected", &PFMETPhi_corrected, &b_PFMETPhi_corrected);
   fChain->SetBranchAddress("PFMETPhi_corrected_jesUp", &PFMETPhi_corrected_jesUp, &b_PFMETPhi_corrected_jesUp);
   fChain->SetBranchAddress("PFMETPhi_corrected_jesDn", &PFMETPhi_corrected_jesDn, &b_PFMETPhi_corrected_jesDn);
   fChain->SetBranchAddress("PFMETPhi_corrected_jerUp", &PFMETPhi_corrected_jerUp, &b_PFMETPhi_corrected_jerUp);
   fChain->SetBranchAddress("PFMETPhi_corrected_jerDn", &PFMETPhi_corrected_jerDn, &b_PFMETPhi_corrected_jerDn);
   fChain->SetBranchAddress("PFMETPhi_corrected_puUp", &PFMETPhi_corrected_puUp, &b_PFMETPhi_corrected_puUp);
   fChain->SetBranchAddress("PFMETPhi_corrected_puDn", &PFMETPhi_corrected_puDn, &b_PFMETPhi_corrected_puDn);
   fChain->SetBranchAddress("PFMETPhi_corrected_metUp", &PFMETPhi_corrected_metUp, &b_PFMETPhi_corrected_metUp);
   fChain->SetBranchAddress("PFMETPhi_corrected_metDn", &PFMETPhi_corrected_metDn, &b_PFMETPhi_corrected_metDn);
   fChain->SetBranchAddress("nCleanedJets", &nCleanedJets, &b_nCleanedJets);
   fChain->SetBranchAddress("nCleanedJetsPt30", &nCleanedJetsPt30, &b_nCleanedJetsPt30);
   fChain->SetBranchAddress("nCleanedJetsPt30_jesUp", &nCleanedJetsPt30_jesUp, &b_nCleanedJetsPt30_jesUp);
   fChain->SetBranchAddress("nCleanedJetsPt30_jesDn", &nCleanedJetsPt30_jesDn, &b_nCleanedJetsPt30_jesDn);
   fChain->SetBranchAddress("nCleanedJetsPt30_jerUp", &nCleanedJetsPt30_jerUp, &b_nCleanedJetsPt30_jerUp);
   fChain->SetBranchAddress("nCleanedJetsPt30_jerDn", &nCleanedJetsPt30_jerDn, &b_nCleanedJetsPt30_jerDn);
   fChain->SetBranchAddress("nCleanedJetsPt30BTagged", &nCleanedJetsPt30BTagged, &b_nCleanedJetsPt30BTagged);
   fChain->SetBranchAddress("nCleanedJetsPt30BTagged_bTagSF", &nCleanedJetsPt30BTagged_bTagSF, &b_nCleanedJetsPt30BTagged_bTagSF);
   fChain->SetBranchAddress("nCleanedJetsPt30BTagged_bTagSF_jesUp", &nCleanedJetsPt30BTagged_bTagSF_jesUp, &b_nCleanedJetsPt30BTagged_bTagSF_jesUp);
   fChain->SetBranchAddress("nCleanedJetsPt30BTagged_bTagSF_jesDn", &nCleanedJetsPt30BTagged_bTagSF_jesDn, &b_nCleanedJetsPt30BTagged_bTagSF_jesDn);
   fChain->SetBranchAddress("nCleanedJetsPt30BTagged_bTagSF_jerUp", &nCleanedJetsPt30BTagged_bTagSF_jerUp, &b_nCleanedJetsPt30BTagged_bTagSF_jerUp);
   fChain->SetBranchAddress("nCleanedJetsPt30BTagged_bTagSF_jerDn", &nCleanedJetsPt30BTagged_bTagSF_jerDn, &b_nCleanedJetsPt30BTagged_bTagSF_jerDn);
   fChain->SetBranchAddress("nCleanedJetsPt30BTagged_bTagSFUp", &nCleanedJetsPt30BTagged_bTagSFUp, &b_nCleanedJetsPt30BTagged_bTagSFUp);
   fChain->SetBranchAddress("nCleanedJetsPt30BTagged_bTagSFDn", &nCleanedJetsPt30BTagged_bTagSFDn, &b_nCleanedJetsPt30BTagged_bTagSFDn);
   fChain->SetBranchAddress("trigWord", &trigWord, &b_trigWord);
   fChain->SetBranchAddress("evtPassMETFilter", &evtPassMETFilter, &b_evtPassMETFilter);
   fChain->SetBranchAddress("ZZMass", &ZZMass, &b_ZZMass);
   fChain->SetBranchAddress("ZZMassErr", &ZZMassErr, &b_ZZMassErr);
   fChain->SetBranchAddress("ZZMassErrCorr", &ZZMassErrCorr, &b_ZZMassErrCorr);
   fChain->SetBranchAddress("ZZMassPreFSR", &ZZMassPreFSR, &b_ZZMassPreFSR);
   fChain->SetBranchAddress("ZZsel", &ZZsel, &b_ZZsel);
   fChain->SetBranchAddress("ZZPt", &ZZPt, &b_ZZPt);
   fChain->SetBranchAddress("ZZEta", &ZZEta, &b_ZZEta);
   fChain->SetBranchAddress("ZZPhi", &ZZPhi, &b_ZZPhi);
   fChain->SetBranchAddress("ZZjjPt", &ZZjjPt, &b_ZZjjPt);
   fChain->SetBranchAddress("CRflag", &CRflag, &b_CRflag);
   fChain->SetBranchAddress("Z1Mass", &Z1Mass, &b_Z1Mass);
   fChain->SetBranchAddress("Z1Pt", &Z1Pt, &b_Z1Pt);
   fChain->SetBranchAddress("Z1Flav", &Z1Flav, &b_Z1Flav);
   fChain->SetBranchAddress("ZZMassRefit", &ZZMassRefit, &b_ZZMassRefit);
   fChain->SetBranchAddress("ZZMassRefitErr", &ZZMassRefitErr, &b_ZZMassRefitErr);
   fChain->SetBranchAddress("ZZMassUnrefitErr", &ZZMassUnrefitErr, &b_ZZMassUnrefitErr);
   fChain->SetBranchAddress("Z2Mass", &Z2Mass, &b_Z2Mass);
   fChain->SetBranchAddress("Z2Pt", &Z2Pt, &b_Z2Pt);
   fChain->SetBranchAddress("Z2Flav", &Z2Flav, &b_Z2Flav);
   fChain->SetBranchAddress("costhetastar", &costhetastar, &b_costhetastar);
   fChain->SetBranchAddress("helphi", &helphi, &b_helphi);
   fChain->SetBranchAddress("helcosthetaZ1", &helcosthetaZ1, &b_helcosthetaZ1);
   fChain->SetBranchAddress("helcosthetaZ2", &helcosthetaZ2, &b_helcosthetaZ2);
   fChain->SetBranchAddress("phistarZ1", &phistarZ1, &b_phistarZ1);
   fChain->SetBranchAddress("phistarZ2", &phistarZ2, &b_phistarZ2);
   fChain->SetBranchAddress("xi", &xi, &b_xi);
   fChain->SetBranchAddress("xistar", &xistar, &b_xistar);
   fChain->SetBranchAddress("LepPt", &LepPt, &b_LepPt);
   fChain->SetBranchAddress("LepEta", &LepEta, &b_LepEta);
   fChain->SetBranchAddress("LepPhi", &LepPhi, &b_LepPhi);
   fChain->SetBranchAddress("LepSCEta", &LepSCEta, &b_LepSCEta);
   fChain->SetBranchAddress("LepLepId", &LepLepId, &b_LepLepId);
   fChain->SetBranchAddress("LepSIP", &LepSIP, &b_LepSIP);
   fChain->SetBranchAddress("Lepdxy", &Lepdxy, &b_Lepdxy);
   fChain->SetBranchAddress("Lepdz", &Lepdz, &b_Lepdz);
   fChain->SetBranchAddress("LepTime", &LepTime, &b_LepTime);
   fChain->SetBranchAddress("LepisID", &LepisID, &b_LepisID);
   fChain->SetBranchAddress("LepisLoose", &LepisLoose, &b_LepisLoose);
   fChain->SetBranchAddress("LepBDT", &LepBDT, &b_LepBDT);
   fChain->SetBranchAddress("LepisCrack", &LepisCrack, &b_LepisCrack);
   fChain->SetBranchAddress("LepMissingHit", &LepMissingHit, &b_LepMissingHit);
   fChain->SetBranchAddress("LepChargedHadIso", &LepChargedHadIso, &b_LepChargedHadIso);
   fChain->SetBranchAddress("LepNeutralHadIso", &LepNeutralHadIso, &b_LepNeutralHadIso);
   fChain->SetBranchAddress("LepPhotonIso", &LepPhotonIso, &b_LepPhotonIso);
   fChain->SetBranchAddress("LepPUIsoComponent", &LepPUIsoComponent, &b_LepPUIsoComponent);
   fChain->SetBranchAddress("LepCombRelIsoPF", &LepCombRelIsoPF, &b_LepCombRelIsoPF);
   fChain->SetBranchAddress("LepSF", &LepSF, &b_LepSF);
   fChain->SetBranchAddress("LepSF_Unc", &LepSF_Unc, &b_LepSF_Unc);
   fChain->SetBranchAddress("LepScale_Total_Up", &LepScale_Total_Up, &b_LepScale_Total_Up);
   fChain->SetBranchAddress("LepScale_Total_Dn", &LepScale_Total_Dn, &b_LepScale_Total_Dn);
   fChain->SetBranchAddress("LepScale_Stat_Up", &LepScale_Stat_Up, &b_LepScale_Stat_Up);
   fChain->SetBranchAddress("LepScale_Stat_Dn", &LepScale_Stat_Dn, &b_LepScale_Stat_Dn);
   fChain->SetBranchAddress("LepScale_Syst_Up", &LepScale_Syst_Up, &b_LepScale_Syst_Up);
   fChain->SetBranchAddress("LepScale_Syst_Dn", &LepScale_Syst_Dn, &b_LepScale_Syst_Dn);
   fChain->SetBranchAddress("LepScale_Gain_Up", &LepScale_Gain_Up, &b_LepScale_Gain_Up);
   fChain->SetBranchAddress("LepScale_Gain_Dn", &LepScale_Gain_Dn, &b_LepScale_Gain_Dn);
   fChain->SetBranchAddress("LepSigma_Total_Up", &LepSigma_Total_Up, &b_LepSigma_Total_Up);
   fChain->SetBranchAddress("LepSigma_Total_Dn", &LepSigma_Total_Dn, &b_LepSigma_Total_Dn);
   fChain->SetBranchAddress("LepSigma_Rho_Up", &LepSigma_Rho_Up, &b_LepSigma_Rho_Up);
   fChain->SetBranchAddress("LepSigma_Rho_Dn", &LepSigma_Rho_Dn, &b_LepSigma_Rho_Dn);
   fChain->SetBranchAddress("LepSigma_Phi_Up", &LepSigma_Phi_Up, &b_LepSigma_Phi_Up);
   fChain->SetBranchAddress("LepSigma_Phi_Dn", &LepSigma_Phi_Dn, &b_LepSigma_Phi_Dn);
   fChain->SetBranchAddress("fsrPt", &fsrPt, &b_fsrPt);
   fChain->SetBranchAddress("fsrEta", &fsrEta, &b_fsrEta);
   fChain->SetBranchAddress("fsrPhi", &fsrPhi, &b_fsrPhi);
   fChain->SetBranchAddress("fsrLept", &fsrLept, &b_fsrLept);
   fChain->SetBranchAddress("passIsoPreFSR", &passIsoPreFSR, &b_passIsoPreFSR);
   fChain->SetBranchAddress("JetPt", &JetPt, &b_JetPt);
   fChain->SetBranchAddress("JetEta", &JetEta, &b_JetEta);
   fChain->SetBranchAddress("JetPhi", &JetPhi, &b_JetPhi);
   fChain->SetBranchAddress("JetMass", &JetMass, &b_JetMass);
   fChain->SetBranchAddress("JetBTagger", &JetBTagger, &b_JetBTagger);
   fChain->SetBranchAddress("JetIsBtagged", &JetIsBtagged, &b_JetIsBtagged);
   fChain->SetBranchAddress("JetIsBtaggedWithSF", &JetIsBtaggedWithSF, &b_JetIsBtaggedWithSF);
   fChain->SetBranchAddress("JetIsBtaggedWithSFUp", &JetIsBtaggedWithSFUp, &b_JetIsBtaggedWithSFUp);
   fChain->SetBranchAddress("JetIsBtaggedWithSFDn", &JetIsBtaggedWithSFDn, &b_JetIsBtaggedWithSFDn);
   fChain->SetBranchAddress("JetQGLikelihood", &JetQGLikelihood, &b_JetQGLikelihood);
   fChain->SetBranchAddress("JetAxis2", &JetAxis2, &b_JetAxis2);
   fChain->SetBranchAddress("JetMult", &JetMult, &b_JetMult);
   fChain->SetBranchAddress("JetPtD", &JetPtD, &b_JetPtD);
   fChain->SetBranchAddress("JetSigma", &JetSigma, &b_JetSigma);
   fChain->SetBranchAddress("JetHadronFlavour", &JetHadronFlavour, &b_JetHadronFlavour);
   fChain->SetBranchAddress("JetPartonFlavour", &JetPartonFlavour, &b_JetPartonFlavour);
   fChain->SetBranchAddress("JetRawPt", &JetRawPt, &b_JetRawPt);
   fChain->SetBranchAddress("JetPtJEC_noJER", &JetPtJEC_noJER, &b_JetPtJEC_noJER);
   fChain->SetBranchAddress("JetPt_JESUp", &JetPt_JESUp, &b_JetPt_JESUp);
   fChain->SetBranchAddress("JetPt_JESDown", &JetPt_JESDown, &b_JetPt_JESDown);
   fChain->SetBranchAddress("JetPt_JERUp", &JetPt_JERUp, &b_JetPt_JERUp);
   fChain->SetBranchAddress("JetPt_JERDown", &JetPt_JERDown, &b_JetPt_JERDown);
   fChain->SetBranchAddress("JetID", &JetID, &b_JetID);
   fChain->SetBranchAddress("JetPUID", &JetPUID, &b_JetPUID);
   fChain->SetBranchAddress("JetPUValue", &JetPUValue, &b_JetPUValue);
   fChain->SetBranchAddress("DiJetMass", &DiJetMass, &b_DiJetMass);
   fChain->SetBranchAddress("DiJetDEta", &DiJetDEta, &b_DiJetDEta);
   fChain->SetBranchAddress("DiJetFisher", &DiJetFisher, &b_DiJetFisher);
   fChain->SetBranchAddress("PhotonPt", &PhotonPt, &b_PhotonPt);
   fChain->SetBranchAddress("PhotonEta", &PhotonEta, &b_PhotonEta);
   fChain->SetBranchAddress("PhotonPhi", &PhotonPhi, &b_PhotonPhi);
   fChain->SetBranchAddress("PhotonIsCutBasedLooseID", &PhotonIsCutBasedLooseID, &b_PhotonIsCutBasedLooseID);
   fChain->SetBranchAddress("nExtraLep", &nExtraLep, &b_nExtraLep);
   fChain->SetBranchAddress("nExtraZ", &nExtraZ, &b_nExtraZ);
   fChain->SetBranchAddress("ExtraLepPt", &ExtraLepPt, &b_ExtraLepPt);
   fChain->SetBranchAddress("ExtraLepEta", &ExtraLepEta, &b_ExtraLepEta);
   fChain->SetBranchAddress("ExtraLepPhi", &ExtraLepPhi, &b_ExtraLepPhi);
   fChain->SetBranchAddress("ExtraLepLepId", &ExtraLepLepId, &b_ExtraLepLepId);
   fChain->SetBranchAddress("ZXFakeweight", &ZXFakeweight, &b_ZXFakeweight);
   fChain->SetBranchAddress("pConst_GG_SIG_ghg2_1_ghz1_1_JHUGen", &pConst_GG_SIG_ghg2_1_ghz1_1_JHUGen, &b_pConst_GG_SIG_ghg2_1_ghz1_1_JHUGen);
   fChain->SetBranchAddress("p_GG_SIG_ghg2_1_ghz1_1_JHUGen", &p_GG_SIG_ghg2_1_ghz1_1_JHUGen, &b_p_GG_SIG_ghg2_1_ghz1_1_JHUGen);
   fChain->SetBranchAddress("p_GG_SIG_ghg2_1_ghz1prime2_1E4_JHUGen", &p_GG_SIG_ghg2_1_ghz1prime2_1E4_JHUGen, &b_p_GG_SIG_ghg2_1_ghz1prime2_1E4_JHUGen);
   fChain->SetBranchAddress("p_GG_SIG_ghg2_1_ghz2_1_JHUGen", &p_GG_SIG_ghg2_1_ghz2_1_JHUGen, &b_p_GG_SIG_ghg2_1_ghz2_1_JHUGen);
   fChain->SetBranchAddress("p_GG_SIG_ghg2_1_ghz4_1_JHUGen", &p_GG_SIG_ghg2_1_ghz4_1_JHUGen, &b_p_GG_SIG_ghg2_1_ghz4_1_JHUGen);
   fChain->SetBranchAddress("p_GG_SIG_ghg2_1_ghza1prime2_1E4_JHUGen", &p_GG_SIG_ghg2_1_ghza1prime2_1E4_JHUGen, &b_p_GG_SIG_ghg2_1_ghza1prime2_1E4_JHUGen);
   fChain->SetBranchAddress("p_GG_SIG_ghg2_1_ghza2_1_JHUGen", &p_GG_SIG_ghg2_1_ghza2_1_JHUGen, &b_p_GG_SIG_ghg2_1_ghza2_1_JHUGen);
   fChain->SetBranchAddress("p_GG_SIG_ghg2_1_ghza4_1_JHUGen", &p_GG_SIG_ghg2_1_ghza4_1_JHUGen, &b_p_GG_SIG_ghg2_1_ghza4_1_JHUGen);
   fChain->SetBranchAddress("p_GG_SIG_ghg2_1_gha2_1_JHUGen", &p_GG_SIG_ghg2_1_gha2_1_JHUGen, &b_p_GG_SIG_ghg2_1_gha2_1_JHUGen);
   fChain->SetBranchAddress("p_GG_SIG_ghg2_1_gha4_1_JHUGen", &p_GG_SIG_ghg2_1_gha4_1_JHUGen, &b_p_GG_SIG_ghg2_1_gha4_1_JHUGen);
   fChain->SetBranchAddress("p_GG_SIG_ghg2_1_ghz1_1_ghz1prime2_1E4_JHUGen", &p_GG_SIG_ghg2_1_ghz1_1_ghz1prime2_1E4_JHUGen, &b_p_GG_SIG_ghg2_1_ghz1_1_ghz1prime2_1E4_JHUGen);
   fChain->SetBranchAddress("p_GG_SIG_ghg2_1_ghz1_1_ghz2_1_JHUGen", &p_GG_SIG_ghg2_1_ghz1_1_ghz2_1_JHUGen, &b_p_GG_SIG_ghg2_1_ghz1_1_ghz2_1_JHUGen);
   fChain->SetBranchAddress("p_GG_SIG_ghg2_1_ghz1_1_ghz2_i_JHUGen", &p_GG_SIG_ghg2_1_ghz1_1_ghz2_i_JHUGen, &b_p_GG_SIG_ghg2_1_ghz1_1_ghz2_i_JHUGen);
   fChain->SetBranchAddress("p_GG_SIG_ghg2_1_ghz1_1_ghz4_1_JHUGen", &p_GG_SIG_ghg2_1_ghz1_1_ghz4_1_JHUGen, &b_p_GG_SIG_ghg2_1_ghz1_1_ghz4_1_JHUGen);
   fChain->SetBranchAddress("p_GG_SIG_ghg2_1_ghz1_1_ghz4_i_JHUGen", &p_GG_SIG_ghg2_1_ghz1_1_ghz4_i_JHUGen, &b_p_GG_SIG_ghg2_1_ghz1_1_ghz4_i_JHUGen);
   fChain->SetBranchAddress("p_GG_SIG_ghg2_1_ghz1_1_ghza1prime2_1E4_JHUGen", &p_GG_SIG_ghg2_1_ghz1_1_ghza1prime2_1E4_JHUGen, &b_p_GG_SIG_ghg2_1_ghz1_1_ghza1prime2_1E4_JHUGen);
   fChain->SetBranchAddress("p_GG_SIG_ghg2_1_ghz1_1_ghza1prime2_1E4i_JHUGen", &p_GG_SIG_ghg2_1_ghz1_1_ghza1prime2_1E4i_JHUGen, &b_p_GG_SIG_ghg2_1_ghz1_1_ghza1prime2_1E4i_JHUGen);
   fChain->SetBranchAddress("p_GG_SIG_ghg2_1_ghz1_1_ghza2_1_JHUGen", &p_GG_SIG_ghg2_1_ghz1_1_ghza2_1_JHUGen, &b_p_GG_SIG_ghg2_1_ghz1_1_ghza2_1_JHUGen);
   fChain->SetBranchAddress("p_GG_SIG_ghg2_1_ghz1_1_ghza4_1_JHUGen", &p_GG_SIG_ghg2_1_ghz1_1_ghza4_1_JHUGen, &b_p_GG_SIG_ghg2_1_ghz1_1_ghza4_1_JHUGen);
   fChain->SetBranchAddress("p_GG_SIG_ghg2_1_ghz1_1_gha2_1_JHUGen", &p_GG_SIG_ghg2_1_ghz1_1_gha2_1_JHUGen, &b_p_GG_SIG_ghg2_1_ghz1_1_gha2_1_JHUGen);
   fChain->SetBranchAddress("p_GG_SIG_ghg2_1_ghz1_1_gha4_1_JHUGen", &p_GG_SIG_ghg2_1_ghz1_1_gha4_1_JHUGen, &b_p_GG_SIG_ghg2_1_ghz1_1_gha4_1_JHUGen);
   fChain->SetBranchAddress("p_GG_SIG_ghg2_1_ghz1prime2_1E4_ghz2_1_JHUGen", &p_GG_SIG_ghg2_1_ghz1prime2_1E4_ghz2_1_JHUGen, &b_p_GG_SIG_ghg2_1_ghz1prime2_1E4_ghz2_1_JHUGen);
   fChain->SetBranchAddress("p_GG_SIG_ghg2_1_ghz1prime2_1E4_ghz4_1_JHUGen", &p_GG_SIG_ghg2_1_ghz1prime2_1E4_ghz4_1_JHUGen, &b_p_GG_SIG_ghg2_1_ghz1prime2_1E4_ghz4_1_JHUGen);
   fChain->SetBranchAddress("p_GG_SIG_ghg2_1_ghz1prime2_1E4_ghza1prime2_1E4_JHUGen", &p_GG_SIG_ghg2_1_ghz1prime2_1E4_ghza1prime2_1E4_JHUGen, &b_p_GG_SIG_ghg2_1_ghz1prime2_1E4_ghza1prime2_1E4_JHUGen);
   fChain->SetBranchAddress("p_GG_SIG_ghg2_1_ghz2_1_ghz4_1_JHUGen", &p_GG_SIG_ghg2_1_ghz2_1_ghz4_1_JHUGen, &b_p_GG_SIG_ghg2_1_ghz2_1_ghz4_1_JHUGen);
   fChain->SetBranchAddress("p_GG_SIG_ghg2_1_ghz2_1_ghza1prime2_1E4_JHUGen", &p_GG_SIG_ghg2_1_ghz2_1_ghza1prime2_1E4_JHUGen, &b_p_GG_SIG_ghg2_1_ghz2_1_ghza1prime2_1E4_JHUGen);
   fChain->SetBranchAddress("p_GG_SIG_ghg2_1_ghz4_1_ghza1prime2_1E4_JHUGen", &p_GG_SIG_ghg2_1_ghz4_1_ghza1prime2_1E4_JHUGen, &b_p_GG_SIG_ghg2_1_ghz4_1_ghza1prime2_1E4_JHUGen);
   fChain->SetBranchAddress("pAux_JVBF_SIG_ghv1_1_JHUGen_JECNominal", &pAux_JVBF_SIG_ghv1_1_JHUGen_JECNominal, &b_pAux_JVBF_SIG_ghv1_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_JVBF_SIG_ghv1_1_JHUGen_JECNominal", &p_JVBF_SIG_ghv1_1_JHUGen_JECNominal, &b_p_JVBF_SIG_ghv1_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("pConst_JQCD_SIG_ghg2_1_JHUGen_JECNominal", &pConst_JQCD_SIG_ghg2_1_JHUGen_JECNominal, &b_pConst_JQCD_SIG_ghg2_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_JQCD_SIG_ghg2_1_JHUGen_JECNominal", &p_JQCD_SIG_ghg2_1_JHUGen_JECNominal, &b_p_JQCD_SIG_ghg2_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("pConst_JJVBF_SIG_ghv1_1_JHUGen_JECNominal", &pConst_JJVBF_SIG_ghv1_1_JHUGen_JECNominal, &b_pConst_JJVBF_SIG_ghv1_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_JHUGen_JECNominal", &p_JJVBF_SIG_ghv1_1_JHUGen_JECNominal, &b_p_JJVBF_SIG_ghv1_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1prime2_1E4_JHUGen_JECNominal", &p_JJVBF_SIG_ghv1prime2_1E4_JHUGen_JECNominal, &b_p_JJVBF_SIG_ghv1prime2_1E4_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv2_1_JHUGen_JECNominal", &p_JJVBF_SIG_ghv2_1_JHUGen_JECNominal, &b_p_JJVBF_SIG_ghv2_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv4_1_JHUGen_JECNominal", &p_JJVBF_SIG_ghv4_1_JHUGen_JECNominal, &b_p_JJVBF_SIG_ghv4_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghza1prime2_1E4_JHUGen_JECNominal", &p_JJVBF_SIG_ghza1prime2_1E4_JHUGen_JECNominal, &b_p_JJVBF_SIG_ghza1prime2_1E4_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghza2_1_JHUGen_JECNominal", &p_JJVBF_SIG_ghza2_1_JHUGen_JECNominal, &b_p_JJVBF_SIG_ghza2_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghza4_1_JHUGen_JECNominal", &p_JJVBF_SIG_ghza4_1_JHUGen_JECNominal, &b_p_JJVBF_SIG_ghza4_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_JJVBF_SIG_gha2_1_JHUGen_JECNominal", &p_JJVBF_SIG_gha2_1_JHUGen_JECNominal, &b_p_JJVBF_SIG_gha2_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_JJVBF_SIG_gha4_1_JHUGen_JECNominal", &p_JJVBF_SIG_gha4_1_JHUGen_JECNominal, &b_p_JJVBF_SIG_gha4_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_ghv1prime2_1E4_JHUGen_JECNominal", &p_JJVBF_SIG_ghv1_1_ghv1prime2_1E4_JHUGen_JECNominal, &b_p_JJVBF_SIG_ghv1_1_ghv1prime2_1E4_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_ghv2_1_JHUGen_JECNominal", &p_JJVBF_SIG_ghv1_1_ghv2_1_JHUGen_JECNominal, &b_p_JJVBF_SIG_ghv1_1_ghv2_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_ghv4_1_JHUGen_JECNominal", &p_JJVBF_SIG_ghv1_1_ghv4_1_JHUGen_JECNominal, &b_p_JJVBF_SIG_ghv1_1_ghv4_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_ghza1prime2_1E4_JHUGen_JECNominal", &p_JJVBF_SIG_ghv1_1_ghza1prime2_1E4_JHUGen_JECNominal, &b_p_JJVBF_SIG_ghv1_1_ghza1prime2_1E4_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_ghza2_1_JHUGen_JECNominal", &p_JJVBF_SIG_ghv1_1_ghza2_1_JHUGen_JECNominal, &b_p_JJVBF_SIG_ghv1_1_ghza2_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_ghza4_1_JHUGen_JECNominal", &p_JJVBF_SIG_ghv1_1_ghza4_1_JHUGen_JECNominal, &b_p_JJVBF_SIG_ghv1_1_ghza4_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_gha2_1_JHUGen_JECNominal", &p_JJVBF_SIG_ghv1_1_gha2_1_JHUGen_JECNominal, &b_p_JJVBF_SIG_ghv1_1_gha2_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_gha4_1_JHUGen_JECNominal", &p_JJVBF_SIG_ghv1_1_gha4_1_JHUGen_JECNominal, &b_p_JJVBF_SIG_ghv1_1_gha4_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("pConst_JJQCD_SIG_ghg2_1_JHUGen_JECNominal", &pConst_JJQCD_SIG_ghg2_1_JHUGen_JECNominal, &b_pConst_JJQCD_SIG_ghg2_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_JJQCD_SIG_ghg2_1_JHUGen_JECNominal", &p_JJQCD_SIG_ghg2_1_JHUGen_JECNominal, &b_p_JJQCD_SIG_ghg2_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_JJQCD_SIG_ghg4_1_JHUGen_JECNominal", &p_JJQCD_SIG_ghg4_1_JHUGen_JECNominal, &b_p_JJQCD_SIG_ghg4_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_JJQCD_SIG_ghg2_1_ghg4_1_JHUGen_JECNominal", &p_JJQCD_SIG_ghg2_1_ghg4_1_JHUGen_JECNominal, &b_p_JJQCD_SIG_ghg2_1_ghg4_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("pConst_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JECNominal", &pConst_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JECNominal, &b_pConst_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JECNominal", &p_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JECNominal, &b_p_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_JJQCD_InitialQQ_SIG_ghg4_1_JHUGen_JECNominal", &p_JJQCD_InitialQQ_SIG_ghg4_1_JHUGen_JECNominal, &b_p_JJQCD_InitialQQ_SIG_ghg4_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_JJQCD_InitialQQ_SIG_ghg2_1_ghg4_1_JHUGen_JECNominal", &p_JJQCD_InitialQQ_SIG_ghg2_1_ghg4_1_JHUGen_JECNominal, &b_p_JJQCD_InitialQQ_SIG_ghg2_1_ghg4_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("pConst_HadZH_SIG_ghz1_1_JHUGen_JECNominal", &pConst_HadZH_SIG_ghz1_1_JHUGen_JECNominal, &b_pConst_HadZH_SIG_ghz1_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_JHUGen_JECNominal", &p_HadZH_SIG_ghz1_1_JHUGen_JECNominal, &b_p_HadZH_SIG_ghz1_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1prime2_1E4_JHUGen_JECNominal", &p_HadZH_SIG_ghz1prime2_1E4_JHUGen_JECNominal, &b_p_HadZH_SIG_ghz1prime2_1E4_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz2_1_JHUGen_JECNominal", &p_HadZH_SIG_ghz2_1_JHUGen_JECNominal, &b_p_HadZH_SIG_ghz2_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz4_1_JHUGen_JECNominal", &p_HadZH_SIG_ghz4_1_JHUGen_JECNominal, &b_p_HadZH_SIG_ghz4_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_HadZH_SIG_ghza1prime2_1E4_JHUGen_JECNominal", &p_HadZH_SIG_ghza1prime2_1E4_JHUGen_JECNominal, &b_p_HadZH_SIG_ghza1prime2_1E4_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_HadZH_SIG_ghza2_1_JHUGen_JECNominal", &p_HadZH_SIG_ghza2_1_JHUGen_JECNominal, &b_p_HadZH_SIG_ghza2_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_HadZH_SIG_ghza4_1_JHUGen_JECNominal", &p_HadZH_SIG_ghza4_1_JHUGen_JECNominal, &b_p_HadZH_SIG_ghza4_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_HadZH_SIG_gha2_1_JHUGen_JECNominal", &p_HadZH_SIG_gha2_1_JHUGen_JECNominal, &b_p_HadZH_SIG_gha2_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_HadZH_SIG_gha4_1_JHUGen_JECNominal", &p_HadZH_SIG_gha4_1_JHUGen_JECNominal, &b_p_HadZH_SIG_gha4_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_ghz1prime2_1E4_JHUGen_JECNominal", &p_HadZH_SIG_ghz1_1_ghz1prime2_1E4_JHUGen_JECNominal, &b_p_HadZH_SIG_ghz1_1_ghz1prime2_1E4_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_ghz2_1_JHUGen_JECNominal", &p_HadZH_SIG_ghz1_1_ghz2_1_JHUGen_JECNominal, &b_p_HadZH_SIG_ghz1_1_ghz2_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_ghz4_1_JHUGen_JECNominal", &p_HadZH_SIG_ghz1_1_ghz4_1_JHUGen_JECNominal, &b_p_HadZH_SIG_ghz1_1_ghz4_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_ghza1prime2_1E4_JHUGen_JECNominal", &p_HadZH_SIG_ghz1_1_ghza1prime2_1E4_JHUGen_JECNominal, &b_p_HadZH_SIG_ghz1_1_ghza1prime2_1E4_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_ghza2_1_JHUGen_JECNominal", &p_HadZH_SIG_ghz1_1_ghza2_1_JHUGen_JECNominal, &b_p_HadZH_SIG_ghz1_1_ghza2_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_ghza4_1_JHUGen_JECNominal", &p_HadZH_SIG_ghz1_1_ghza4_1_JHUGen_JECNominal, &b_p_HadZH_SIG_ghz1_1_ghza4_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_gha2_1_JHUGen_JECNominal", &p_HadZH_SIG_ghz1_1_gha2_1_JHUGen_JECNominal, &b_p_HadZH_SIG_ghz1_1_gha2_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_gha4_1_JHUGen_JECNominal", &p_HadZH_SIG_ghz1_1_gha4_1_JHUGen_JECNominal, &b_p_HadZH_SIG_ghz1_1_gha4_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("pConst_HadWH_SIG_ghw1_1_JHUGen_JECNominal", &pConst_HadWH_SIG_ghw1_1_JHUGen_JECNominal, &b_pConst_HadWH_SIG_ghw1_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_HadWH_SIG_ghw1_1_JHUGen_JECNominal", &p_HadWH_SIG_ghw1_1_JHUGen_JECNominal, &b_p_HadWH_SIG_ghw1_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_HadWH_SIG_ghw1prime2_1E4_JHUGen_JECNominal", &p_HadWH_SIG_ghw1prime2_1E4_JHUGen_JECNominal, &b_p_HadWH_SIG_ghw1prime2_1E4_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_HadWH_SIG_ghw2_1_JHUGen_JECNominal", &p_HadWH_SIG_ghw2_1_JHUGen_JECNominal, &b_p_HadWH_SIG_ghw2_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_HadWH_SIG_ghw4_1_JHUGen_JECNominal", &p_HadWH_SIG_ghw4_1_JHUGen_JECNominal, &b_p_HadWH_SIG_ghw4_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_HadWH_SIG_ghw1_1_ghw1prime2_1E4_JHUGen_JECNominal", &p_HadWH_SIG_ghw1_1_ghw1prime2_1E4_JHUGen_JECNominal, &b_p_HadWH_SIG_ghw1_1_ghw1prime2_1E4_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_HadWH_SIG_ghw1_1_ghw2_1_JHUGen_JECNominal", &p_HadWH_SIG_ghw1_1_ghw2_1_JHUGen_JECNominal, &b_p_HadWH_SIG_ghw1_1_ghw2_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_HadWH_SIG_ghw1_1_ghw4_1_JHUGen_JECNominal", &p_HadWH_SIG_ghw1_1_ghw4_1_JHUGen_JECNominal, &b_p_HadWH_SIG_ghw1_1_ghw4_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_ttHUndecayed_SIG_kappa_1_JHUGen_JECNominal", &p_ttHUndecayed_SIG_kappa_1_JHUGen_JECNominal, &b_p_ttHUndecayed_SIG_kappa_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_ttHUndecayed_SIG_kappatilde_1_JHUGen_JECNominal", &p_ttHUndecayed_SIG_kappatilde_1_JHUGen_JECNominal, &b_p_ttHUndecayed_SIG_kappatilde_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_ttHUndecayed_SIG_kappa_1_kappatilde_1_JHUGen_JECNominal", &p_ttHUndecayed_SIG_kappa_1_kappatilde_1_JHUGen_JECNominal, &b_p_ttHUndecayed_SIG_kappa_1_kappatilde_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("p_bbH_SIG_kappa_1_JHUGen_JECNominal", &p_bbH_SIG_kappa_1_JHUGen_JECNominal, &b_p_bbH_SIG_kappa_1_JHUGen_JECNominal);
   fChain->SetBranchAddress("pAux_JVBF_SIG_ghv1_1_JHUGen_JESUp", &pAux_JVBF_SIG_ghv1_1_JHUGen_JESUp, &b_pAux_JVBF_SIG_ghv1_1_JHUGen_JESUp);
   fChain->SetBranchAddress("p_JVBF_SIG_ghv1_1_JHUGen_JESUp", &p_JVBF_SIG_ghv1_1_JHUGen_JESUp, &b_p_JVBF_SIG_ghv1_1_JHUGen_JESUp);
   fChain->SetBranchAddress("pConst_JQCD_SIG_ghg2_1_JHUGen_JESUp", &pConst_JQCD_SIG_ghg2_1_JHUGen_JESUp, &b_pConst_JQCD_SIG_ghg2_1_JHUGen_JESUp);
   fChain->SetBranchAddress("p_JQCD_SIG_ghg2_1_JHUGen_JESUp", &p_JQCD_SIG_ghg2_1_JHUGen_JESUp, &b_p_JQCD_SIG_ghg2_1_JHUGen_JESUp);
   fChain->SetBranchAddress("pConst_JJVBF_SIG_ghv1_1_JHUGen_JESUp", &pConst_JJVBF_SIG_ghv1_1_JHUGen_JESUp, &b_pConst_JJVBF_SIG_ghv1_1_JHUGen_JESUp);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_JHUGen_JESUp", &p_JJVBF_SIG_ghv1_1_JHUGen_JESUp, &b_p_JJVBF_SIG_ghv1_1_JHUGen_JESUp);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1prime2_1E4_JHUGen_JESUp", &p_JJVBF_SIG_ghv1prime2_1E4_JHUGen_JESUp, &b_p_JJVBF_SIG_ghv1prime2_1E4_JHUGen_JESUp);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv2_1_JHUGen_JESUp", &p_JJVBF_SIG_ghv2_1_JHUGen_JESUp, &b_p_JJVBF_SIG_ghv2_1_JHUGen_JESUp);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv4_1_JHUGen_JESUp", &p_JJVBF_SIG_ghv4_1_JHUGen_JESUp, &b_p_JJVBF_SIG_ghv4_1_JHUGen_JESUp);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghza1prime2_1E4_JHUGen_JESUp", &p_JJVBF_SIG_ghza1prime2_1E4_JHUGen_JESUp, &b_p_JJVBF_SIG_ghza1prime2_1E4_JHUGen_JESUp);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghza2_1_JHUGen_JESUp", &p_JJVBF_SIG_ghza2_1_JHUGen_JESUp, &b_p_JJVBF_SIG_ghza2_1_JHUGen_JESUp);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghza4_1_JHUGen_JESUp", &p_JJVBF_SIG_ghza4_1_JHUGen_JESUp, &b_p_JJVBF_SIG_ghza4_1_JHUGen_JESUp);
   fChain->SetBranchAddress("p_JJVBF_SIG_gha2_1_JHUGen_JESUp", &p_JJVBF_SIG_gha2_1_JHUGen_JESUp, &b_p_JJVBF_SIG_gha2_1_JHUGen_JESUp);
   fChain->SetBranchAddress("p_JJVBF_SIG_gha4_1_JHUGen_JESUp", &p_JJVBF_SIG_gha4_1_JHUGen_JESUp, &b_p_JJVBF_SIG_gha4_1_JHUGen_JESUp);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_ghv1prime2_1E4_JHUGen_JESUp", &p_JJVBF_SIG_ghv1_1_ghv1prime2_1E4_JHUGen_JESUp, &b_p_JJVBF_SIG_ghv1_1_ghv1prime2_1E4_JHUGen_JESUp);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_ghv2_1_JHUGen_JESUp", &p_JJVBF_SIG_ghv1_1_ghv2_1_JHUGen_JESUp, &b_p_JJVBF_SIG_ghv1_1_ghv2_1_JHUGen_JESUp);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_ghv4_1_JHUGen_JESUp", &p_JJVBF_SIG_ghv1_1_ghv4_1_JHUGen_JESUp, &b_p_JJVBF_SIG_ghv1_1_ghv4_1_JHUGen_JESUp);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_ghza1prime2_1E4_JHUGen_JESUp", &p_JJVBF_SIG_ghv1_1_ghza1prime2_1E4_JHUGen_JESUp, &b_p_JJVBF_SIG_ghv1_1_ghza1prime2_1E4_JHUGen_JESUp);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_ghza2_1_JHUGen_JESUp", &p_JJVBF_SIG_ghv1_1_ghza2_1_JHUGen_JESUp, &b_p_JJVBF_SIG_ghv1_1_ghza2_1_JHUGen_JESUp);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_ghza4_1_JHUGen_JESUp", &p_JJVBF_SIG_ghv1_1_ghza4_1_JHUGen_JESUp, &b_p_JJVBF_SIG_ghv1_1_ghza4_1_JHUGen_JESUp);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_gha2_1_JHUGen_JESUp", &p_JJVBF_SIG_ghv1_1_gha2_1_JHUGen_JESUp, &b_p_JJVBF_SIG_ghv1_1_gha2_1_JHUGen_JESUp);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_gha4_1_JHUGen_JESUp", &p_JJVBF_SIG_ghv1_1_gha4_1_JHUGen_JESUp, &b_p_JJVBF_SIG_ghv1_1_gha4_1_JHUGen_JESUp);
   fChain->SetBranchAddress("pConst_JJQCD_SIG_ghg2_1_JHUGen_JESUp", &pConst_JJQCD_SIG_ghg2_1_JHUGen_JESUp, &b_pConst_JJQCD_SIG_ghg2_1_JHUGen_JESUp);
   fChain->SetBranchAddress("p_JJQCD_SIG_ghg2_1_JHUGen_JESUp", &p_JJQCD_SIG_ghg2_1_JHUGen_JESUp, &b_p_JJQCD_SIG_ghg2_1_JHUGen_JESUp);
   fChain->SetBranchAddress("p_JJQCD_SIG_ghg4_1_JHUGen_JESUp", &p_JJQCD_SIG_ghg4_1_JHUGen_JESUp, &b_p_JJQCD_SIG_ghg4_1_JHUGen_JESUp);
   fChain->SetBranchAddress("p_JJQCD_SIG_ghg2_1_ghg4_1_JHUGen_JESUp", &p_JJQCD_SIG_ghg2_1_ghg4_1_JHUGen_JESUp, &b_p_JJQCD_SIG_ghg2_1_ghg4_1_JHUGen_JESUp);
   fChain->SetBranchAddress("pConst_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JESUp", &pConst_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JESUp, &b_pConst_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JESUp);
   fChain->SetBranchAddress("p_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JESUp", &p_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JESUp, &b_p_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JESUp);
   fChain->SetBranchAddress("p_JJQCD_InitialQQ_SIG_ghg4_1_JHUGen_JESUp", &p_JJQCD_InitialQQ_SIG_ghg4_1_JHUGen_JESUp, &b_p_JJQCD_InitialQQ_SIG_ghg4_1_JHUGen_JESUp);
   fChain->SetBranchAddress("p_JJQCD_InitialQQ_SIG_ghg2_1_ghg4_1_JHUGen_JESUp", &p_JJQCD_InitialQQ_SIG_ghg2_1_ghg4_1_JHUGen_JESUp, &b_p_JJQCD_InitialQQ_SIG_ghg2_1_ghg4_1_JHUGen_JESUp);
   fChain->SetBranchAddress("pConst_HadZH_SIG_ghz1_1_JHUGen_JESUp", &pConst_HadZH_SIG_ghz1_1_JHUGen_JESUp, &b_pConst_HadZH_SIG_ghz1_1_JHUGen_JESUp);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_JHUGen_JESUp", &p_HadZH_SIG_ghz1_1_JHUGen_JESUp, &b_p_HadZH_SIG_ghz1_1_JHUGen_JESUp);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1prime2_1E4_JHUGen_JESUp", &p_HadZH_SIG_ghz1prime2_1E4_JHUGen_JESUp, &b_p_HadZH_SIG_ghz1prime2_1E4_JHUGen_JESUp);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz2_1_JHUGen_JESUp", &p_HadZH_SIG_ghz2_1_JHUGen_JESUp, &b_p_HadZH_SIG_ghz2_1_JHUGen_JESUp);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz4_1_JHUGen_JESUp", &p_HadZH_SIG_ghz4_1_JHUGen_JESUp, &b_p_HadZH_SIG_ghz4_1_JHUGen_JESUp);
   fChain->SetBranchAddress("p_HadZH_SIG_ghza1prime2_1E4_JHUGen_JESUp", &p_HadZH_SIG_ghza1prime2_1E4_JHUGen_JESUp, &b_p_HadZH_SIG_ghza1prime2_1E4_JHUGen_JESUp);
   fChain->SetBranchAddress("p_HadZH_SIG_ghza2_1_JHUGen_JESUp", &p_HadZH_SIG_ghza2_1_JHUGen_JESUp, &b_p_HadZH_SIG_ghza2_1_JHUGen_JESUp);
   fChain->SetBranchAddress("p_HadZH_SIG_ghza4_1_JHUGen_JESUp", &p_HadZH_SIG_ghza4_1_JHUGen_JESUp, &b_p_HadZH_SIG_ghza4_1_JHUGen_JESUp);
   fChain->SetBranchAddress("p_HadZH_SIG_gha2_1_JHUGen_JESUp", &p_HadZH_SIG_gha2_1_JHUGen_JESUp, &b_p_HadZH_SIG_gha2_1_JHUGen_JESUp);
   fChain->SetBranchAddress("p_HadZH_SIG_gha4_1_JHUGen_JESUp", &p_HadZH_SIG_gha4_1_JHUGen_JESUp, &b_p_HadZH_SIG_gha4_1_JHUGen_JESUp);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_ghz1prime2_1E4_JHUGen_JESUp", &p_HadZH_SIG_ghz1_1_ghz1prime2_1E4_JHUGen_JESUp, &b_p_HadZH_SIG_ghz1_1_ghz1prime2_1E4_JHUGen_JESUp);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_ghz2_1_JHUGen_JESUp", &p_HadZH_SIG_ghz1_1_ghz2_1_JHUGen_JESUp, &b_p_HadZH_SIG_ghz1_1_ghz2_1_JHUGen_JESUp);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_ghz4_1_JHUGen_JESUp", &p_HadZH_SIG_ghz1_1_ghz4_1_JHUGen_JESUp, &b_p_HadZH_SIG_ghz1_1_ghz4_1_JHUGen_JESUp);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_ghza1prime2_1E4_JHUGen_JESUp", &p_HadZH_SIG_ghz1_1_ghza1prime2_1E4_JHUGen_JESUp, &b_p_HadZH_SIG_ghz1_1_ghza1prime2_1E4_JHUGen_JESUp);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_ghza2_1_JHUGen_JESUp", &p_HadZH_SIG_ghz1_1_ghza2_1_JHUGen_JESUp, &b_p_HadZH_SIG_ghz1_1_ghza2_1_JHUGen_JESUp);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_ghza4_1_JHUGen_JESUp", &p_HadZH_SIG_ghz1_1_ghza4_1_JHUGen_JESUp, &b_p_HadZH_SIG_ghz1_1_ghza4_1_JHUGen_JESUp);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_gha2_1_JHUGen_JESUp", &p_HadZH_SIG_ghz1_1_gha2_1_JHUGen_JESUp, &b_p_HadZH_SIG_ghz1_1_gha2_1_JHUGen_JESUp);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_gha4_1_JHUGen_JESUp", &p_HadZH_SIG_ghz1_1_gha4_1_JHUGen_JESUp, &b_p_HadZH_SIG_ghz1_1_gha4_1_JHUGen_JESUp);
   fChain->SetBranchAddress("pConst_HadWH_SIG_ghw1_1_JHUGen_JESUp", &pConst_HadWH_SIG_ghw1_1_JHUGen_JESUp, &b_pConst_HadWH_SIG_ghw1_1_JHUGen_JESUp);
   fChain->SetBranchAddress("p_HadWH_SIG_ghw1_1_JHUGen_JESUp", &p_HadWH_SIG_ghw1_1_JHUGen_JESUp, &b_p_HadWH_SIG_ghw1_1_JHUGen_JESUp);
   fChain->SetBranchAddress("p_HadWH_SIG_ghw1prime2_1E4_JHUGen_JESUp", &p_HadWH_SIG_ghw1prime2_1E4_JHUGen_JESUp, &b_p_HadWH_SIG_ghw1prime2_1E4_JHUGen_JESUp);
   fChain->SetBranchAddress("p_HadWH_SIG_ghw2_1_JHUGen_JESUp", &p_HadWH_SIG_ghw2_1_JHUGen_JESUp, &b_p_HadWH_SIG_ghw2_1_JHUGen_JESUp);
   fChain->SetBranchAddress("p_HadWH_SIG_ghw4_1_JHUGen_JESUp", &p_HadWH_SIG_ghw4_1_JHUGen_JESUp, &b_p_HadWH_SIG_ghw4_1_JHUGen_JESUp);
   fChain->SetBranchAddress("p_HadWH_SIG_ghw1_1_ghw1prime2_1E4_JHUGen_JESUp", &p_HadWH_SIG_ghw1_1_ghw1prime2_1E4_JHUGen_JESUp, &b_p_HadWH_SIG_ghw1_1_ghw1prime2_1E4_JHUGen_JESUp);
   fChain->SetBranchAddress("p_HadWH_SIG_ghw1_1_ghw2_1_JHUGen_JESUp", &p_HadWH_SIG_ghw1_1_ghw2_1_JHUGen_JESUp, &b_p_HadWH_SIG_ghw1_1_ghw2_1_JHUGen_JESUp);
   fChain->SetBranchAddress("p_HadWH_SIG_ghw1_1_ghw4_1_JHUGen_JESUp", &p_HadWH_SIG_ghw1_1_ghw4_1_JHUGen_JESUp, &b_p_HadWH_SIG_ghw1_1_ghw4_1_JHUGen_JESUp);
   fChain->SetBranchAddress("p_ttHUndecayed_SIG_kappa_1_JHUGen_JESUp", &p_ttHUndecayed_SIG_kappa_1_JHUGen_JESUp, &b_p_ttHUndecayed_SIG_kappa_1_JHUGen_JESUp);
   fChain->SetBranchAddress("p_ttHUndecayed_SIG_kappatilde_1_JHUGen_JESUp", &p_ttHUndecayed_SIG_kappatilde_1_JHUGen_JESUp, &b_p_ttHUndecayed_SIG_kappatilde_1_JHUGen_JESUp);
   fChain->SetBranchAddress("p_ttHUndecayed_SIG_kappa_1_kappatilde_1_JHUGen_JESUp", &p_ttHUndecayed_SIG_kappa_1_kappatilde_1_JHUGen_JESUp, &b_p_ttHUndecayed_SIG_kappa_1_kappatilde_1_JHUGen_JESUp);
   fChain->SetBranchAddress("p_bbH_SIG_kappa_1_JHUGen_JESUp", &p_bbH_SIG_kappa_1_JHUGen_JESUp, &b_p_bbH_SIG_kappa_1_JHUGen_JESUp);
   fChain->SetBranchAddress("pAux_JVBF_SIG_ghv1_1_JHUGen_JESDn", &pAux_JVBF_SIG_ghv1_1_JHUGen_JESDn, &b_pAux_JVBF_SIG_ghv1_1_JHUGen_JESDn);
   fChain->SetBranchAddress("p_JVBF_SIG_ghv1_1_JHUGen_JESDn", &p_JVBF_SIG_ghv1_1_JHUGen_JESDn, &b_p_JVBF_SIG_ghv1_1_JHUGen_JESDn);
   fChain->SetBranchAddress("pConst_JQCD_SIG_ghg2_1_JHUGen_JESDn", &pConst_JQCD_SIG_ghg2_1_JHUGen_JESDn, &b_pConst_JQCD_SIG_ghg2_1_JHUGen_JESDn);
   fChain->SetBranchAddress("p_JQCD_SIG_ghg2_1_JHUGen_JESDn", &p_JQCD_SIG_ghg2_1_JHUGen_JESDn, &b_p_JQCD_SIG_ghg2_1_JHUGen_JESDn);
   fChain->SetBranchAddress("pConst_JJVBF_SIG_ghv1_1_JHUGen_JESDn", &pConst_JJVBF_SIG_ghv1_1_JHUGen_JESDn, &b_pConst_JJVBF_SIG_ghv1_1_JHUGen_JESDn);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_JHUGen_JESDn", &p_JJVBF_SIG_ghv1_1_JHUGen_JESDn, &b_p_JJVBF_SIG_ghv1_1_JHUGen_JESDn);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1prime2_1E4_JHUGen_JESDn", &p_JJVBF_SIG_ghv1prime2_1E4_JHUGen_JESDn, &b_p_JJVBF_SIG_ghv1prime2_1E4_JHUGen_JESDn);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv2_1_JHUGen_JESDn", &p_JJVBF_SIG_ghv2_1_JHUGen_JESDn, &b_p_JJVBF_SIG_ghv2_1_JHUGen_JESDn);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv4_1_JHUGen_JESDn", &p_JJVBF_SIG_ghv4_1_JHUGen_JESDn, &b_p_JJVBF_SIG_ghv4_1_JHUGen_JESDn);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghza1prime2_1E4_JHUGen_JESDn", &p_JJVBF_SIG_ghza1prime2_1E4_JHUGen_JESDn, &b_p_JJVBF_SIG_ghza1prime2_1E4_JHUGen_JESDn);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghza2_1_JHUGen_JESDn", &p_JJVBF_SIG_ghza2_1_JHUGen_JESDn, &b_p_JJVBF_SIG_ghza2_1_JHUGen_JESDn);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghza4_1_JHUGen_JESDn", &p_JJVBF_SIG_ghza4_1_JHUGen_JESDn, &b_p_JJVBF_SIG_ghza4_1_JHUGen_JESDn);
   fChain->SetBranchAddress("p_JJVBF_SIG_gha2_1_JHUGen_JESDn", &p_JJVBF_SIG_gha2_1_JHUGen_JESDn, &b_p_JJVBF_SIG_gha2_1_JHUGen_JESDn);
   fChain->SetBranchAddress("p_JJVBF_SIG_gha4_1_JHUGen_JESDn", &p_JJVBF_SIG_gha4_1_JHUGen_JESDn, &b_p_JJVBF_SIG_gha4_1_JHUGen_JESDn);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_ghv1prime2_1E4_JHUGen_JESDn", &p_JJVBF_SIG_ghv1_1_ghv1prime2_1E4_JHUGen_JESDn, &b_p_JJVBF_SIG_ghv1_1_ghv1prime2_1E4_JHUGen_JESDn);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_ghv2_1_JHUGen_JESDn", &p_JJVBF_SIG_ghv1_1_ghv2_1_JHUGen_JESDn, &b_p_JJVBF_SIG_ghv1_1_ghv2_1_JHUGen_JESDn);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_ghv4_1_JHUGen_JESDn", &p_JJVBF_SIG_ghv1_1_ghv4_1_JHUGen_JESDn, &b_p_JJVBF_SIG_ghv1_1_ghv4_1_JHUGen_JESDn);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_ghza1prime2_1E4_JHUGen_JESDn", &p_JJVBF_SIG_ghv1_1_ghza1prime2_1E4_JHUGen_JESDn, &b_p_JJVBF_SIG_ghv1_1_ghza1prime2_1E4_JHUGen_JESDn);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_ghza2_1_JHUGen_JESDn", &p_JJVBF_SIG_ghv1_1_ghza2_1_JHUGen_JESDn, &b_p_JJVBF_SIG_ghv1_1_ghza2_1_JHUGen_JESDn);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_ghza4_1_JHUGen_JESDn", &p_JJVBF_SIG_ghv1_1_ghza4_1_JHUGen_JESDn, &b_p_JJVBF_SIG_ghv1_1_ghza4_1_JHUGen_JESDn);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_gha2_1_JHUGen_JESDn", &p_JJVBF_SIG_ghv1_1_gha2_1_JHUGen_JESDn, &b_p_JJVBF_SIG_ghv1_1_gha2_1_JHUGen_JESDn);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_gha4_1_JHUGen_JESDn", &p_JJVBF_SIG_ghv1_1_gha4_1_JHUGen_JESDn, &b_p_JJVBF_SIG_ghv1_1_gha4_1_JHUGen_JESDn);
   fChain->SetBranchAddress("pConst_JJQCD_SIG_ghg2_1_JHUGen_JESDn", &pConst_JJQCD_SIG_ghg2_1_JHUGen_JESDn, &b_pConst_JJQCD_SIG_ghg2_1_JHUGen_JESDn);
   fChain->SetBranchAddress("p_JJQCD_SIG_ghg2_1_JHUGen_JESDn", &p_JJQCD_SIG_ghg2_1_JHUGen_JESDn, &b_p_JJQCD_SIG_ghg2_1_JHUGen_JESDn);
   fChain->SetBranchAddress("p_JJQCD_SIG_ghg4_1_JHUGen_JESDn", &p_JJQCD_SIG_ghg4_1_JHUGen_JESDn, &b_p_JJQCD_SIG_ghg4_1_JHUGen_JESDn);
   fChain->SetBranchAddress("p_JJQCD_SIG_ghg2_1_ghg4_1_JHUGen_JESDn", &p_JJQCD_SIG_ghg2_1_ghg4_1_JHUGen_JESDn, &b_p_JJQCD_SIG_ghg2_1_ghg4_1_JHUGen_JESDn);
   fChain->SetBranchAddress("pConst_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JESDn", &pConst_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JESDn, &b_pConst_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JESDn);
   fChain->SetBranchAddress("p_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JESDn", &p_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JESDn, &b_p_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JESDn);
   fChain->SetBranchAddress("p_JJQCD_InitialQQ_SIG_ghg4_1_JHUGen_JESDn", &p_JJQCD_InitialQQ_SIG_ghg4_1_JHUGen_JESDn, &b_p_JJQCD_InitialQQ_SIG_ghg4_1_JHUGen_JESDn);
   fChain->SetBranchAddress("p_JJQCD_InitialQQ_SIG_ghg2_1_ghg4_1_JHUGen_JESDn", &p_JJQCD_InitialQQ_SIG_ghg2_1_ghg4_1_JHUGen_JESDn, &b_p_JJQCD_InitialQQ_SIG_ghg2_1_ghg4_1_JHUGen_JESDn);
   fChain->SetBranchAddress("pConst_HadZH_SIG_ghz1_1_JHUGen_JESDn", &pConst_HadZH_SIG_ghz1_1_JHUGen_JESDn, &b_pConst_HadZH_SIG_ghz1_1_JHUGen_JESDn);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_JHUGen_JESDn", &p_HadZH_SIG_ghz1_1_JHUGen_JESDn, &b_p_HadZH_SIG_ghz1_1_JHUGen_JESDn);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1prime2_1E4_JHUGen_JESDn", &p_HadZH_SIG_ghz1prime2_1E4_JHUGen_JESDn, &b_p_HadZH_SIG_ghz1prime2_1E4_JHUGen_JESDn);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz2_1_JHUGen_JESDn", &p_HadZH_SIG_ghz2_1_JHUGen_JESDn, &b_p_HadZH_SIG_ghz2_1_JHUGen_JESDn);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz4_1_JHUGen_JESDn", &p_HadZH_SIG_ghz4_1_JHUGen_JESDn, &b_p_HadZH_SIG_ghz4_1_JHUGen_JESDn);
   fChain->SetBranchAddress("p_HadZH_SIG_ghza1prime2_1E4_JHUGen_JESDn", &p_HadZH_SIG_ghza1prime2_1E4_JHUGen_JESDn, &b_p_HadZH_SIG_ghza1prime2_1E4_JHUGen_JESDn);
   fChain->SetBranchAddress("p_HadZH_SIG_ghza2_1_JHUGen_JESDn", &p_HadZH_SIG_ghza2_1_JHUGen_JESDn, &b_p_HadZH_SIG_ghza2_1_JHUGen_JESDn);
   fChain->SetBranchAddress("p_HadZH_SIG_ghza4_1_JHUGen_JESDn", &p_HadZH_SIG_ghza4_1_JHUGen_JESDn, &b_p_HadZH_SIG_ghza4_1_JHUGen_JESDn);
   fChain->SetBranchAddress("p_HadZH_SIG_gha2_1_JHUGen_JESDn", &p_HadZH_SIG_gha2_1_JHUGen_JESDn, &b_p_HadZH_SIG_gha2_1_JHUGen_JESDn);
   fChain->SetBranchAddress("p_HadZH_SIG_gha4_1_JHUGen_JESDn", &p_HadZH_SIG_gha4_1_JHUGen_JESDn, &b_p_HadZH_SIG_gha4_1_JHUGen_JESDn);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_ghz1prime2_1E4_JHUGen_JESDn", &p_HadZH_SIG_ghz1_1_ghz1prime2_1E4_JHUGen_JESDn, &b_p_HadZH_SIG_ghz1_1_ghz1prime2_1E4_JHUGen_JESDn);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_ghz2_1_JHUGen_JESDn", &p_HadZH_SIG_ghz1_1_ghz2_1_JHUGen_JESDn, &b_p_HadZH_SIG_ghz1_1_ghz2_1_JHUGen_JESDn);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_ghz4_1_JHUGen_JESDn", &p_HadZH_SIG_ghz1_1_ghz4_1_JHUGen_JESDn, &b_p_HadZH_SIG_ghz1_1_ghz4_1_JHUGen_JESDn);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_ghza1prime2_1E4_JHUGen_JESDn", &p_HadZH_SIG_ghz1_1_ghza1prime2_1E4_JHUGen_JESDn, &b_p_HadZH_SIG_ghz1_1_ghza1prime2_1E4_JHUGen_JESDn);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_ghza2_1_JHUGen_JESDn", &p_HadZH_SIG_ghz1_1_ghza2_1_JHUGen_JESDn, &b_p_HadZH_SIG_ghz1_1_ghza2_1_JHUGen_JESDn);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_ghza4_1_JHUGen_JESDn", &p_HadZH_SIG_ghz1_1_ghza4_1_JHUGen_JESDn, &b_p_HadZH_SIG_ghz1_1_ghza4_1_JHUGen_JESDn);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_gha2_1_JHUGen_JESDn", &p_HadZH_SIG_ghz1_1_gha2_1_JHUGen_JESDn, &b_p_HadZH_SIG_ghz1_1_gha2_1_JHUGen_JESDn);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_gha4_1_JHUGen_JESDn", &p_HadZH_SIG_ghz1_1_gha4_1_JHUGen_JESDn, &b_p_HadZH_SIG_ghz1_1_gha4_1_JHUGen_JESDn);
   fChain->SetBranchAddress("pConst_HadWH_SIG_ghw1_1_JHUGen_JESDn", &pConst_HadWH_SIG_ghw1_1_JHUGen_JESDn, &b_pConst_HadWH_SIG_ghw1_1_JHUGen_JESDn);
   fChain->SetBranchAddress("p_HadWH_SIG_ghw1_1_JHUGen_JESDn", &p_HadWH_SIG_ghw1_1_JHUGen_JESDn, &b_p_HadWH_SIG_ghw1_1_JHUGen_JESDn);
   fChain->SetBranchAddress("p_HadWH_SIG_ghw1prime2_1E4_JHUGen_JESDn", &p_HadWH_SIG_ghw1prime2_1E4_JHUGen_JESDn, &b_p_HadWH_SIG_ghw1prime2_1E4_JHUGen_JESDn);
   fChain->SetBranchAddress("p_HadWH_SIG_ghw2_1_JHUGen_JESDn", &p_HadWH_SIG_ghw2_1_JHUGen_JESDn, &b_p_HadWH_SIG_ghw2_1_JHUGen_JESDn);
   fChain->SetBranchAddress("p_HadWH_SIG_ghw4_1_JHUGen_JESDn", &p_HadWH_SIG_ghw4_1_JHUGen_JESDn, &b_p_HadWH_SIG_ghw4_1_JHUGen_JESDn);
   fChain->SetBranchAddress("p_HadWH_SIG_ghw1_1_ghw1prime2_1E4_JHUGen_JESDn", &p_HadWH_SIG_ghw1_1_ghw1prime2_1E4_JHUGen_JESDn, &b_p_HadWH_SIG_ghw1_1_ghw1prime2_1E4_JHUGen_JESDn);
   fChain->SetBranchAddress("p_HadWH_SIG_ghw1_1_ghw2_1_JHUGen_JESDn", &p_HadWH_SIG_ghw1_1_ghw2_1_JHUGen_JESDn, &b_p_HadWH_SIG_ghw1_1_ghw2_1_JHUGen_JESDn);
   fChain->SetBranchAddress("p_HadWH_SIG_ghw1_1_ghw4_1_JHUGen_JESDn", &p_HadWH_SIG_ghw1_1_ghw4_1_JHUGen_JESDn, &b_p_HadWH_SIG_ghw1_1_ghw4_1_JHUGen_JESDn);
   fChain->SetBranchAddress("p_ttHUndecayed_SIG_kappa_1_JHUGen_JESDn", &p_ttHUndecayed_SIG_kappa_1_JHUGen_JESDn, &b_p_ttHUndecayed_SIG_kappa_1_JHUGen_JESDn);
   fChain->SetBranchAddress("p_ttHUndecayed_SIG_kappatilde_1_JHUGen_JESDn", &p_ttHUndecayed_SIG_kappatilde_1_JHUGen_JESDn, &b_p_ttHUndecayed_SIG_kappatilde_1_JHUGen_JESDn);
   fChain->SetBranchAddress("p_ttHUndecayed_SIG_kappa_1_kappatilde_1_JHUGen_JESDn", &p_ttHUndecayed_SIG_kappa_1_kappatilde_1_JHUGen_JESDn, &b_p_ttHUndecayed_SIG_kappa_1_kappatilde_1_JHUGen_JESDn);
   fChain->SetBranchAddress("p_bbH_SIG_kappa_1_JHUGen_JESDn", &p_bbH_SIG_kappa_1_JHUGen_JESDn, &b_p_bbH_SIG_kappa_1_JHUGen_JESDn);
   fChain->SetBranchAddress("pAux_JVBF_SIG_ghv1_1_JHUGen_JERUp", &pAux_JVBF_SIG_ghv1_1_JHUGen_JERUp, &b_pAux_JVBF_SIG_ghv1_1_JHUGen_JERUp);
   fChain->SetBranchAddress("p_JVBF_SIG_ghv1_1_JHUGen_JERUp", &p_JVBF_SIG_ghv1_1_JHUGen_JERUp, &b_p_JVBF_SIG_ghv1_1_JHUGen_JERUp);
   fChain->SetBranchAddress("pConst_JQCD_SIG_ghg2_1_JHUGen_JERUp", &pConst_JQCD_SIG_ghg2_1_JHUGen_JERUp, &b_pConst_JQCD_SIG_ghg2_1_JHUGen_JERUp);
   fChain->SetBranchAddress("p_JQCD_SIG_ghg2_1_JHUGen_JERUp", &p_JQCD_SIG_ghg2_1_JHUGen_JERUp, &b_p_JQCD_SIG_ghg2_1_JHUGen_JERUp);
   fChain->SetBranchAddress("pConst_JJVBF_SIG_ghv1_1_JHUGen_JERUp", &pConst_JJVBF_SIG_ghv1_1_JHUGen_JERUp, &b_pConst_JJVBF_SIG_ghv1_1_JHUGen_JERUp);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_JHUGen_JERUp", &p_JJVBF_SIG_ghv1_1_JHUGen_JERUp, &b_p_JJVBF_SIG_ghv1_1_JHUGen_JERUp);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1prime2_1E4_JHUGen_JERUp", &p_JJVBF_SIG_ghv1prime2_1E4_JHUGen_JERUp, &b_p_JJVBF_SIG_ghv1prime2_1E4_JHUGen_JERUp);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv2_1_JHUGen_JERUp", &p_JJVBF_SIG_ghv2_1_JHUGen_JERUp, &b_p_JJVBF_SIG_ghv2_1_JHUGen_JERUp);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv4_1_JHUGen_JERUp", &p_JJVBF_SIG_ghv4_1_JHUGen_JERUp, &b_p_JJVBF_SIG_ghv4_1_JHUGen_JERUp);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghza1prime2_1E4_JHUGen_JERUp", &p_JJVBF_SIG_ghza1prime2_1E4_JHUGen_JERUp, &b_p_JJVBF_SIG_ghza1prime2_1E4_JHUGen_JERUp);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghza2_1_JHUGen_JERUp", &p_JJVBF_SIG_ghza2_1_JHUGen_JERUp, &b_p_JJVBF_SIG_ghza2_1_JHUGen_JERUp);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghza4_1_JHUGen_JERUp", &p_JJVBF_SIG_ghza4_1_JHUGen_JERUp, &b_p_JJVBF_SIG_ghza4_1_JHUGen_JERUp);
   fChain->SetBranchAddress("p_JJVBF_SIG_gha2_1_JHUGen_JERUp", &p_JJVBF_SIG_gha2_1_JHUGen_JERUp, &b_p_JJVBF_SIG_gha2_1_JHUGen_JERUp);
   fChain->SetBranchAddress("p_JJVBF_SIG_gha4_1_JHUGen_JERUp", &p_JJVBF_SIG_gha4_1_JHUGen_JERUp, &b_p_JJVBF_SIG_gha4_1_JHUGen_JERUp);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_ghv1prime2_1E4_JHUGen_JERUp", &p_JJVBF_SIG_ghv1_1_ghv1prime2_1E4_JHUGen_JERUp, &b_p_JJVBF_SIG_ghv1_1_ghv1prime2_1E4_JHUGen_JERUp);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_ghv2_1_JHUGen_JERUp", &p_JJVBF_SIG_ghv1_1_ghv2_1_JHUGen_JERUp, &b_p_JJVBF_SIG_ghv1_1_ghv2_1_JHUGen_JERUp);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_ghv4_1_JHUGen_JERUp", &p_JJVBF_SIG_ghv1_1_ghv4_1_JHUGen_JERUp, &b_p_JJVBF_SIG_ghv1_1_ghv4_1_JHUGen_JERUp);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_ghza1prime2_1E4_JHUGen_JERUp", &p_JJVBF_SIG_ghv1_1_ghza1prime2_1E4_JHUGen_JERUp, &b_p_JJVBF_SIG_ghv1_1_ghza1prime2_1E4_JHUGen_JERUp);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_ghza2_1_JHUGen_JERUp", &p_JJVBF_SIG_ghv1_1_ghza2_1_JHUGen_JERUp, &b_p_JJVBF_SIG_ghv1_1_ghza2_1_JHUGen_JERUp);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_ghza4_1_JHUGen_JERUp", &p_JJVBF_SIG_ghv1_1_ghza4_1_JHUGen_JERUp, &b_p_JJVBF_SIG_ghv1_1_ghza4_1_JHUGen_JERUp);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_gha2_1_JHUGen_JERUp", &p_JJVBF_SIG_ghv1_1_gha2_1_JHUGen_JERUp, &b_p_JJVBF_SIG_ghv1_1_gha2_1_JHUGen_JERUp);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_gha4_1_JHUGen_JERUp", &p_JJVBF_SIG_ghv1_1_gha4_1_JHUGen_JERUp, &b_p_JJVBF_SIG_ghv1_1_gha4_1_JHUGen_JERUp);
   fChain->SetBranchAddress("pConst_JJQCD_SIG_ghg2_1_JHUGen_JERUp", &pConst_JJQCD_SIG_ghg2_1_JHUGen_JERUp, &b_pConst_JJQCD_SIG_ghg2_1_JHUGen_JERUp);
   fChain->SetBranchAddress("p_JJQCD_SIG_ghg2_1_JHUGen_JERUp", &p_JJQCD_SIG_ghg2_1_JHUGen_JERUp, &b_p_JJQCD_SIG_ghg2_1_JHUGen_JERUp);
   fChain->SetBranchAddress("p_JJQCD_SIG_ghg4_1_JHUGen_JERUp", &p_JJQCD_SIG_ghg4_1_JHUGen_JERUp, &b_p_JJQCD_SIG_ghg4_1_JHUGen_JERUp);
   fChain->SetBranchAddress("p_JJQCD_SIG_ghg2_1_ghg4_1_JHUGen_JERUp", &p_JJQCD_SIG_ghg2_1_ghg4_1_JHUGen_JERUp, &b_p_JJQCD_SIG_ghg2_1_ghg4_1_JHUGen_JERUp);
   fChain->SetBranchAddress("pConst_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JERUp", &pConst_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JERUp, &b_pConst_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JERUp);
   fChain->SetBranchAddress("p_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JERUp", &p_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JERUp, &b_p_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JERUp);
   fChain->SetBranchAddress("p_JJQCD_InitialQQ_SIG_ghg4_1_JHUGen_JERUp", &p_JJQCD_InitialQQ_SIG_ghg4_1_JHUGen_JERUp, &b_p_JJQCD_InitialQQ_SIG_ghg4_1_JHUGen_JERUp);
   fChain->SetBranchAddress("p_JJQCD_InitialQQ_SIG_ghg2_1_ghg4_1_JHUGen_JERUp", &p_JJQCD_InitialQQ_SIG_ghg2_1_ghg4_1_JHUGen_JERUp, &b_p_JJQCD_InitialQQ_SIG_ghg2_1_ghg4_1_JHUGen_JERUp);
   fChain->SetBranchAddress("pConst_HadZH_SIG_ghz1_1_JHUGen_JERUp", &pConst_HadZH_SIG_ghz1_1_JHUGen_JERUp, &b_pConst_HadZH_SIG_ghz1_1_JHUGen_JERUp);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_JHUGen_JERUp", &p_HadZH_SIG_ghz1_1_JHUGen_JERUp, &b_p_HadZH_SIG_ghz1_1_JHUGen_JERUp);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1prime2_1E4_JHUGen_JERUp", &p_HadZH_SIG_ghz1prime2_1E4_JHUGen_JERUp, &b_p_HadZH_SIG_ghz1prime2_1E4_JHUGen_JERUp);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz2_1_JHUGen_JERUp", &p_HadZH_SIG_ghz2_1_JHUGen_JERUp, &b_p_HadZH_SIG_ghz2_1_JHUGen_JERUp);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz4_1_JHUGen_JERUp", &p_HadZH_SIG_ghz4_1_JHUGen_JERUp, &b_p_HadZH_SIG_ghz4_1_JHUGen_JERUp);
   fChain->SetBranchAddress("p_HadZH_SIG_ghza1prime2_1E4_JHUGen_JERUp", &p_HadZH_SIG_ghza1prime2_1E4_JHUGen_JERUp, &b_p_HadZH_SIG_ghza1prime2_1E4_JHUGen_JERUp);
   fChain->SetBranchAddress("p_HadZH_SIG_ghza2_1_JHUGen_JERUp", &p_HadZH_SIG_ghza2_1_JHUGen_JERUp, &b_p_HadZH_SIG_ghza2_1_JHUGen_JERUp);
   fChain->SetBranchAddress("p_HadZH_SIG_ghza4_1_JHUGen_JERUp", &p_HadZH_SIG_ghza4_1_JHUGen_JERUp, &b_p_HadZH_SIG_ghza4_1_JHUGen_JERUp);
   fChain->SetBranchAddress("p_HadZH_SIG_gha2_1_JHUGen_JERUp", &p_HadZH_SIG_gha2_1_JHUGen_JERUp, &b_p_HadZH_SIG_gha2_1_JHUGen_JERUp);
   fChain->SetBranchAddress("p_HadZH_SIG_gha4_1_JHUGen_JERUp", &p_HadZH_SIG_gha4_1_JHUGen_JERUp, &b_p_HadZH_SIG_gha4_1_JHUGen_JERUp);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_ghz1prime2_1E4_JHUGen_JERUp", &p_HadZH_SIG_ghz1_1_ghz1prime2_1E4_JHUGen_JERUp, &b_p_HadZH_SIG_ghz1_1_ghz1prime2_1E4_JHUGen_JERUp);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_ghz2_1_JHUGen_JERUp", &p_HadZH_SIG_ghz1_1_ghz2_1_JHUGen_JERUp, &b_p_HadZH_SIG_ghz1_1_ghz2_1_JHUGen_JERUp);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_ghz4_1_JHUGen_JERUp", &p_HadZH_SIG_ghz1_1_ghz4_1_JHUGen_JERUp, &b_p_HadZH_SIG_ghz1_1_ghz4_1_JHUGen_JERUp);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_ghza1prime2_1E4_JHUGen_JERUp", &p_HadZH_SIG_ghz1_1_ghza1prime2_1E4_JHUGen_JERUp, &b_p_HadZH_SIG_ghz1_1_ghza1prime2_1E4_JHUGen_JERUp);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_ghza2_1_JHUGen_JERUp", &p_HadZH_SIG_ghz1_1_ghza2_1_JHUGen_JERUp, &b_p_HadZH_SIG_ghz1_1_ghza2_1_JHUGen_JERUp);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_ghza4_1_JHUGen_JERUp", &p_HadZH_SIG_ghz1_1_ghza4_1_JHUGen_JERUp, &b_p_HadZH_SIG_ghz1_1_ghza4_1_JHUGen_JERUp);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_gha2_1_JHUGen_JERUp", &p_HadZH_SIG_ghz1_1_gha2_1_JHUGen_JERUp, &b_p_HadZH_SIG_ghz1_1_gha2_1_JHUGen_JERUp);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_gha4_1_JHUGen_JERUp", &p_HadZH_SIG_ghz1_1_gha4_1_JHUGen_JERUp, &b_p_HadZH_SIG_ghz1_1_gha4_1_JHUGen_JERUp);
   fChain->SetBranchAddress("pConst_HadWH_SIG_ghw1_1_JHUGen_JERUp", &pConst_HadWH_SIG_ghw1_1_JHUGen_JERUp, &b_pConst_HadWH_SIG_ghw1_1_JHUGen_JERUp);
   fChain->SetBranchAddress("p_HadWH_SIG_ghw1_1_JHUGen_JERUp", &p_HadWH_SIG_ghw1_1_JHUGen_JERUp, &b_p_HadWH_SIG_ghw1_1_JHUGen_JERUp);
   fChain->SetBranchAddress("p_HadWH_SIG_ghw1prime2_1E4_JHUGen_JERUp", &p_HadWH_SIG_ghw1prime2_1E4_JHUGen_JERUp, &b_p_HadWH_SIG_ghw1prime2_1E4_JHUGen_JERUp);
   fChain->SetBranchAddress("p_HadWH_SIG_ghw2_1_JHUGen_JERUp", &p_HadWH_SIG_ghw2_1_JHUGen_JERUp, &b_p_HadWH_SIG_ghw2_1_JHUGen_JERUp);
   fChain->SetBranchAddress("p_HadWH_SIG_ghw4_1_JHUGen_JERUp", &p_HadWH_SIG_ghw4_1_JHUGen_JERUp, &b_p_HadWH_SIG_ghw4_1_JHUGen_JERUp);
   fChain->SetBranchAddress("p_HadWH_SIG_ghw1_1_ghw1prime2_1E4_JHUGen_JERUp", &p_HadWH_SIG_ghw1_1_ghw1prime2_1E4_JHUGen_JERUp, &b_p_HadWH_SIG_ghw1_1_ghw1prime2_1E4_JHUGen_JERUp);
   fChain->SetBranchAddress("p_HadWH_SIG_ghw1_1_ghw2_1_JHUGen_JERUp", &p_HadWH_SIG_ghw1_1_ghw2_1_JHUGen_JERUp, &b_p_HadWH_SIG_ghw1_1_ghw2_1_JHUGen_JERUp);
   fChain->SetBranchAddress("p_HadWH_SIG_ghw1_1_ghw4_1_JHUGen_JERUp", &p_HadWH_SIG_ghw1_1_ghw4_1_JHUGen_JERUp, &b_p_HadWH_SIG_ghw1_1_ghw4_1_JHUGen_JERUp);
   fChain->SetBranchAddress("p_ttHUndecayed_SIG_kappa_1_JHUGen_JERUp", &p_ttHUndecayed_SIG_kappa_1_JHUGen_JERUp, &b_p_ttHUndecayed_SIG_kappa_1_JHUGen_JERUp);
   fChain->SetBranchAddress("p_ttHUndecayed_SIG_kappatilde_1_JHUGen_JERUp", &p_ttHUndecayed_SIG_kappatilde_1_JHUGen_JERUp, &b_p_ttHUndecayed_SIG_kappatilde_1_JHUGen_JERUp);
   fChain->SetBranchAddress("p_ttHUndecayed_SIG_kappa_1_kappatilde_1_JHUGen_JERUp", &p_ttHUndecayed_SIG_kappa_1_kappatilde_1_JHUGen_JERUp, &b_p_ttHUndecayed_SIG_kappa_1_kappatilde_1_JHUGen_JERUp);
   fChain->SetBranchAddress("p_bbH_SIG_kappa_1_JHUGen_JERUp", &p_bbH_SIG_kappa_1_JHUGen_JERUp, &b_p_bbH_SIG_kappa_1_JHUGen_JERUp);
   fChain->SetBranchAddress("pAux_JVBF_SIG_ghv1_1_JHUGen_JERDn", &pAux_JVBF_SIG_ghv1_1_JHUGen_JERDn, &b_pAux_JVBF_SIG_ghv1_1_JHUGen_JERDn);
   fChain->SetBranchAddress("p_JVBF_SIG_ghv1_1_JHUGen_JERDn", &p_JVBF_SIG_ghv1_1_JHUGen_JERDn, &b_p_JVBF_SIG_ghv1_1_JHUGen_JERDn);
   fChain->SetBranchAddress("pConst_JQCD_SIG_ghg2_1_JHUGen_JERDn", &pConst_JQCD_SIG_ghg2_1_JHUGen_JERDn, &b_pConst_JQCD_SIG_ghg2_1_JHUGen_JERDn);
   fChain->SetBranchAddress("p_JQCD_SIG_ghg2_1_JHUGen_JERDn", &p_JQCD_SIG_ghg2_1_JHUGen_JERDn, &b_p_JQCD_SIG_ghg2_1_JHUGen_JERDn);
   fChain->SetBranchAddress("pConst_JJVBF_SIG_ghv1_1_JHUGen_JERDn", &pConst_JJVBF_SIG_ghv1_1_JHUGen_JERDn, &b_pConst_JJVBF_SIG_ghv1_1_JHUGen_JERDn);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_JHUGen_JERDn", &p_JJVBF_SIG_ghv1_1_JHUGen_JERDn, &b_p_JJVBF_SIG_ghv1_1_JHUGen_JERDn);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1prime2_1E4_JHUGen_JERDn", &p_JJVBF_SIG_ghv1prime2_1E4_JHUGen_JERDn, &b_p_JJVBF_SIG_ghv1prime2_1E4_JHUGen_JERDn);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv2_1_JHUGen_JERDn", &p_JJVBF_SIG_ghv2_1_JHUGen_JERDn, &b_p_JJVBF_SIG_ghv2_1_JHUGen_JERDn);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv4_1_JHUGen_JERDn", &p_JJVBF_SIG_ghv4_1_JHUGen_JERDn, &b_p_JJVBF_SIG_ghv4_1_JHUGen_JERDn);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghza1prime2_1E4_JHUGen_JERDn", &p_JJVBF_SIG_ghza1prime2_1E4_JHUGen_JERDn, &b_p_JJVBF_SIG_ghza1prime2_1E4_JHUGen_JERDn);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghza2_1_JHUGen_JERDn", &p_JJVBF_SIG_ghza2_1_JHUGen_JERDn, &b_p_JJVBF_SIG_ghza2_1_JHUGen_JERDn);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghza4_1_JHUGen_JERDn", &p_JJVBF_SIG_ghza4_1_JHUGen_JERDn, &b_p_JJVBF_SIG_ghza4_1_JHUGen_JERDn);
   fChain->SetBranchAddress("p_JJVBF_SIG_gha2_1_JHUGen_JERDn", &p_JJVBF_SIG_gha2_1_JHUGen_JERDn, &b_p_JJVBF_SIG_gha2_1_JHUGen_JERDn);
   fChain->SetBranchAddress("p_JJVBF_SIG_gha4_1_JHUGen_JERDn", &p_JJVBF_SIG_gha4_1_JHUGen_JERDn, &b_p_JJVBF_SIG_gha4_1_JHUGen_JERDn);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_ghv1prime2_1E4_JHUGen_JERDn", &p_JJVBF_SIG_ghv1_1_ghv1prime2_1E4_JHUGen_JERDn, &b_p_JJVBF_SIG_ghv1_1_ghv1prime2_1E4_JHUGen_JERDn);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_ghv2_1_JHUGen_JERDn", &p_JJVBF_SIG_ghv1_1_ghv2_1_JHUGen_JERDn, &b_p_JJVBF_SIG_ghv1_1_ghv2_1_JHUGen_JERDn);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_ghv4_1_JHUGen_JERDn", &p_JJVBF_SIG_ghv1_1_ghv4_1_JHUGen_JERDn, &b_p_JJVBF_SIG_ghv1_1_ghv4_1_JHUGen_JERDn);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_ghza1prime2_1E4_JHUGen_JERDn", &p_JJVBF_SIG_ghv1_1_ghza1prime2_1E4_JHUGen_JERDn, &b_p_JJVBF_SIG_ghv1_1_ghza1prime2_1E4_JHUGen_JERDn);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_ghza2_1_JHUGen_JERDn", &p_JJVBF_SIG_ghv1_1_ghza2_1_JHUGen_JERDn, &b_p_JJVBF_SIG_ghv1_1_ghza2_1_JHUGen_JERDn);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_ghza4_1_JHUGen_JERDn", &p_JJVBF_SIG_ghv1_1_ghza4_1_JHUGen_JERDn, &b_p_JJVBF_SIG_ghv1_1_ghza4_1_JHUGen_JERDn);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_gha2_1_JHUGen_JERDn", &p_JJVBF_SIG_ghv1_1_gha2_1_JHUGen_JERDn, &b_p_JJVBF_SIG_ghv1_1_gha2_1_JHUGen_JERDn);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_gha4_1_JHUGen_JERDn", &p_JJVBF_SIG_ghv1_1_gha4_1_JHUGen_JERDn, &b_p_JJVBF_SIG_ghv1_1_gha4_1_JHUGen_JERDn);
   fChain->SetBranchAddress("pConst_JJQCD_SIG_ghg2_1_JHUGen_JERDn", &pConst_JJQCD_SIG_ghg2_1_JHUGen_JERDn, &b_pConst_JJQCD_SIG_ghg2_1_JHUGen_JERDn);
   fChain->SetBranchAddress("p_JJQCD_SIG_ghg2_1_JHUGen_JERDn", &p_JJQCD_SIG_ghg2_1_JHUGen_JERDn, &b_p_JJQCD_SIG_ghg2_1_JHUGen_JERDn);
   fChain->SetBranchAddress("p_JJQCD_SIG_ghg4_1_JHUGen_JERDn", &p_JJQCD_SIG_ghg4_1_JHUGen_JERDn, &b_p_JJQCD_SIG_ghg4_1_JHUGen_JERDn);
   fChain->SetBranchAddress("p_JJQCD_SIG_ghg2_1_ghg4_1_JHUGen_JERDn", &p_JJQCD_SIG_ghg2_1_ghg4_1_JHUGen_JERDn, &b_p_JJQCD_SIG_ghg2_1_ghg4_1_JHUGen_JERDn);
   fChain->SetBranchAddress("pConst_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JERDn", &pConst_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JERDn, &b_pConst_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JERDn);
   fChain->SetBranchAddress("p_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JERDn", &p_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JERDn, &b_p_JJQCD_InitialQQ_SIG_ghg2_1_JHUGen_JERDn);
   fChain->SetBranchAddress("p_JJQCD_InitialQQ_SIG_ghg4_1_JHUGen_JERDn", &p_JJQCD_InitialQQ_SIG_ghg4_1_JHUGen_JERDn, &b_p_JJQCD_InitialQQ_SIG_ghg4_1_JHUGen_JERDn);
   fChain->SetBranchAddress("p_JJQCD_InitialQQ_SIG_ghg2_1_ghg4_1_JHUGen_JERDn", &p_JJQCD_InitialQQ_SIG_ghg2_1_ghg4_1_JHUGen_JERDn, &b_p_JJQCD_InitialQQ_SIG_ghg2_1_ghg4_1_JHUGen_JERDn);
   fChain->SetBranchAddress("pConst_HadZH_SIG_ghz1_1_JHUGen_JERDn", &pConst_HadZH_SIG_ghz1_1_JHUGen_JERDn, &b_pConst_HadZH_SIG_ghz1_1_JHUGen_JERDn);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_JHUGen_JERDn", &p_HadZH_SIG_ghz1_1_JHUGen_JERDn, &b_p_HadZH_SIG_ghz1_1_JHUGen_JERDn);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1prime2_1E4_JHUGen_JERDn", &p_HadZH_SIG_ghz1prime2_1E4_JHUGen_JERDn, &b_p_HadZH_SIG_ghz1prime2_1E4_JHUGen_JERDn);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz2_1_JHUGen_JERDn", &p_HadZH_SIG_ghz2_1_JHUGen_JERDn, &b_p_HadZH_SIG_ghz2_1_JHUGen_JERDn);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz4_1_JHUGen_JERDn", &p_HadZH_SIG_ghz4_1_JHUGen_JERDn, &b_p_HadZH_SIG_ghz4_1_JHUGen_JERDn);
   fChain->SetBranchAddress("p_HadZH_SIG_ghza1prime2_1E4_JHUGen_JERDn", &p_HadZH_SIG_ghza1prime2_1E4_JHUGen_JERDn, &b_p_HadZH_SIG_ghza1prime2_1E4_JHUGen_JERDn);
   fChain->SetBranchAddress("p_HadZH_SIG_ghza2_1_JHUGen_JERDn", &p_HadZH_SIG_ghza2_1_JHUGen_JERDn, &b_p_HadZH_SIG_ghza2_1_JHUGen_JERDn);
   fChain->SetBranchAddress("p_HadZH_SIG_ghza4_1_JHUGen_JERDn", &p_HadZH_SIG_ghza4_1_JHUGen_JERDn, &b_p_HadZH_SIG_ghza4_1_JHUGen_JERDn);
   fChain->SetBranchAddress("p_HadZH_SIG_gha2_1_JHUGen_JERDn", &p_HadZH_SIG_gha2_1_JHUGen_JERDn, &b_p_HadZH_SIG_gha2_1_JHUGen_JERDn);
   fChain->SetBranchAddress("p_HadZH_SIG_gha4_1_JHUGen_JERDn", &p_HadZH_SIG_gha4_1_JHUGen_JERDn, &b_p_HadZH_SIG_gha4_1_JHUGen_JERDn);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_ghz1prime2_1E4_JHUGen_JERDn", &p_HadZH_SIG_ghz1_1_ghz1prime2_1E4_JHUGen_JERDn, &b_p_HadZH_SIG_ghz1_1_ghz1prime2_1E4_JHUGen_JERDn);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_ghz2_1_JHUGen_JERDn", &p_HadZH_SIG_ghz1_1_ghz2_1_JHUGen_JERDn, &b_p_HadZH_SIG_ghz1_1_ghz2_1_JHUGen_JERDn);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_ghz4_1_JHUGen_JERDn", &p_HadZH_SIG_ghz1_1_ghz4_1_JHUGen_JERDn, &b_p_HadZH_SIG_ghz1_1_ghz4_1_JHUGen_JERDn);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_ghza1prime2_1E4_JHUGen_JERDn", &p_HadZH_SIG_ghz1_1_ghza1prime2_1E4_JHUGen_JERDn, &b_p_HadZH_SIG_ghz1_1_ghza1prime2_1E4_JHUGen_JERDn);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_ghza2_1_JHUGen_JERDn", &p_HadZH_SIG_ghz1_1_ghza2_1_JHUGen_JERDn, &b_p_HadZH_SIG_ghz1_1_ghza2_1_JHUGen_JERDn);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_ghza4_1_JHUGen_JERDn", &p_HadZH_SIG_ghz1_1_ghza4_1_JHUGen_JERDn, &b_p_HadZH_SIG_ghz1_1_ghza4_1_JHUGen_JERDn);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_gha2_1_JHUGen_JERDn", &p_HadZH_SIG_ghz1_1_gha2_1_JHUGen_JERDn, &b_p_HadZH_SIG_ghz1_1_gha2_1_JHUGen_JERDn);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_gha4_1_JHUGen_JERDn", &p_HadZH_SIG_ghz1_1_gha4_1_JHUGen_JERDn, &b_p_HadZH_SIG_ghz1_1_gha4_1_JHUGen_JERDn);
   fChain->SetBranchAddress("pConst_HadWH_SIG_ghw1_1_JHUGen_JERDn", &pConst_HadWH_SIG_ghw1_1_JHUGen_JERDn, &b_pConst_HadWH_SIG_ghw1_1_JHUGen_JERDn);
   fChain->SetBranchAddress("p_HadWH_SIG_ghw1_1_JHUGen_JERDn", &p_HadWH_SIG_ghw1_1_JHUGen_JERDn, &b_p_HadWH_SIG_ghw1_1_JHUGen_JERDn);
   fChain->SetBranchAddress("p_HadWH_SIG_ghw1prime2_1E4_JHUGen_JERDn", &p_HadWH_SIG_ghw1prime2_1E4_JHUGen_JERDn, &b_p_HadWH_SIG_ghw1prime2_1E4_JHUGen_JERDn);
   fChain->SetBranchAddress("p_HadWH_SIG_ghw2_1_JHUGen_JERDn", &p_HadWH_SIG_ghw2_1_JHUGen_JERDn, &b_p_HadWH_SIG_ghw2_1_JHUGen_JERDn);
   fChain->SetBranchAddress("p_HadWH_SIG_ghw4_1_JHUGen_JERDn", &p_HadWH_SIG_ghw4_1_JHUGen_JERDn, &b_p_HadWH_SIG_ghw4_1_JHUGen_JERDn);
   fChain->SetBranchAddress("p_HadWH_SIG_ghw1_1_ghw1prime2_1E4_JHUGen_JERDn", &p_HadWH_SIG_ghw1_1_ghw1prime2_1E4_JHUGen_JERDn, &b_p_HadWH_SIG_ghw1_1_ghw1prime2_1E4_JHUGen_JERDn);
   fChain->SetBranchAddress("p_HadWH_SIG_ghw1_1_ghw2_1_JHUGen_JERDn", &p_HadWH_SIG_ghw1_1_ghw2_1_JHUGen_JERDn, &b_p_HadWH_SIG_ghw1_1_ghw2_1_JHUGen_JERDn);
   fChain->SetBranchAddress("p_HadWH_SIG_ghw1_1_ghw4_1_JHUGen_JERDn", &p_HadWH_SIG_ghw1_1_ghw4_1_JHUGen_JERDn, &b_p_HadWH_SIG_ghw1_1_ghw4_1_JHUGen_JERDn);
   fChain->SetBranchAddress("p_ttHUndecayed_SIG_kappa_1_JHUGen_JERDn", &p_ttHUndecayed_SIG_kappa_1_JHUGen_JERDn, &b_p_ttHUndecayed_SIG_kappa_1_JHUGen_JERDn);
   fChain->SetBranchAddress("p_ttHUndecayed_SIG_kappatilde_1_JHUGen_JERDn", &p_ttHUndecayed_SIG_kappatilde_1_JHUGen_JERDn, &b_p_ttHUndecayed_SIG_kappatilde_1_JHUGen_JERDn);
   fChain->SetBranchAddress("p_ttHUndecayed_SIG_kappa_1_kappatilde_1_JHUGen_JERDn", &p_ttHUndecayed_SIG_kappa_1_kappatilde_1_JHUGen_JERDn, &b_p_ttHUndecayed_SIG_kappa_1_kappatilde_1_JHUGen_JERDn);
   fChain->SetBranchAddress("p_bbH_SIG_kappa_1_JHUGen_JERDn", &p_bbH_SIG_kappa_1_JHUGen_JERDn, &b_p_bbH_SIG_kappa_1_JHUGen_JERDn);
   fChain->SetBranchAddress("p_LepZH_SIG_ghz1_1_JHUGen", &p_LepZH_SIG_ghz1_1_JHUGen, &b_p_LepZH_SIG_ghz1_1_JHUGen);
   fChain->SetBranchAddress("p_LepZH_SIG_ghz1prime2_1E4_JHUGen", &p_LepZH_SIG_ghz1prime2_1E4_JHUGen, &b_p_LepZH_SIG_ghz1prime2_1E4_JHUGen);
   fChain->SetBranchAddress("p_LepZH_SIG_ghz2_1_JHUGen", &p_LepZH_SIG_ghz2_1_JHUGen, &b_p_LepZH_SIG_ghz2_1_JHUGen);
   fChain->SetBranchAddress("p_LepZH_SIG_ghz4_1_JHUGen", &p_LepZH_SIG_ghz4_1_JHUGen, &b_p_LepZH_SIG_ghz4_1_JHUGen);
   fChain->SetBranchAddress("p_LepZH_SIG_ghza1prime2_1E4_JHUGen", &p_LepZH_SIG_ghza1prime2_1E4_JHUGen, &b_p_LepZH_SIG_ghza1prime2_1E4_JHUGen);
   fChain->SetBranchAddress("p_LepZH_SIG_ghza2_1_JHUGen", &p_LepZH_SIG_ghza2_1_JHUGen, &b_p_LepZH_SIG_ghza2_1_JHUGen);
   fChain->SetBranchAddress("p_LepZH_SIG_ghza4_1_JHUGen", &p_LepZH_SIG_ghza4_1_JHUGen, &b_p_LepZH_SIG_ghza4_1_JHUGen);
   fChain->SetBranchAddress("p_LepZH_SIG_gha2_1_JHUGen", &p_LepZH_SIG_gha2_1_JHUGen, &b_p_LepZH_SIG_gha2_1_JHUGen);
   fChain->SetBranchAddress("p_LepZH_SIG_gha4_1_JHUGen", &p_LepZH_SIG_gha4_1_JHUGen, &b_p_LepZH_SIG_gha4_1_JHUGen);
   fChain->SetBranchAddress("p_LepZH_SIG_ghz1_1_ghz1prime2_1E4_JHUGen", &p_LepZH_SIG_ghz1_1_ghz1prime2_1E4_JHUGen, &b_p_LepZH_SIG_ghz1_1_ghz1prime2_1E4_JHUGen);
   fChain->SetBranchAddress("p_LepZH_SIG_ghz1_1_ghz2_1_JHUGen", &p_LepZH_SIG_ghz1_1_ghz2_1_JHUGen, &b_p_LepZH_SIG_ghz1_1_ghz2_1_JHUGen);
   fChain->SetBranchAddress("p_LepZH_SIG_ghz1_1_ghz4_1_JHUGen", &p_LepZH_SIG_ghz1_1_ghz4_1_JHUGen, &b_p_LepZH_SIG_ghz1_1_ghz4_1_JHUGen);
   fChain->SetBranchAddress("p_LepZH_SIG_ghz1_1_ghza1prime2_1E4_JHUGen", &p_LepZH_SIG_ghz1_1_ghza1prime2_1E4_JHUGen, &b_p_LepZH_SIG_ghz1_1_ghza1prime2_1E4_JHUGen);
   fChain->SetBranchAddress("p_LepZH_SIG_ghz1_1_ghza2_1_JHUGen", &p_LepZH_SIG_ghz1_1_ghza2_1_JHUGen, &b_p_LepZH_SIG_ghz1_1_ghza2_1_JHUGen);
   fChain->SetBranchAddress("p_LepZH_SIG_ghz1_1_ghza4_1_JHUGen", &p_LepZH_SIG_ghz1_1_ghza4_1_JHUGen, &b_p_LepZH_SIG_ghz1_1_ghza4_1_JHUGen);
   fChain->SetBranchAddress("p_LepZH_SIG_ghz1_1_gha2_1_JHUGen", &p_LepZH_SIG_ghz1_1_gha2_1_JHUGen, &b_p_LepZH_SIG_ghz1_1_gha2_1_JHUGen);
   fChain->SetBranchAddress("p_LepZH_SIG_ghz1_1_gha4_1_JHUGen", &p_LepZH_SIG_ghz1_1_gha4_1_JHUGen, &b_p_LepZH_SIG_ghz1_1_gha4_1_JHUGen);
   fChain->SetBranchAddress("p_LepWH_SIG_ghw1_1_JHUGen", &p_LepWH_SIG_ghw1_1_JHUGen, &b_p_LepWH_SIG_ghw1_1_JHUGen);
   fChain->SetBranchAddress("p_LepWH_SIG_ghw1prime2_1E4_JHUGen", &p_LepWH_SIG_ghw1prime2_1E4_JHUGen, &b_p_LepWH_SIG_ghw1prime2_1E4_JHUGen);
   fChain->SetBranchAddress("p_LepWH_SIG_ghw2_1_JHUGen", &p_LepWH_SIG_ghw2_1_JHUGen, &b_p_LepWH_SIG_ghw2_1_JHUGen);
   fChain->SetBranchAddress("p_LepWH_SIG_ghw4_1_JHUGen", &p_LepWH_SIG_ghw4_1_JHUGen, &b_p_LepWH_SIG_ghw4_1_JHUGen);
   fChain->SetBranchAddress("p_LepWH_SIG_ghw1_1_ghw1prime2_1E4_JHUGen", &p_LepWH_SIG_ghw1_1_ghw1prime2_1E4_JHUGen, &b_p_LepWH_SIG_ghw1_1_ghw1prime2_1E4_JHUGen);
   fChain->SetBranchAddress("p_LepWH_SIG_ghw1_1_ghw2_1_JHUGen", &p_LepWH_SIG_ghw1_1_ghw2_1_JHUGen, &b_p_LepWH_SIG_ghw1_1_ghw2_1_JHUGen);
   fChain->SetBranchAddress("p_LepWH_SIG_ghw1_1_ghw4_1_JHUGen", &p_LepWH_SIG_ghw1_1_ghw4_1_JHUGen, &b_p_LepWH_SIG_ghw1_1_ghw4_1_JHUGen);
   fChain->SetBranchAddress("p_QQB_SIG_ZPqqLR_1_gZPz1_1_JHUGen", &p_QQB_SIG_ZPqqLR_1_gZPz1_1_JHUGen, &b_p_QQB_SIG_ZPqqLR_1_gZPz1_1_JHUGen);
   fChain->SetBranchAddress("p_QQB_SIG_ZPqqLR_1_gZPz2_1_JHUGen", &p_QQB_SIG_ZPqqLR_1_gZPz2_1_JHUGen, &b_p_QQB_SIG_ZPqqLR_1_gZPz2_1_JHUGen);
   fChain->SetBranchAddress("p_INDEPENDENT_SIG_gZPz1_1_JHUGen", &p_INDEPENDENT_SIG_gZPz1_1_JHUGen, &b_p_INDEPENDENT_SIG_gZPz1_1_JHUGen);
   fChain->SetBranchAddress("p_INDEPENDENT_SIG_gZPz2_1_JHUGen", &p_INDEPENDENT_SIG_gZPz2_1_JHUGen, &b_p_INDEPENDENT_SIG_gZPz2_1_JHUGen);
   fChain->SetBranchAddress("p_GG_SIG_gXg1_1_gXz1_1_JHUGen", &p_GG_SIG_gXg1_1_gXz1_1_JHUGen, &b_p_GG_SIG_gXg1_1_gXz1_1_JHUGen);
   fChain->SetBranchAddress("p_GG_SIG_gXg2_1_gXz2_1_JHUGen", &p_GG_SIG_gXg2_1_gXz2_1_JHUGen, &b_p_GG_SIG_gXg2_1_gXz2_1_JHUGen);
   fChain->SetBranchAddress("p_GG_SIG_gXg3_1_gXz3_1_JHUGen", &p_GG_SIG_gXg3_1_gXz3_1_JHUGen, &b_p_GG_SIG_gXg3_1_gXz3_1_JHUGen);
   fChain->SetBranchAddress("p_GG_SIG_gXg4_1_gXz4_1_JHUGen", &p_GG_SIG_gXg4_1_gXz4_1_JHUGen, &b_p_GG_SIG_gXg4_1_gXz4_1_JHUGen);
   fChain->SetBranchAddress("p_GG_SIG_gXg1_1_gXz5_1_JHUGen", &p_GG_SIG_gXg1_1_gXz5_1_JHUGen, &b_p_GG_SIG_gXg1_1_gXz5_1_JHUGen);
   fChain->SetBranchAddress("p_GG_SIG_gXg1_1_gXz1_1_gXz5_1_JHUGen", &p_GG_SIG_gXg1_1_gXz1_1_gXz5_1_JHUGen, &b_p_GG_SIG_gXg1_1_gXz1_1_gXz5_1_JHUGen);
   fChain->SetBranchAddress("p_GG_SIG_gXg1_1_gXz6_1_JHUGen", &p_GG_SIG_gXg1_1_gXz6_1_JHUGen, &b_p_GG_SIG_gXg1_1_gXz6_1_JHUGen);
   fChain->SetBranchAddress("p_GG_SIG_gXg1_1_gXz7_1_JHUGen", &p_GG_SIG_gXg1_1_gXz7_1_JHUGen, &b_p_GG_SIG_gXg1_1_gXz7_1_JHUGen);
   fChain->SetBranchAddress("p_GG_SIG_gXg5_1_gXz8_1_JHUGen", &p_GG_SIG_gXg5_1_gXz8_1_JHUGen, &b_p_GG_SIG_gXg5_1_gXz8_1_JHUGen);
   fChain->SetBranchAddress("p_GG_SIG_gXg5_1_gXz9_1_JHUGen", &p_GG_SIG_gXg5_1_gXz9_1_JHUGen, &b_p_GG_SIG_gXg5_1_gXz9_1_JHUGen);
   fChain->SetBranchAddress("p_GG_SIG_gXg5_1_gXz10_1_JHUGen", &p_GG_SIG_gXg5_1_gXz10_1_JHUGen, &b_p_GG_SIG_gXg5_1_gXz10_1_JHUGen);
   fChain->SetBranchAddress("p_QQB_SIG_XqqLR_1_gXz1_1_JHUGen", &p_QQB_SIG_XqqLR_1_gXz1_1_JHUGen, &b_p_QQB_SIG_XqqLR_1_gXz1_1_JHUGen);
   fChain->SetBranchAddress("p_QQB_SIG_XqqLR_1_gXz2_1_JHUGen", &p_QQB_SIG_XqqLR_1_gXz2_1_JHUGen, &b_p_QQB_SIG_XqqLR_1_gXz2_1_JHUGen);
   fChain->SetBranchAddress("p_QQB_SIG_XqqLR_1_gXz3_1_JHUGen", &p_QQB_SIG_XqqLR_1_gXz3_1_JHUGen, &b_p_QQB_SIG_XqqLR_1_gXz3_1_JHUGen);
   fChain->SetBranchAddress("p_QQB_SIG_XqqLR_1_gXz4_1_JHUGen", &p_QQB_SIG_XqqLR_1_gXz4_1_JHUGen, &b_p_QQB_SIG_XqqLR_1_gXz4_1_JHUGen);
   fChain->SetBranchAddress("p_QQB_SIG_XqqLR_1_gXz5_1_JHUGen", &p_QQB_SIG_XqqLR_1_gXz5_1_JHUGen, &b_p_QQB_SIG_XqqLR_1_gXz5_1_JHUGen);
   fChain->SetBranchAddress("p_QQB_SIG_XqqLR_1_gXz1_1_gXz5_1_JHUGen", &p_QQB_SIG_XqqLR_1_gXz1_1_gXz5_1_JHUGen, &b_p_QQB_SIG_XqqLR_1_gXz1_1_gXz5_1_JHUGen);
   fChain->SetBranchAddress("p_QQB_SIG_XqqLR_1_gXz6_1_JHUGen", &p_QQB_SIG_XqqLR_1_gXz6_1_JHUGen, &b_p_QQB_SIG_XqqLR_1_gXz6_1_JHUGen);
   fChain->SetBranchAddress("p_QQB_SIG_XqqLR_1_gXz7_1_JHUGen", &p_QQB_SIG_XqqLR_1_gXz7_1_JHUGen, &b_p_QQB_SIG_XqqLR_1_gXz7_1_JHUGen);
   fChain->SetBranchAddress("p_QQB_SIG_XqqLR_1_gXz8_1_JHUGen", &p_QQB_SIG_XqqLR_1_gXz8_1_JHUGen, &b_p_QQB_SIG_XqqLR_1_gXz8_1_JHUGen);
   fChain->SetBranchAddress("p_QQB_SIG_XqqLR_1_gXz9_1_JHUGen", &p_QQB_SIG_XqqLR_1_gXz9_1_JHUGen, &b_p_QQB_SIG_XqqLR_1_gXz9_1_JHUGen);
   fChain->SetBranchAddress("p_QQB_SIG_XqqLR_1_gXz10_1_JHUGen", &p_QQB_SIG_XqqLR_1_gXz10_1_JHUGen, &b_p_QQB_SIG_XqqLR_1_gXz10_1_JHUGen);
   fChain->SetBranchAddress("p_INDEPENDENT_SIG_gXz1_1_JHUGen", &p_INDEPENDENT_SIG_gXz1_1_JHUGen, &b_p_INDEPENDENT_SIG_gXz1_1_JHUGen);
   fChain->SetBranchAddress("p_INDEPENDENT_SIG_gXz2_1_JHUGen", &p_INDEPENDENT_SIG_gXz2_1_JHUGen, &b_p_INDEPENDENT_SIG_gXz2_1_JHUGen);
   fChain->SetBranchAddress("p_INDEPENDENT_SIG_gXz3_1_JHUGen", &p_INDEPENDENT_SIG_gXz3_1_JHUGen, &b_p_INDEPENDENT_SIG_gXz3_1_JHUGen);
   fChain->SetBranchAddress("p_INDEPENDENT_SIG_gXz4_1_JHUGen", &p_INDEPENDENT_SIG_gXz4_1_JHUGen, &b_p_INDEPENDENT_SIG_gXz4_1_JHUGen);
   fChain->SetBranchAddress("p_INDEPENDENT_SIG_gXz5_1_JHUGen", &p_INDEPENDENT_SIG_gXz5_1_JHUGen, &b_p_INDEPENDENT_SIG_gXz5_1_JHUGen);
   fChain->SetBranchAddress("p_INDEPENDENT_SIG_gXz1_1_gXz5_1_JHUGen", &p_INDEPENDENT_SIG_gXz1_1_gXz5_1_JHUGen, &b_p_INDEPENDENT_SIG_gXz1_1_gXz5_1_JHUGen);
   fChain->SetBranchAddress("p_INDEPENDENT_SIG_gXz6_1_JHUGen", &p_INDEPENDENT_SIG_gXz6_1_JHUGen, &b_p_INDEPENDENT_SIG_gXz6_1_JHUGen);
   fChain->SetBranchAddress("p_INDEPENDENT_SIG_gXz7_1_JHUGen", &p_INDEPENDENT_SIG_gXz7_1_JHUGen, &b_p_INDEPENDENT_SIG_gXz7_1_JHUGen);
   fChain->SetBranchAddress("p_INDEPENDENT_SIG_gXz8_1_JHUGen", &p_INDEPENDENT_SIG_gXz8_1_JHUGen, &b_p_INDEPENDENT_SIG_gXz8_1_JHUGen);
   fChain->SetBranchAddress("p_INDEPENDENT_SIG_gXz9_1_JHUGen", &p_INDEPENDENT_SIG_gXz9_1_JHUGen, &b_p_INDEPENDENT_SIG_gXz9_1_JHUGen);
   fChain->SetBranchAddress("p_INDEPENDENT_SIG_gXz10_1_JHUGen", &p_INDEPENDENT_SIG_gXz10_1_JHUGen, &b_p_INDEPENDENT_SIG_gXz10_1_JHUGen);
   fChain->SetBranchAddress("pConst_GG_SIG_kappaTopBot_1_ghz1_1_MCFM", &pConst_GG_SIG_kappaTopBot_1_ghz1_1_MCFM, &b_pConst_GG_SIG_kappaTopBot_1_ghz1_1_MCFM);
   fChain->SetBranchAddress("p_GG_SIG_kappaTopBot_1_ghz1_1_MCFM", &p_GG_SIG_kappaTopBot_1_ghz1_1_MCFM, &b_p_GG_SIG_kappaTopBot_1_ghz1_1_MCFM);
   fChain->SetBranchAddress("p_GG_BSI_kappaTopBot_1_ghz1_1_MCFM", &p_GG_BSI_kappaTopBot_1_ghz1_1_MCFM, &b_p_GG_BSI_kappaTopBot_1_ghz1_1_MCFM);
   fChain->SetBranchAddress("p_GG_BSI_kappaTopBot_1_ghz1_i_MCFM", &p_GG_BSI_kappaTopBot_1_ghz1_i_MCFM, &b_p_GG_BSI_kappaTopBot_1_ghz1_i_MCFM);
   fChain->SetBranchAddress("pConst_GG_BKG_MCFM", &pConst_GG_BKG_MCFM, &b_pConst_GG_BKG_MCFM);
   fChain->SetBranchAddress("p_GG_BKG_MCFM", &p_GG_BKG_MCFM, &b_p_GG_BKG_MCFM);
   fChain->SetBranchAddress("pConst_QQB_BKG_MCFM", &pConst_QQB_BKG_MCFM, &b_pConst_QQB_BKG_MCFM);
   fChain->SetBranchAddress("p_QQB_BKG_MCFM", &p_QQB_BKG_MCFM, &b_p_QQB_BKG_MCFM);
   fChain->SetBranchAddress("pConst_ZJJ_BKG_MCFM", &pConst_ZJJ_BKG_MCFM, &b_pConst_ZJJ_BKG_MCFM);
   fChain->SetBranchAddress("p_ZJJ_BKG_MCFM", &p_ZJJ_BKG_MCFM, &b_p_ZJJ_BKG_MCFM);
   fChain->SetBranchAddress("p_JJEW_SIG_ghv1_1_MCFM_JECNominal", &p_JJEW_SIG_ghv1_1_MCFM_JECNominal, &b_p_JJEW_SIG_ghv1_1_MCFM_JECNominal);
   fChain->SetBranchAddress("p_JJEW_BSI_ghv1_1_MCFM_JECNominal", &p_JJEW_BSI_ghv1_1_MCFM_JECNominal, &b_p_JJEW_BSI_ghv1_1_MCFM_JECNominal);
   fChain->SetBranchAddress("p_JJEW_BSI_ghv1_i_MCFM_JECNominal", &p_JJEW_BSI_ghv1_i_MCFM_JECNominal, &b_p_JJEW_BSI_ghv1_i_MCFM_JECNominal);
   fChain->SetBranchAddress("p_JJEW_BKG_MCFM_JECNominal", &p_JJEW_BKG_MCFM_JECNominal, &b_p_JJEW_BKG_MCFM_JECNominal);
   fChain->SetBranchAddress("pConst_JJVBF_S_SIG_ghv1_1_MCFM_JECNominal", &pConst_JJVBF_S_SIG_ghv1_1_MCFM_JECNominal, &b_pConst_JJVBF_S_SIG_ghv1_1_MCFM_JECNominal);
   fChain->SetBranchAddress("p_JJVBF_S_SIG_ghv1_1_MCFM_JECNominal", &p_JJVBF_S_SIG_ghv1_1_MCFM_JECNominal, &b_p_JJVBF_S_SIG_ghv1_1_MCFM_JECNominal);
   fChain->SetBranchAddress("p_JJVBF_S_BSI_ghv1_1_MCFM_JECNominal", &p_JJVBF_S_BSI_ghv1_1_MCFM_JECNominal, &b_p_JJVBF_S_BSI_ghv1_1_MCFM_JECNominal);
   fChain->SetBranchAddress("p_JJVBF_S_BSI_ghv1_i_MCFM_JECNominal", &p_JJVBF_S_BSI_ghv1_i_MCFM_JECNominal, &b_p_JJVBF_S_BSI_ghv1_i_MCFM_JECNominal);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_MCFM_JECNominal", &p_JJVBF_SIG_ghv1_1_MCFM_JECNominal, &b_p_JJVBF_SIG_ghv1_1_MCFM_JECNominal);
   fChain->SetBranchAddress("p_JJVBF_BSI_ghv1_1_MCFM_JECNominal", &p_JJVBF_BSI_ghv1_1_MCFM_JECNominal, &b_p_JJVBF_BSI_ghv1_1_MCFM_JECNominal);
   fChain->SetBranchAddress("p_JJVBF_BSI_ghv1_i_MCFM_JECNominal", &p_JJVBF_BSI_ghv1_i_MCFM_JECNominal, &b_p_JJVBF_BSI_ghv1_i_MCFM_JECNominal);
   fChain->SetBranchAddress("pConst_JJVBF_BKG_MCFM_JECNominal", &pConst_JJVBF_BKG_MCFM_JECNominal, &b_pConst_JJVBF_BKG_MCFM_JECNominal);
   fChain->SetBranchAddress("p_JJVBF_BKG_MCFM_JECNominal", &p_JJVBF_BKG_MCFM_JECNominal, &b_p_JJVBF_BKG_MCFM_JECNominal);
   fChain->SetBranchAddress("pConst_HadZH_S_SIG_ghz1_1_MCFM_JECNominal", &pConst_HadZH_S_SIG_ghz1_1_MCFM_JECNominal, &b_pConst_HadZH_S_SIG_ghz1_1_MCFM_JECNominal);
   fChain->SetBranchAddress("p_HadZH_S_SIG_ghz1_1_MCFM_JECNominal", &p_HadZH_S_SIG_ghz1_1_MCFM_JECNominal, &b_p_HadZH_S_SIG_ghz1_1_MCFM_JECNominal);
   fChain->SetBranchAddress("p_HadZH_S_BSI_ghz1_1_MCFM_JECNominal", &p_HadZH_S_BSI_ghz1_1_MCFM_JECNominal, &b_p_HadZH_S_BSI_ghz1_1_MCFM_JECNominal);
   fChain->SetBranchAddress("p_HadZH_S_BSI_ghz1_i_MCFM_JECNominal", &p_HadZH_S_BSI_ghz1_i_MCFM_JECNominal, &b_p_HadZH_S_BSI_ghz1_i_MCFM_JECNominal);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_MCFM_JECNominal", &p_HadZH_SIG_ghz1_1_MCFM_JECNominal, &b_p_HadZH_SIG_ghz1_1_MCFM_JECNominal);
   fChain->SetBranchAddress("p_HadZH_BSI_ghz1_1_MCFM_JECNominal", &p_HadZH_BSI_ghz1_1_MCFM_JECNominal, &b_p_HadZH_BSI_ghz1_1_MCFM_JECNominal);
   fChain->SetBranchAddress("p_HadZH_BSI_ghz1_i_MCFM_JECNominal", &p_HadZH_BSI_ghz1_i_MCFM_JECNominal, &b_p_HadZH_BSI_ghz1_i_MCFM_JECNominal);
   fChain->SetBranchAddress("pConst_HadZH_BKG_MCFM_JECNominal", &pConst_HadZH_BKG_MCFM_JECNominal, &b_pConst_HadZH_BKG_MCFM_JECNominal);
   fChain->SetBranchAddress("p_HadZH_BKG_MCFM_JECNominal", &p_HadZH_BKG_MCFM_JECNominal, &b_p_HadZH_BKG_MCFM_JECNominal);
   fChain->SetBranchAddress("pConst_HadWH_S_SIG_ghw1_1_MCFM_JECNominal", &pConst_HadWH_S_SIG_ghw1_1_MCFM_JECNominal, &b_pConst_HadWH_S_SIG_ghw1_1_MCFM_JECNominal);
   fChain->SetBranchAddress("p_HadWH_S_SIG_ghw1_1_MCFM_JECNominal", &p_HadWH_S_SIG_ghw1_1_MCFM_JECNominal, &b_p_HadWH_S_SIG_ghw1_1_MCFM_JECNominal);
   fChain->SetBranchAddress("p_HadWH_S_BSI_ghw1_1_MCFM_JECNominal", &p_HadWH_S_BSI_ghw1_1_MCFM_JECNominal, &b_p_HadWH_S_BSI_ghw1_1_MCFM_JECNominal);
   fChain->SetBranchAddress("p_HadWH_S_BSI_ghw1_i_MCFM_JECNominal", &p_HadWH_S_BSI_ghw1_i_MCFM_JECNominal, &b_p_HadWH_S_BSI_ghw1_i_MCFM_JECNominal);
   fChain->SetBranchAddress("pConst_HadWH_BKG_MCFM_JECNominal", &pConst_HadWH_BKG_MCFM_JECNominal, &b_pConst_HadWH_BKG_MCFM_JECNominal);
   fChain->SetBranchAddress("p_HadWH_BKG_MCFM_JECNominal", &p_HadWH_BKG_MCFM_JECNominal, &b_p_HadWH_BKG_MCFM_JECNominal);
   fChain->SetBranchAddress("pConst_JJQCD_BKG_MCFM_JECNominal", &pConst_JJQCD_BKG_MCFM_JECNominal, &b_pConst_JJQCD_BKG_MCFM_JECNominal);
   fChain->SetBranchAddress("p_JJQCD_BKG_MCFM_JECNominal", &p_JJQCD_BKG_MCFM_JECNominal, &b_p_JJQCD_BKG_MCFM_JECNominal);
   fChain->SetBranchAddress("p_JJEW_SIG_ghv1_1_MCFM_JESUp", &p_JJEW_SIG_ghv1_1_MCFM_JESUp, &b_p_JJEW_SIG_ghv1_1_MCFM_JESUp);
   fChain->SetBranchAddress("p_JJEW_BSI_ghv1_1_MCFM_JESUp", &p_JJEW_BSI_ghv1_1_MCFM_JESUp, &b_p_JJEW_BSI_ghv1_1_MCFM_JESUp);
   fChain->SetBranchAddress("p_JJEW_BSI_ghv1_i_MCFM_JESUp", &p_JJEW_BSI_ghv1_i_MCFM_JESUp, &b_p_JJEW_BSI_ghv1_i_MCFM_JESUp);
   fChain->SetBranchAddress("p_JJEW_BKG_MCFM_JESUp", &p_JJEW_BKG_MCFM_JESUp, &b_p_JJEW_BKG_MCFM_JESUp);
   fChain->SetBranchAddress("pConst_JJVBF_S_SIG_ghv1_1_MCFM_JESUp", &pConst_JJVBF_S_SIG_ghv1_1_MCFM_JESUp, &b_pConst_JJVBF_S_SIG_ghv1_1_MCFM_JESUp);
   fChain->SetBranchAddress("p_JJVBF_S_SIG_ghv1_1_MCFM_JESUp", &p_JJVBF_S_SIG_ghv1_1_MCFM_JESUp, &b_p_JJVBF_S_SIG_ghv1_1_MCFM_JESUp);
   fChain->SetBranchAddress("p_JJVBF_S_BSI_ghv1_1_MCFM_JESUp", &p_JJVBF_S_BSI_ghv1_1_MCFM_JESUp, &b_p_JJVBF_S_BSI_ghv1_1_MCFM_JESUp);
   fChain->SetBranchAddress("p_JJVBF_S_BSI_ghv1_i_MCFM_JESUp", &p_JJVBF_S_BSI_ghv1_i_MCFM_JESUp, &b_p_JJVBF_S_BSI_ghv1_i_MCFM_JESUp);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_MCFM_JESUp", &p_JJVBF_SIG_ghv1_1_MCFM_JESUp, &b_p_JJVBF_SIG_ghv1_1_MCFM_JESUp);
   fChain->SetBranchAddress("p_JJVBF_BSI_ghv1_1_MCFM_JESUp", &p_JJVBF_BSI_ghv1_1_MCFM_JESUp, &b_p_JJVBF_BSI_ghv1_1_MCFM_JESUp);
   fChain->SetBranchAddress("p_JJVBF_BSI_ghv1_i_MCFM_JESUp", &p_JJVBF_BSI_ghv1_i_MCFM_JESUp, &b_p_JJVBF_BSI_ghv1_i_MCFM_JESUp);
   fChain->SetBranchAddress("pConst_JJVBF_BKG_MCFM_JESUp", &pConst_JJVBF_BKG_MCFM_JESUp, &b_pConst_JJVBF_BKG_MCFM_JESUp);
   fChain->SetBranchAddress("p_JJVBF_BKG_MCFM_JESUp", &p_JJVBF_BKG_MCFM_JESUp, &b_p_JJVBF_BKG_MCFM_JESUp);
   fChain->SetBranchAddress("pConst_HadZH_S_SIG_ghz1_1_MCFM_JESUp", &pConst_HadZH_S_SIG_ghz1_1_MCFM_JESUp, &b_pConst_HadZH_S_SIG_ghz1_1_MCFM_JESUp);
   fChain->SetBranchAddress("p_HadZH_S_SIG_ghz1_1_MCFM_JESUp", &p_HadZH_S_SIG_ghz1_1_MCFM_JESUp, &b_p_HadZH_S_SIG_ghz1_1_MCFM_JESUp);
   fChain->SetBranchAddress("p_HadZH_S_BSI_ghz1_1_MCFM_JESUp", &p_HadZH_S_BSI_ghz1_1_MCFM_JESUp, &b_p_HadZH_S_BSI_ghz1_1_MCFM_JESUp);
   fChain->SetBranchAddress("p_HadZH_S_BSI_ghz1_i_MCFM_JESUp", &p_HadZH_S_BSI_ghz1_i_MCFM_JESUp, &b_p_HadZH_S_BSI_ghz1_i_MCFM_JESUp);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_MCFM_JESUp", &p_HadZH_SIG_ghz1_1_MCFM_JESUp, &b_p_HadZH_SIG_ghz1_1_MCFM_JESUp);
   fChain->SetBranchAddress("p_HadZH_BSI_ghz1_1_MCFM_JESUp", &p_HadZH_BSI_ghz1_1_MCFM_JESUp, &b_p_HadZH_BSI_ghz1_1_MCFM_JESUp);
   fChain->SetBranchAddress("p_HadZH_BSI_ghz1_i_MCFM_JESUp", &p_HadZH_BSI_ghz1_i_MCFM_JESUp, &b_p_HadZH_BSI_ghz1_i_MCFM_JESUp);
   fChain->SetBranchAddress("pConst_HadZH_BKG_MCFM_JESUp", &pConst_HadZH_BKG_MCFM_JESUp, &b_pConst_HadZH_BKG_MCFM_JESUp);
   fChain->SetBranchAddress("p_HadZH_BKG_MCFM_JESUp", &p_HadZH_BKG_MCFM_JESUp, &b_p_HadZH_BKG_MCFM_JESUp);
   fChain->SetBranchAddress("pConst_HadWH_S_SIG_ghw1_1_MCFM_JESUp", &pConst_HadWH_S_SIG_ghw1_1_MCFM_JESUp, &b_pConst_HadWH_S_SIG_ghw1_1_MCFM_JESUp);
   fChain->SetBranchAddress("p_HadWH_S_SIG_ghw1_1_MCFM_JESUp", &p_HadWH_S_SIG_ghw1_1_MCFM_JESUp, &b_p_HadWH_S_SIG_ghw1_1_MCFM_JESUp);
   fChain->SetBranchAddress("p_HadWH_S_BSI_ghw1_1_MCFM_JESUp", &p_HadWH_S_BSI_ghw1_1_MCFM_JESUp, &b_p_HadWH_S_BSI_ghw1_1_MCFM_JESUp);
   fChain->SetBranchAddress("p_HadWH_S_BSI_ghw1_i_MCFM_JESUp", &p_HadWH_S_BSI_ghw1_i_MCFM_JESUp, &b_p_HadWH_S_BSI_ghw1_i_MCFM_JESUp);
   fChain->SetBranchAddress("pConst_HadWH_BKG_MCFM_JESUp", &pConst_HadWH_BKG_MCFM_JESUp, &b_pConst_HadWH_BKG_MCFM_JESUp);
   fChain->SetBranchAddress("p_HadWH_BKG_MCFM_JESUp", &p_HadWH_BKG_MCFM_JESUp, &b_p_HadWH_BKG_MCFM_JESUp);
   fChain->SetBranchAddress("pConst_JJQCD_BKG_MCFM_JESUp", &pConst_JJQCD_BKG_MCFM_JESUp, &b_pConst_JJQCD_BKG_MCFM_JESUp);
   fChain->SetBranchAddress("p_JJQCD_BKG_MCFM_JESUp", &p_JJQCD_BKG_MCFM_JESUp, &b_p_JJQCD_BKG_MCFM_JESUp);
   fChain->SetBranchAddress("p_JJEW_SIG_ghv1_1_MCFM_JESDn", &p_JJEW_SIG_ghv1_1_MCFM_JESDn, &b_p_JJEW_SIG_ghv1_1_MCFM_JESDn);
   fChain->SetBranchAddress("p_JJEW_BSI_ghv1_1_MCFM_JESDn", &p_JJEW_BSI_ghv1_1_MCFM_JESDn, &b_p_JJEW_BSI_ghv1_1_MCFM_JESDn);
   fChain->SetBranchAddress("p_JJEW_BSI_ghv1_i_MCFM_JESDn", &p_JJEW_BSI_ghv1_i_MCFM_JESDn, &b_p_JJEW_BSI_ghv1_i_MCFM_JESDn);
   fChain->SetBranchAddress("p_JJEW_BKG_MCFM_JESDn", &p_JJEW_BKG_MCFM_JESDn, &b_p_JJEW_BKG_MCFM_JESDn);
   fChain->SetBranchAddress("pConst_JJVBF_S_SIG_ghv1_1_MCFM_JESDn", &pConst_JJVBF_S_SIG_ghv1_1_MCFM_JESDn, &b_pConst_JJVBF_S_SIG_ghv1_1_MCFM_JESDn);
   fChain->SetBranchAddress("p_JJVBF_S_SIG_ghv1_1_MCFM_JESDn", &p_JJVBF_S_SIG_ghv1_1_MCFM_JESDn, &b_p_JJVBF_S_SIG_ghv1_1_MCFM_JESDn);
   fChain->SetBranchAddress("p_JJVBF_S_BSI_ghv1_1_MCFM_JESDn", &p_JJVBF_S_BSI_ghv1_1_MCFM_JESDn, &b_p_JJVBF_S_BSI_ghv1_1_MCFM_JESDn);
   fChain->SetBranchAddress("p_JJVBF_S_BSI_ghv1_i_MCFM_JESDn", &p_JJVBF_S_BSI_ghv1_i_MCFM_JESDn, &b_p_JJVBF_S_BSI_ghv1_i_MCFM_JESDn);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_MCFM_JESDn", &p_JJVBF_SIG_ghv1_1_MCFM_JESDn, &b_p_JJVBF_SIG_ghv1_1_MCFM_JESDn);
   fChain->SetBranchAddress("p_JJVBF_BSI_ghv1_1_MCFM_JESDn", &p_JJVBF_BSI_ghv1_1_MCFM_JESDn, &b_p_JJVBF_BSI_ghv1_1_MCFM_JESDn);
   fChain->SetBranchAddress("p_JJVBF_BSI_ghv1_i_MCFM_JESDn", &p_JJVBF_BSI_ghv1_i_MCFM_JESDn, &b_p_JJVBF_BSI_ghv1_i_MCFM_JESDn);
   fChain->SetBranchAddress("pConst_JJVBF_BKG_MCFM_JESDn", &pConst_JJVBF_BKG_MCFM_JESDn, &b_pConst_JJVBF_BKG_MCFM_JESDn);
   fChain->SetBranchAddress("p_JJVBF_BKG_MCFM_JESDn", &p_JJVBF_BKG_MCFM_JESDn, &b_p_JJVBF_BKG_MCFM_JESDn);
   fChain->SetBranchAddress("pConst_HadZH_S_SIG_ghz1_1_MCFM_JESDn", &pConst_HadZH_S_SIG_ghz1_1_MCFM_JESDn, &b_pConst_HadZH_S_SIG_ghz1_1_MCFM_JESDn);
   fChain->SetBranchAddress("p_HadZH_S_SIG_ghz1_1_MCFM_JESDn", &p_HadZH_S_SIG_ghz1_1_MCFM_JESDn, &b_p_HadZH_S_SIG_ghz1_1_MCFM_JESDn);
   fChain->SetBranchAddress("p_HadZH_S_BSI_ghz1_1_MCFM_JESDn", &p_HadZH_S_BSI_ghz1_1_MCFM_JESDn, &b_p_HadZH_S_BSI_ghz1_1_MCFM_JESDn);
   fChain->SetBranchAddress("p_HadZH_S_BSI_ghz1_i_MCFM_JESDn", &p_HadZH_S_BSI_ghz1_i_MCFM_JESDn, &b_p_HadZH_S_BSI_ghz1_i_MCFM_JESDn);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_MCFM_JESDn", &p_HadZH_SIG_ghz1_1_MCFM_JESDn, &b_p_HadZH_SIG_ghz1_1_MCFM_JESDn);
   fChain->SetBranchAddress("p_HadZH_BSI_ghz1_1_MCFM_JESDn", &p_HadZH_BSI_ghz1_1_MCFM_JESDn, &b_p_HadZH_BSI_ghz1_1_MCFM_JESDn);
   fChain->SetBranchAddress("p_HadZH_BSI_ghz1_i_MCFM_JESDn", &p_HadZH_BSI_ghz1_i_MCFM_JESDn, &b_p_HadZH_BSI_ghz1_i_MCFM_JESDn);
   fChain->SetBranchAddress("pConst_HadZH_BKG_MCFM_JESDn", &pConst_HadZH_BKG_MCFM_JESDn, &b_pConst_HadZH_BKG_MCFM_JESDn);
   fChain->SetBranchAddress("p_HadZH_BKG_MCFM_JESDn", &p_HadZH_BKG_MCFM_JESDn, &b_p_HadZH_BKG_MCFM_JESDn);
   fChain->SetBranchAddress("pConst_HadWH_S_SIG_ghw1_1_MCFM_JESDn", &pConst_HadWH_S_SIG_ghw1_1_MCFM_JESDn, &b_pConst_HadWH_S_SIG_ghw1_1_MCFM_JESDn);
   fChain->SetBranchAddress("p_HadWH_S_SIG_ghw1_1_MCFM_JESDn", &p_HadWH_S_SIG_ghw1_1_MCFM_JESDn, &b_p_HadWH_S_SIG_ghw1_1_MCFM_JESDn);
   fChain->SetBranchAddress("p_HadWH_S_BSI_ghw1_1_MCFM_JESDn", &p_HadWH_S_BSI_ghw1_1_MCFM_JESDn, &b_p_HadWH_S_BSI_ghw1_1_MCFM_JESDn);
   fChain->SetBranchAddress("p_HadWH_S_BSI_ghw1_i_MCFM_JESDn", &p_HadWH_S_BSI_ghw1_i_MCFM_JESDn, &b_p_HadWH_S_BSI_ghw1_i_MCFM_JESDn);
   fChain->SetBranchAddress("pConst_HadWH_BKG_MCFM_JESDn", &pConst_HadWH_BKG_MCFM_JESDn, &b_pConst_HadWH_BKG_MCFM_JESDn);
   fChain->SetBranchAddress("p_HadWH_BKG_MCFM_JESDn", &p_HadWH_BKG_MCFM_JESDn, &b_p_HadWH_BKG_MCFM_JESDn);
   fChain->SetBranchAddress("pConst_JJQCD_BKG_MCFM_JESDn", &pConst_JJQCD_BKG_MCFM_JESDn, &b_pConst_JJQCD_BKG_MCFM_JESDn);
   fChain->SetBranchAddress("p_JJQCD_BKG_MCFM_JESDn", &p_JJQCD_BKG_MCFM_JESDn, &b_p_JJQCD_BKG_MCFM_JESDn);
   fChain->SetBranchAddress("p_JJEW_SIG_ghv1_1_MCFM_JERUp", &p_JJEW_SIG_ghv1_1_MCFM_JERUp, &b_p_JJEW_SIG_ghv1_1_MCFM_JERUp);
   fChain->SetBranchAddress("p_JJEW_BSI_ghv1_1_MCFM_JERUp", &p_JJEW_BSI_ghv1_1_MCFM_JERUp, &b_p_JJEW_BSI_ghv1_1_MCFM_JERUp);
   fChain->SetBranchAddress("p_JJEW_BSI_ghv1_i_MCFM_JERUp", &p_JJEW_BSI_ghv1_i_MCFM_JERUp, &b_p_JJEW_BSI_ghv1_i_MCFM_JERUp);
   fChain->SetBranchAddress("p_JJEW_BKG_MCFM_JERUp", &p_JJEW_BKG_MCFM_JERUp, &b_p_JJEW_BKG_MCFM_JERUp);
   fChain->SetBranchAddress("pConst_JJVBF_S_SIG_ghv1_1_MCFM_JERUp", &pConst_JJVBF_S_SIG_ghv1_1_MCFM_JERUp, &b_pConst_JJVBF_S_SIG_ghv1_1_MCFM_JERUp);
   fChain->SetBranchAddress("p_JJVBF_S_SIG_ghv1_1_MCFM_JERUp", &p_JJVBF_S_SIG_ghv1_1_MCFM_JERUp, &b_p_JJVBF_S_SIG_ghv1_1_MCFM_JERUp);
   fChain->SetBranchAddress("p_JJVBF_S_BSI_ghv1_1_MCFM_JERUp", &p_JJVBF_S_BSI_ghv1_1_MCFM_JERUp, &b_p_JJVBF_S_BSI_ghv1_1_MCFM_JERUp);
   fChain->SetBranchAddress("p_JJVBF_S_BSI_ghv1_i_MCFM_JERUp", &p_JJVBF_S_BSI_ghv1_i_MCFM_JERUp, &b_p_JJVBF_S_BSI_ghv1_i_MCFM_JERUp);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_MCFM_JERUp", &p_JJVBF_SIG_ghv1_1_MCFM_JERUp, &b_p_JJVBF_SIG_ghv1_1_MCFM_JERUp);
   fChain->SetBranchAddress("p_JJVBF_BSI_ghv1_1_MCFM_JERUp", &p_JJVBF_BSI_ghv1_1_MCFM_JERUp, &b_p_JJVBF_BSI_ghv1_1_MCFM_JERUp);
   fChain->SetBranchAddress("p_JJVBF_BSI_ghv1_i_MCFM_JERUp", &p_JJVBF_BSI_ghv1_i_MCFM_JERUp, &b_p_JJVBF_BSI_ghv1_i_MCFM_JERUp);
   fChain->SetBranchAddress("pConst_JJVBF_BKG_MCFM_JERUp", &pConst_JJVBF_BKG_MCFM_JERUp, &b_pConst_JJVBF_BKG_MCFM_JERUp);
   fChain->SetBranchAddress("p_JJVBF_BKG_MCFM_JERUp", &p_JJVBF_BKG_MCFM_JERUp, &b_p_JJVBF_BKG_MCFM_JERUp);
   fChain->SetBranchAddress("pConst_HadZH_S_SIG_ghz1_1_MCFM_JERUp", &pConst_HadZH_S_SIG_ghz1_1_MCFM_JERUp, &b_pConst_HadZH_S_SIG_ghz1_1_MCFM_JERUp);
   fChain->SetBranchAddress("p_HadZH_S_SIG_ghz1_1_MCFM_JERUp", &p_HadZH_S_SIG_ghz1_1_MCFM_JERUp, &b_p_HadZH_S_SIG_ghz1_1_MCFM_JERUp);
   fChain->SetBranchAddress("p_HadZH_S_BSI_ghz1_1_MCFM_JERUp", &p_HadZH_S_BSI_ghz1_1_MCFM_JERUp, &b_p_HadZH_S_BSI_ghz1_1_MCFM_JERUp);
   fChain->SetBranchAddress("p_HadZH_S_BSI_ghz1_i_MCFM_JERUp", &p_HadZH_S_BSI_ghz1_i_MCFM_JERUp, &b_p_HadZH_S_BSI_ghz1_i_MCFM_JERUp);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_MCFM_JERUp", &p_HadZH_SIG_ghz1_1_MCFM_JERUp, &b_p_HadZH_SIG_ghz1_1_MCFM_JERUp);
   fChain->SetBranchAddress("p_HadZH_BSI_ghz1_1_MCFM_JERUp", &p_HadZH_BSI_ghz1_1_MCFM_JERUp, &b_p_HadZH_BSI_ghz1_1_MCFM_JERUp);
   fChain->SetBranchAddress("p_HadZH_BSI_ghz1_i_MCFM_JERUp", &p_HadZH_BSI_ghz1_i_MCFM_JERUp, &b_p_HadZH_BSI_ghz1_i_MCFM_JERUp);
   fChain->SetBranchAddress("pConst_HadZH_BKG_MCFM_JERUp", &pConst_HadZH_BKG_MCFM_JERUp, &b_pConst_HadZH_BKG_MCFM_JERUp);
   fChain->SetBranchAddress("p_HadZH_BKG_MCFM_JERUp", &p_HadZH_BKG_MCFM_JERUp, &b_p_HadZH_BKG_MCFM_JERUp);
   fChain->SetBranchAddress("pConst_HadWH_S_SIG_ghw1_1_MCFM_JERUp", &pConst_HadWH_S_SIG_ghw1_1_MCFM_JERUp, &b_pConst_HadWH_S_SIG_ghw1_1_MCFM_JERUp);
   fChain->SetBranchAddress("p_HadWH_S_SIG_ghw1_1_MCFM_JERUp", &p_HadWH_S_SIG_ghw1_1_MCFM_JERUp, &b_p_HadWH_S_SIG_ghw1_1_MCFM_JERUp);
   fChain->SetBranchAddress("p_HadWH_S_BSI_ghw1_1_MCFM_JERUp", &p_HadWH_S_BSI_ghw1_1_MCFM_JERUp, &b_p_HadWH_S_BSI_ghw1_1_MCFM_JERUp);
   fChain->SetBranchAddress("p_HadWH_S_BSI_ghw1_i_MCFM_JERUp", &p_HadWH_S_BSI_ghw1_i_MCFM_JERUp, &b_p_HadWH_S_BSI_ghw1_i_MCFM_JERUp);
   fChain->SetBranchAddress("pConst_HadWH_BKG_MCFM_JERUp", &pConst_HadWH_BKG_MCFM_JERUp, &b_pConst_HadWH_BKG_MCFM_JERUp);
   fChain->SetBranchAddress("p_HadWH_BKG_MCFM_JERUp", &p_HadWH_BKG_MCFM_JERUp, &b_p_HadWH_BKG_MCFM_JERUp);
   fChain->SetBranchAddress("pConst_JJQCD_BKG_MCFM_JERUp", &pConst_JJQCD_BKG_MCFM_JERUp, &b_pConst_JJQCD_BKG_MCFM_JERUp);
   fChain->SetBranchAddress("p_JJQCD_BKG_MCFM_JERUp", &p_JJQCD_BKG_MCFM_JERUp, &b_p_JJQCD_BKG_MCFM_JERUp);
   fChain->SetBranchAddress("p_JJEW_SIG_ghv1_1_MCFM_JERDn", &p_JJEW_SIG_ghv1_1_MCFM_JERDn, &b_p_JJEW_SIG_ghv1_1_MCFM_JERDn);
   fChain->SetBranchAddress("p_JJEW_BSI_ghv1_1_MCFM_JERDn", &p_JJEW_BSI_ghv1_1_MCFM_JERDn, &b_p_JJEW_BSI_ghv1_1_MCFM_JERDn);
   fChain->SetBranchAddress("p_JJEW_BSI_ghv1_i_MCFM_JERDn", &p_JJEW_BSI_ghv1_i_MCFM_JERDn, &b_p_JJEW_BSI_ghv1_i_MCFM_JERDn);
   fChain->SetBranchAddress("p_JJEW_BKG_MCFM_JERDn", &p_JJEW_BKG_MCFM_JERDn, &b_p_JJEW_BKG_MCFM_JERDn);
   fChain->SetBranchAddress("pConst_JJVBF_S_SIG_ghv1_1_MCFM_JERDn", &pConst_JJVBF_S_SIG_ghv1_1_MCFM_JERDn, &b_pConst_JJVBF_S_SIG_ghv1_1_MCFM_JERDn);
   fChain->SetBranchAddress("p_JJVBF_S_SIG_ghv1_1_MCFM_JERDn", &p_JJVBF_S_SIG_ghv1_1_MCFM_JERDn, &b_p_JJVBF_S_SIG_ghv1_1_MCFM_JERDn);
   fChain->SetBranchAddress("p_JJVBF_S_BSI_ghv1_1_MCFM_JERDn", &p_JJVBF_S_BSI_ghv1_1_MCFM_JERDn, &b_p_JJVBF_S_BSI_ghv1_1_MCFM_JERDn);
   fChain->SetBranchAddress("p_JJVBF_S_BSI_ghv1_i_MCFM_JERDn", &p_JJVBF_S_BSI_ghv1_i_MCFM_JERDn, &b_p_JJVBF_S_BSI_ghv1_i_MCFM_JERDn);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_MCFM_JERDn", &p_JJVBF_SIG_ghv1_1_MCFM_JERDn, &b_p_JJVBF_SIG_ghv1_1_MCFM_JERDn);
   fChain->SetBranchAddress("p_JJVBF_BSI_ghv1_1_MCFM_JERDn", &p_JJVBF_BSI_ghv1_1_MCFM_JERDn, &b_p_JJVBF_BSI_ghv1_1_MCFM_JERDn);
   fChain->SetBranchAddress("p_JJVBF_BSI_ghv1_i_MCFM_JERDn", &p_JJVBF_BSI_ghv1_i_MCFM_JERDn, &b_p_JJVBF_BSI_ghv1_i_MCFM_JERDn);
   fChain->SetBranchAddress("pConst_JJVBF_BKG_MCFM_JERDn", &pConst_JJVBF_BKG_MCFM_JERDn, &b_pConst_JJVBF_BKG_MCFM_JERDn);
   fChain->SetBranchAddress("p_JJVBF_BKG_MCFM_JERDn", &p_JJVBF_BKG_MCFM_JERDn, &b_p_JJVBF_BKG_MCFM_JERDn);
   fChain->SetBranchAddress("pConst_HadZH_S_SIG_ghz1_1_MCFM_JERDn", &pConst_HadZH_S_SIG_ghz1_1_MCFM_JERDn, &b_pConst_HadZH_S_SIG_ghz1_1_MCFM_JERDn);
   fChain->SetBranchAddress("p_HadZH_S_SIG_ghz1_1_MCFM_JERDn", &p_HadZH_S_SIG_ghz1_1_MCFM_JERDn, &b_p_HadZH_S_SIG_ghz1_1_MCFM_JERDn);
   fChain->SetBranchAddress("p_HadZH_S_BSI_ghz1_1_MCFM_JERDn", &p_HadZH_S_BSI_ghz1_1_MCFM_JERDn, &b_p_HadZH_S_BSI_ghz1_1_MCFM_JERDn);
   fChain->SetBranchAddress("p_HadZH_S_BSI_ghz1_i_MCFM_JERDn", &p_HadZH_S_BSI_ghz1_i_MCFM_JERDn, &b_p_HadZH_S_BSI_ghz1_i_MCFM_JERDn);
   fChain->SetBranchAddress("p_HadZH_SIG_ghz1_1_MCFM_JERDn", &p_HadZH_SIG_ghz1_1_MCFM_JERDn, &b_p_HadZH_SIG_ghz1_1_MCFM_JERDn);
   fChain->SetBranchAddress("p_HadZH_BSI_ghz1_1_MCFM_JERDn", &p_HadZH_BSI_ghz1_1_MCFM_JERDn, &b_p_HadZH_BSI_ghz1_1_MCFM_JERDn);
   fChain->SetBranchAddress("p_HadZH_BSI_ghz1_i_MCFM_JERDn", &p_HadZH_BSI_ghz1_i_MCFM_JERDn, &b_p_HadZH_BSI_ghz1_i_MCFM_JERDn);
   fChain->SetBranchAddress("pConst_HadZH_BKG_MCFM_JERDn", &pConst_HadZH_BKG_MCFM_JERDn, &b_pConst_HadZH_BKG_MCFM_JERDn);
   fChain->SetBranchAddress("p_HadZH_BKG_MCFM_JERDn", &p_HadZH_BKG_MCFM_JERDn, &b_p_HadZH_BKG_MCFM_JERDn);
   fChain->SetBranchAddress("pConst_HadWH_S_SIG_ghw1_1_MCFM_JERDn", &pConst_HadWH_S_SIG_ghw1_1_MCFM_JERDn, &b_pConst_HadWH_S_SIG_ghw1_1_MCFM_JERDn);
   fChain->SetBranchAddress("p_HadWH_S_SIG_ghw1_1_MCFM_JERDn", &p_HadWH_S_SIG_ghw1_1_MCFM_JERDn, &b_p_HadWH_S_SIG_ghw1_1_MCFM_JERDn);
   fChain->SetBranchAddress("p_HadWH_S_BSI_ghw1_1_MCFM_JERDn", &p_HadWH_S_BSI_ghw1_1_MCFM_JERDn, &b_p_HadWH_S_BSI_ghw1_1_MCFM_JERDn);
   fChain->SetBranchAddress("p_HadWH_S_BSI_ghw1_i_MCFM_JERDn", &p_HadWH_S_BSI_ghw1_i_MCFM_JERDn, &b_p_HadWH_S_BSI_ghw1_i_MCFM_JERDn);
   fChain->SetBranchAddress("pConst_HadWH_BKG_MCFM_JERDn", &pConst_HadWH_BKG_MCFM_JERDn, &b_pConst_HadWH_BKG_MCFM_JERDn);
   fChain->SetBranchAddress("p_HadWH_BKG_MCFM_JERDn", &p_HadWH_BKG_MCFM_JERDn, &b_p_HadWH_BKG_MCFM_JERDn);
   fChain->SetBranchAddress("pConst_JJQCD_BKG_MCFM_JERDn", &pConst_JJQCD_BKG_MCFM_JERDn, &b_pConst_JJQCD_BKG_MCFM_JERDn);
   fChain->SetBranchAddress("p_JJQCD_BKG_MCFM_JERDn", &p_JJQCD_BKG_MCFM_JERDn, &b_p_JJQCD_BKG_MCFM_JERDn);
   fChain->SetBranchAddress("p_m4l_SIG", &p_m4l_SIG, &b_p_m4l_SIG);
   fChain->SetBranchAddress("p_m4l_BKG", &p_m4l_BKG, &b_p_m4l_BKG);
   fChain->SetBranchAddress("p_m4l_SIG_ScaleDown", &p_m4l_SIG_ScaleDown, &b_p_m4l_SIG_ScaleDown);
   fChain->SetBranchAddress("p_m4l_BKG_ScaleDown", &p_m4l_BKG_ScaleDown, &b_p_m4l_BKG_ScaleDown);
   fChain->SetBranchAddress("p_m4l_SIG_ResDown", &p_m4l_SIG_ResDown, &b_p_m4l_SIG_ResDown);
   fChain->SetBranchAddress("p_m4l_BKG_ResDown", &p_m4l_BKG_ResDown, &b_p_m4l_BKG_ResDown);
   fChain->SetBranchAddress("p_m4l_SIG_ScaleUp", &p_m4l_SIG_ScaleUp, &b_p_m4l_SIG_ScaleUp);
   fChain->SetBranchAddress("p_m4l_BKG_ScaleUp", &p_m4l_BKG_ScaleUp, &b_p_m4l_BKG_ScaleUp);
   fChain->SetBranchAddress("p_m4l_SIG_ResUp", &p_m4l_SIG_ResUp, &b_p_m4l_SIG_ResUp);
   fChain->SetBranchAddress("p_m4l_BKG_ResUp", &p_m4l_BKG_ResUp, &b_p_m4l_BKG_ResUp);
   fChain->SetBranchAddress("p_HadZH_mavjj_true_JECNominal", &p_HadZH_mavjj_true_JECNominal, &b_p_HadZH_mavjj_true_JECNominal);
   fChain->SetBranchAddress("p_HadWH_mavjj_true_JECNominal", &p_HadWH_mavjj_true_JECNominal, &b_p_HadWH_mavjj_true_JECNominal);
   fChain->SetBranchAddress("p_HadZH_mavjj_JECNominal", &p_HadZH_mavjj_JECNominal, &b_p_HadZH_mavjj_JECNominal);
   fChain->SetBranchAddress("p_HadWH_mavjj_JECNominal", &p_HadWH_mavjj_JECNominal, &b_p_HadWH_mavjj_JECNominal);
   fChain->SetBranchAddress("p_HadZH_mavjj_true_JESUp", &p_HadZH_mavjj_true_JESUp, &b_p_HadZH_mavjj_true_JESUp);
   fChain->SetBranchAddress("p_HadWH_mavjj_true_JESUp", &p_HadWH_mavjj_true_JESUp, &b_p_HadWH_mavjj_true_JESUp);
   fChain->SetBranchAddress("p_HadZH_mavjj_JESUp", &p_HadZH_mavjj_JESUp, &b_p_HadZH_mavjj_JESUp);
   fChain->SetBranchAddress("p_HadWH_mavjj_JESUp", &p_HadWH_mavjj_JESUp, &b_p_HadWH_mavjj_JESUp);
   fChain->SetBranchAddress("p_HadZH_mavjj_true_JESDn", &p_HadZH_mavjj_true_JESDn, &b_p_HadZH_mavjj_true_JESDn);
   fChain->SetBranchAddress("p_HadWH_mavjj_true_JESDn", &p_HadWH_mavjj_true_JESDn, &b_p_HadWH_mavjj_true_JESDn);
   fChain->SetBranchAddress("p_HadZH_mavjj_JESDn", &p_HadZH_mavjj_JESDn, &b_p_HadZH_mavjj_JESDn);
   fChain->SetBranchAddress("p_HadWH_mavjj_JESDn", &p_HadWH_mavjj_JESDn, &b_p_HadWH_mavjj_JESDn);
   fChain->SetBranchAddress("p_HadZH_mavjj_true_JERUp", &p_HadZH_mavjj_true_JERUp, &b_p_HadZH_mavjj_true_JERUp);
   fChain->SetBranchAddress("p_HadWH_mavjj_true_JERUp", &p_HadWH_mavjj_true_JERUp, &b_p_HadWH_mavjj_true_JERUp);
   fChain->SetBranchAddress("p_HadZH_mavjj_JERUp", &p_HadZH_mavjj_JERUp, &b_p_HadZH_mavjj_JERUp);
   fChain->SetBranchAddress("p_HadWH_mavjj_JERUp", &p_HadWH_mavjj_JERUp, &b_p_HadWH_mavjj_JERUp);
   fChain->SetBranchAddress("p_HadZH_mavjj_true_JERDn", &p_HadZH_mavjj_true_JERDn, &b_p_HadZH_mavjj_true_JERDn);
   fChain->SetBranchAddress("p_HadWH_mavjj_true_JERDn", &p_HadWH_mavjj_true_JERDn, &b_p_HadWH_mavjj_true_JERDn);
   fChain->SetBranchAddress("p_HadZH_mavjj_JERDn", &p_HadZH_mavjj_JERDn, &b_p_HadZH_mavjj_JERDn);
   fChain->SetBranchAddress("p_HadWH_mavjj_JERDn", &p_HadWH_mavjj_JERDn, &b_p_HadWH_mavjj_JERDn);
   fChain->SetBranchAddress("pConst_JJVBF_SIG_ghv1_1_JHUGen_JECNominal_BestDJJ", &pConst_JJVBF_SIG_ghv1_1_JHUGen_JECNominal_BestDJJ, &b_pConst_JJVBF_SIG_ghv1_1_JHUGen_JECNominal_BestDJJ);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_JHUGen_JECNominal_BestDJJ", &p_JJVBF_SIG_ghv1_1_JHUGen_JECNominal_BestDJJ, &b_p_JJVBF_SIG_ghv1_1_JHUGen_JECNominal_BestDJJ);
   fChain->SetBranchAddress("pConst_JJQCD_SIG_ghg2_1_JHUGen_JECNominal_BestDJJ", &pConst_JJQCD_SIG_ghg2_1_JHUGen_JECNominal_BestDJJ, &b_pConst_JJQCD_SIG_ghg2_1_JHUGen_JECNominal_BestDJJ);
   fChain->SetBranchAddress("p_JJQCD_SIG_ghg2_1_JHUGen_JECNominal_BestDJJ", &p_JJQCD_SIG_ghg2_1_JHUGen_JECNominal_BestDJJ, &b_p_JJQCD_SIG_ghg2_1_JHUGen_JECNominal_BestDJJ);
   fChain->SetBranchAddress("pConst_JJVBF_SIG_ghv1_1_JHUGen_JESUp_BestDJJ", &pConst_JJVBF_SIG_ghv1_1_JHUGen_JESUp_BestDJJ, &b_pConst_JJVBF_SIG_ghv1_1_JHUGen_JESUp_BestDJJ);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_JHUGen_JESUp_BestDJJ", &p_JJVBF_SIG_ghv1_1_JHUGen_JESUp_BestDJJ, &b_p_JJVBF_SIG_ghv1_1_JHUGen_JESUp_BestDJJ);
   fChain->SetBranchAddress("pConst_JJQCD_SIG_ghg2_1_JHUGen_JESUp_BestDJJ", &pConst_JJQCD_SIG_ghg2_1_JHUGen_JESUp_BestDJJ, &b_pConst_JJQCD_SIG_ghg2_1_JHUGen_JESUp_BestDJJ);
   fChain->SetBranchAddress("p_JJQCD_SIG_ghg2_1_JHUGen_JESUp_BestDJJ", &p_JJQCD_SIG_ghg2_1_JHUGen_JESUp_BestDJJ, &b_p_JJQCD_SIG_ghg2_1_JHUGen_JESUp_BestDJJ);
   fChain->SetBranchAddress("pConst_JJVBF_SIG_ghv1_1_JHUGen_JESDn_BestDJJ", &pConst_JJVBF_SIG_ghv1_1_JHUGen_JESDn_BestDJJ, &b_pConst_JJVBF_SIG_ghv1_1_JHUGen_JESDn_BestDJJ);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_JHUGen_JESDn_BestDJJ", &p_JJVBF_SIG_ghv1_1_JHUGen_JESDn_BestDJJ, &b_p_JJVBF_SIG_ghv1_1_JHUGen_JESDn_BestDJJ);
   fChain->SetBranchAddress("pConst_JJQCD_SIG_ghg2_1_JHUGen_JESDn_BestDJJ", &pConst_JJQCD_SIG_ghg2_1_JHUGen_JESDn_BestDJJ, &b_pConst_JJQCD_SIG_ghg2_1_JHUGen_JESDn_BestDJJ);
   fChain->SetBranchAddress("p_JJQCD_SIG_ghg2_1_JHUGen_JESDn_BestDJJ", &p_JJQCD_SIG_ghg2_1_JHUGen_JESDn_BestDJJ, &b_p_JJQCD_SIG_ghg2_1_JHUGen_JESDn_BestDJJ);
   fChain->SetBranchAddress("pConst_JJVBF_SIG_ghv1_1_JHUGen_JERUp_BestDJJ", &pConst_JJVBF_SIG_ghv1_1_JHUGen_JERUp_BestDJJ, &b_pConst_JJVBF_SIG_ghv1_1_JHUGen_JERUp_BestDJJ);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_JHUGen_JERUp_BestDJJ", &p_JJVBF_SIG_ghv1_1_JHUGen_JERUp_BestDJJ, &b_p_JJVBF_SIG_ghv1_1_JHUGen_JERUp_BestDJJ);
   fChain->SetBranchAddress("pConst_JJQCD_SIG_ghg2_1_JHUGen_JERUp_BestDJJ", &pConst_JJQCD_SIG_ghg2_1_JHUGen_JERUp_BestDJJ, &b_pConst_JJQCD_SIG_ghg2_1_JHUGen_JERUp_BestDJJ);
   fChain->SetBranchAddress("p_JJQCD_SIG_ghg2_1_JHUGen_JERUp_BestDJJ", &p_JJQCD_SIG_ghg2_1_JHUGen_JERUp_BestDJJ, &b_p_JJQCD_SIG_ghg2_1_JHUGen_JERUp_BestDJJ);
   fChain->SetBranchAddress("pConst_JJVBF_SIG_ghv1_1_JHUGen_JERDn_BestDJJ", &pConst_JJVBF_SIG_ghv1_1_JHUGen_JERDn_BestDJJ, &b_pConst_JJVBF_SIG_ghv1_1_JHUGen_JERDn_BestDJJ);
   fChain->SetBranchAddress("p_JJVBF_SIG_ghv1_1_JHUGen_JERDn_BestDJJ", &p_JJVBF_SIG_ghv1_1_JHUGen_JERDn_BestDJJ, &b_p_JJVBF_SIG_ghv1_1_JHUGen_JERDn_BestDJJ);
   fChain->SetBranchAddress("pConst_JJQCD_SIG_ghg2_1_JHUGen_JERDn_BestDJJ", &pConst_JJQCD_SIG_ghg2_1_JHUGen_JERDn_BestDJJ, &b_pConst_JJQCD_SIG_ghg2_1_JHUGen_JERDn_BestDJJ);
   fChain->SetBranchAddress("p_JJQCD_SIG_ghg2_1_JHUGen_JERDn_BestDJJ", &p_JJQCD_SIG_ghg2_1_JHUGen_JERDn_BestDJJ, &b_p_JJQCD_SIG_ghg2_1_JHUGen_JERDn_BestDJJ);
   Notify();
}

Bool_t Analyzer::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void Analyzer::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t Analyzer::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef Analyzer_cxx
