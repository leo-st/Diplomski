#include "Analyzer.h"


using namespace std;

int main(){

	Analyzer *signal = new Analyzer();
	//signal->Loop();
	//signal->runArgusModel();
	signal->sumall("/home/public/data/HiggsMassMeasurement/2018/ggH125/");
	signal->sumall("/home/public/data/2018_MC/ZZTo4lext1/");


	signal->sumall("/home/public/data/2018_MC/ggTo4mu_Contin_MCFM701/");

   	

	
	

	//a->runArgusModel();
	//a->runArgusModel();
	//a->Theoretical_noHiggs();
	//a->Expected_p_value_scan();
	//a->PlotMass();
	
return 0;
}
