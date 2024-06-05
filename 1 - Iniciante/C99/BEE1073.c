#include <stdio.h>

int main(void){
	int i, num;
	
	scanf("%d", &num);
		
	for (i=1; i<=num; i++){
		if (i % 2 == 0)
			printf("%d^2 = %ld\n", i ,(int) pow(i, 2));	
	}
	
	return 0;
}