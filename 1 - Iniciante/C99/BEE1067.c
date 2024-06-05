#include <stdio.h>

int main(){
	int num=0, i;
	
	//Entrada de dados
	scanf("%d", &num);
	
	//Imprimir os valores impares na tela
	for (i = 1; i<=num; i++) {
		if (i % 2 != 0)
			printf("%d\n", i);	
	}
	
	return 0;
}