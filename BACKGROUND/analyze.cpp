#include "Analyzer.h"

using namespace std;

int main(){

	Analyzer *a = new Analyzer("/home/public/data/2018_MC/ZZTo4lext1/");
	//a->Loop();
	a->ZZTo4lext1();
	//Analyzer *b = new Analyzer("/home/public/data/2018_MC/ggTo4mu_Contin_MCFM701/");
	//b->ggTo4mu();

	//a->runArgusModel();
	//a->runArgusModel();
	//a->Theoretical_noHiggs();
	//a->Expected_p_value_scan();
	//a->PlotMass();
	
return 0;
}
