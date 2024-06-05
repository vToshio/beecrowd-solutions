#include <stdio.h>

int main(void){
	int i, num;
	
	scanf("%d", &num);
	
	while (i<6){
		if (num % 2 != 0){
			printf("%d\n", num);
			i++;
		} 
		num++;
	}
	
	return 0;
}