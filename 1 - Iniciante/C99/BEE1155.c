#include <stdio.h>

int main(void){
	float s=1;
	int i;
	
	for (i=2; i<=100; i++){
		s += 1 / (float) i;
	}
	printf("%.2f\n", s);
	
	return 0;
}