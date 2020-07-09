#include "Analyzer.h"


using namespace std;

int main(){

	Analyzer *signal = new Analyzer("/home/public/data/Data_Run2/");
	signal->Loop();
	signal->sumall();

   	

	
	

	//a->runArgusModel();
	//a->runArgusModel();
	//a->Theoretical_noHiggs();
	//a->Expected_p_value_scan();
	//a->PlotMass();
	
return 0;
}
