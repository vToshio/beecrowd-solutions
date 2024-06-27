#include <stdio.h>

int main(void){
	int casos, num;
	int i, j, soma;
	
	scanf("%d", &casos);
	
	for (i=1; i<=casos; i++){
		
		scanf("%d", &num);
		
		soma = 0;
		for (j=1; j<num; j++){
			if (num%j == 0)
				soma += j;
		}
		
		if (soma == num)
			printf("%d eh perfeito\n", num);
		else
			printf("%d nao eh perfeito\n", num);
		
	}
	
	return 0;
}