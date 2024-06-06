#include <stdio.h>

int main(void){
	int casos, x, y;
	int soma=0, i, j;
		
	scanf("%d", &casos);
	
	for (i=1; i<=casos; i++){
		
		scanf("%d %d", &x, &y);
		
		soma=0;
		if (y>x){
			for (j=x+1; j<y; j++){
				if (j % 2 != 0)
					soma += j;
			}
		}
		else {
			for (j=y+1; j<x; j++){
				if (j % 2 != 0)
					soma += j;
			}
		}
		
		printf("%d\n", soma);
		
	}
	
	return 0;
}