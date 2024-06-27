#include <stdio.h>
#include <math.h>

int main(){
	int casos, i;
	int PA, PB, anos;
	float G1, G2;
	
	scanf("%d", &casos);
	
	for (i=1; i<=casos; i++){
	
		scanf("%d %d %f %f", &PA, &PB, &G1, &G2);
		
		anos = 0;
		while (PA <= PB){
			
			PA = floor(PA + (PA * G1 / 100));
			PB = floor(PB + (PB * G2 / 100));
			
			anos++;
			
			if (anos>100) break;
		}
		if (anos>100)
			printf("Mais de 1 seculo.\n");
		else
			printf("%d anos.\n", anos);	
	}
	
	return 0;
}