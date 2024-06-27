#include <stdio.h>

int main(void){
	int num1, num2;
	int i;
	
	scanf("%d %d", &num1, &num2); 
	
	for (i=1; i<=num2-1; i++){
		if (i % num1 == 0)
			printf("%d\n", i);
		else
			printf("%d ", i);
	}
	printf("%d\n", num2);
	
	return 0;
}