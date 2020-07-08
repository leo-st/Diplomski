#include "Analyzer.h"


using namespace std;

int main(){

	Analyzer *signal = new Analyzer("/home/public/data/HiggsMassMeasurement/2018/ggH125/");
	
	signal->sumall();

   	

	
	

	//a->runArgusModel();
	//a->runArgusModel();
	//a->Theoretical_noHiggs();
	//a->Expected_p_value_scan();
	//a->PlotMass();
	
return 0;
}
