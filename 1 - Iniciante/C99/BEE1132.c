#include <stdio.h>

int main(void){
	int soma, x, y;
	int i;
	
	scanf("%d %d", &x, &y);
	
	soma = 0;
	if (x < y){
		for (i=x; i<=y; i++){
			if (i % 13 != 0)
				soma += i;
		}
	}
	else{
		for (i=y; i<=x; i++){
			if (i % 13 != 0)
				soma += i;
		}
	}
	
	printf("%d\n", soma);
	
	return 0;
}