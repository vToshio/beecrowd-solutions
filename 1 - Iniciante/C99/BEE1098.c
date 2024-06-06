#include <stdio.h>
#include <math.h>

int main(void){
	float i=0, j=1;
	int n;
	
	while (i<2.2) {

		if ((i>0 && i<1) || (i>1.1 && i<2) || (i>2.1 && i<2.2))
			printf("I=%.1f J=%.1f\nI=%.1f J=%.1f\nI=%.1f J=%.1f\n", i, j+i, i, j+1+i, i, j+1+1+i);
		else 
			printf("I=%d J=%d\nI=%d J=%d\nI=%d J=%d\n", (int) i, (int) (j+i), (int) i, (int) (j+1+i), (int) i, (int) (j+1+1+i));
			
		i += 0.2;
	} while (i<=2.2)
	
	return 0;
}