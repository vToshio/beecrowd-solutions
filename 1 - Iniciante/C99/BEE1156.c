#include <stdio.h>
#include <math.h>

int main(void){
	float s=1;
	int divisor=1, dividendo=1, power=1;
	
	while (divisor<40){
		divisor += 2;		
		dividendo = pow(2, power);

		s += (float) divisor / (float) dividendo;
		
		power++;
	}
	printf("%.2f\n", s);
	
	return 0;
}