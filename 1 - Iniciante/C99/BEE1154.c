#include <stdio.h>

int main(void){
	int num, soma=0;
	float count=0;
	
	while (1){
		scanf("%d", &num);
		if (num < 0) break;
		
		soma += num;
		count++;
	} 
	
	printf("%.2f\n", soma/count); 
		
	return 0;
}