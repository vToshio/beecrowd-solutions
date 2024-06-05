#include <stdio.h>

int main(){
	int a, b;
	
	//Entrada de Dados
	scanf("%d %d", &a, &b);
	
	//Validação de Múltiplos
	if (a % b == 0 || b % a == 0){
		printf("Sao Multiplos\n");
	} 
	else{
		printf("Nao sao Multiplos\n");
	}

    return 0;
}