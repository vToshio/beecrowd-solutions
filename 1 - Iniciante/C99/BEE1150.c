#include <stdio.h>

int main(void){
	int x, z;
	int i, count=0, soma=0;
	
	scanf("%d", &x);
	
	do{
		scanf("%d", &z);
	} while(x>=z);
	
	for (i=x; i<z; i++){
		soma += i;
		count++;
		if (soma > z) break;
	}
	printf("%d\n", count);
	
	return 0;
}