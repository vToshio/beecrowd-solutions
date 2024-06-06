#include <stdio.h>

int main(){
	float n1, n2, media;
	
	while(1){
		
		//Entrada de dados c/ validação
		do{
			scanf("%f", &n1);
		
			if (n1 < 0 || n1 > 10) printf("nota invalida\n");
		} while (n1 < 0 || n1 > 10);
	
		do{
			scanf("%f", &n2);
		
			if (n2 < 0 || n2 > 10) printf("nota invalida\n");
		}while (n2 < 0 || n2 > 10); 
	
		//Média
		media = (n1 + n2) / 2;
		printf("media = %.2f\n", media);
		
		//Nova operação
		int op;
		
		printf("novo calculo (1-sim 2-nao)\n");
		scanf("%d", &op);
		
		while (1){
			if (op == 1) break;
			else if (op == 2) return 0;
			else{
				printf("novo calculo (1-sim 2-nao)\n");
				scanf("%d", &op);
			}
		}
	}
}