#include <stdio.h>

int main(){
	int num;
	int i, soma;
	
	while (scanf("%d", &num), num){
		if (num % 2 != 0)
			num += 1;
					
		soma = 0;
		for (i=1; i<=5; i++){
			soma += num;
			num += 2;
		}
		
		printf("%d\n", soma);	
	}
	
	return 0;
}