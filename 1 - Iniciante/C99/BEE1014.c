#include <stdio.h>
 
int main() {
	int distancia;
	float consumo, combustivel;
	
	scanf("%d", &distancia);
	scanf("%f", &combustivel);
	
	consumo = distancia / combustivel;
	
	printf("%.3f km/l\n", consumo);

	return 0;
}