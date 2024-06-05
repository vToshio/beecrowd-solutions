#include <stdio.h>

int main(void){
	float salario;
	int reajuste;
	
	scanf("%f", &salario);
	
	if (salario >= 0 && salario <= 400)
		reajuste = 15;
	else if (salario > 400 && salario <=800)
		reajuste = 12;
	else if (salario > 800 && salario <= 1200)
		reajuste = 10;
	else if (salario > 1200 && salario <= 2000)
		reajuste = 7;
	else 
		reajuste = 4;
		
	printf("Novo salario: %.2f\n", salario + (salario * ((float) reajuste/100)));
	printf("Reajuste ganho: %.2f\n", salario * ((float) reajuste/100));
	printf("Em percentual: %d %%\n", reajuste);
		
	return 0;
}