#include <stdio.h>

int main(void){
	int i=0,num;
	
	scanf("%d", &num);
	
	while (i<num*4){

		printf("%d %d %d PUM\n", (i+1), (i+2), (i+3));

		i += 4;
	}	
	
	return 0;
}