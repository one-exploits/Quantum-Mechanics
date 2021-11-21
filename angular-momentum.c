#include <stdio.h>
#include <math.h>
double angular_momentum_ofe(int);
int main(){
	int shell=0;
	double angular_momentum;
	angular_momentum=angular_momentum_ofe(shell);
	
	while(1)
	{
   angular_momentum=angular_momentum_ofe(shell);
		printf("\n\033[93m shell-Number>> n=%d && Angular-Momentum(r×p)=%.7e",shell,angular_momentum);
		usleep(59000);
	shell++;
	}
}
double angular_momentum_ofe(int shell){
	double L,h_cut,h;
	h=6.62607004e-34;
	h_cut=(h/(2*M_PI));
	L=h_cut*shell;
	return L;	
		
			}	