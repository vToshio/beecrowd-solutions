#include <stdio.h>

int main(){
	int n1, n2;
	int soma;
	
	//Entrada de Dados
	while (1){
		scanf("%d %d", &n1, &n2);
		
		//Se n1 ou n2 == 0, interrompe o if
		if (n1 <= 0 || n2 <= 0) break;
		
		//Imprimir o intervalo na tela
		soma = 0;
		if (n1 < n2){		
			for (n1; n1 <= n2; n1++){
				printf("%d ", n1);
				soma += n1; 	
			}
		} 
		else{
			for (n2; n2 <= n1; n2++){
				printf("%d ", n2);
				soma += n2;
			}
		}
		printf("Sum=%d\n", soma);
	}
}