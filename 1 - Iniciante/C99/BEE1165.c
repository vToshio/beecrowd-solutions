#include <stdio.h>

int main(void){
	int casos, num;
	int i, j, divisores;
	
	scanf("%d", &casos);
	
	for (i=1; i<=casos; i++){
		
		scanf("%d", &num);
		
		divisores = 0;
		for (j=1; j<=num; j++){
			if (num % j == 0)
				divisores++;
		}
		
		if (divisores > 2)
			printf("%d nao eh primo\n", num);
		else 
			printf("%d eh primo\n", num);
		
	} 
	
	return 0;
}