#include <stdio.h>
#include <math.h>

int main(){
	double a, b, c;
	double delta;
	
	//Entrada de Dados
	scanf("%lf %lf %lf", &a, &b, &c);
	
	//Definição do delta
	delta = pow(b, 2) - 4*a*c;
	
	//Aplicação de Bhaskara	
	if(a==0 || delta<0){
		printf("Impossivel calcular\n");
	} 
	else{
		printf("R1 = %.5lf\n", (-b + sqrt(delta))/ (2 * a)); 
		printf("R2 = %.5lf\n", (-b - sqrt(delta))/(2 * a)); 		
	}	
}
