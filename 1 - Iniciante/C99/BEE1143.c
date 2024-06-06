#include <stdio.h>
#include <math.h>

int main(void){
	int i, num;
	
	scanf("%d", &num);
	
	for (i=1; i<=num; i++){
		printf("%d %d %d\n", i, (int) pow(i, 2), (int) pow(i, 3));
	}
	
	return 0;
}