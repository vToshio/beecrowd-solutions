#include <stdio.h>

int main(void){
	int num, i;
	int maior=0, posicao=0;
	
	for (i=1; i<=100; i++){
		scanf("%d", &num);
		
		if (num > maior){
			maior = num;
			posicao = i;
		}
	}
	
	printf("%d\n", maior);
	printf("%d\n", posicao);
	
	return 0;
}