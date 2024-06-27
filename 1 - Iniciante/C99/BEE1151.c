#include <stdio.h>

int main(void){
	int i, num;
	int n1=0, n2=1, fib=0;
	
	scanf("%d", &num);
	
	for (i=0; i<num-1; i++){
		if (i<1){
			fib += i;
			printf("%d ", fib);
		}
		else if (i==1) 
			printf("%d ", i);
		else {
			fib = n1 + n2;
			n1 = n2;
			n2 = fib;
			printf("%d ", fib);
		}
	}
	fib = n1 + n2;
	printf("%d\n", fib);
	
	return 0;
}