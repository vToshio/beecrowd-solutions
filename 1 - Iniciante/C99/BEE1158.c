#include <stdio.h>

int main(){
	int soma, casos;
	int i, j, x, y;
	
	scanf("%d", &casos);
	
	for (i=1; i<=casos; i++){
		scanf("%d %d", &x, &y);
		
		soma = 0;
		if (x % 2 == 0){
			x++;
			do {
				soma += x;
				x += 2;
				y--;
			} while (y >= 1);
		}
		else {
			do {
				soma += x;
				x += 2;
				y--;
			} while (y >= 1);
		}
		
		printf("%d\n", soma);
	}
	
	return 0;
}