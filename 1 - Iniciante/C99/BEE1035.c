#include <stdio.h>

int main(){
	int a, b, c, d;
	
	//Entrada de Dados
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	//Validação
	if (b>c &&
		d>a &&
		c + d > a + b &&
		c > 0 &&
		d > 0 &&
		a % 2 == 0){
		
		printf("Valores aceitos\n");		
	}
	else {
		printf("Valores nao aceitos\n");
	}
}