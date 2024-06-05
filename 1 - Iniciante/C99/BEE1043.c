#include <stdio.h>

int main(){
	float a, b, c;
	
	//Entrada de Dados
	scanf("%f %f %f", &a, &b, &c);
	
	//Validação triângulos
	if ((a < b + c ) && (b < a + c ) && (c < a + b))
		printf("Perimetro = %.1f\n", a + b + c);
	else 
		printf("Area = %.1f\n", (a+b)*c/ 2);
	
	return 0;
}