#include <stdio.h>

int main(void){
	int n1, n2, i;
	int soma=0;
	
	scanf("%d %d", &n1, &n2);
	
	if (n1>n2){	
		for (i=n2+1; i<n1; i++){
			if (i % 2 != 0)
				soma += i;
		}	
	}	
	else{
		for (i=n1+1; i<n2; i++){
			if (i % 2 != 0)
				soma += i;
		}	
	}
	printf("%d\n", soma);
	
	return 0;
}