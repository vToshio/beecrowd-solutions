#include <stdio.h>

int main(void){
	int num, i;
	
	scanf("%d", &num);
	
	for (i=1; i<=10; i++){
		printf("%d x %d = %ld\n", i, num, i * num);
	}
	
	return 0;
}