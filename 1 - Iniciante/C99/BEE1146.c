#include <stdio.h>

int main(void){
	int num, i;
	
	while (scanf("%d", &num), num){
		
		for (i=1; i<=num-1; i++){
			printf("%d ", i);
		}
		printf("%d", num);	
		printf("\n");
		
	}
		
	return 0;
}