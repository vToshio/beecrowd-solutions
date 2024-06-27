#include <stdio.h>

int main(void){
	int i, num, fat=1;
	
	scanf("%d", &num);
	
	for (i=num; i>=1; i--){
		fat *= i ;
	}
	printf("%d\n", fat);
	
	return 0;
}