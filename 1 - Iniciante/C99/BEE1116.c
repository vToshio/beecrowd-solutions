#include <stdio.h>

int main(void){
	int num, x, y;
	int i;
	
	scanf("%d", &num);
	
	for (i=1; i<=num; i++){
		
		scanf("%d %d", &x, &y);
		
		if (y == 0)	
			printf("divisao impossivel\n");
		else
			printf("%.1f\n", (float) x/y);
	}
	
	return 0;
}