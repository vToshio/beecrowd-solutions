#include <stdio.h>

int main(void){
	int i, pos=0;
	float num;
	
	for (i=1; i<=6; i++){
		scanf("%f", &num);
		
		if (num > 0){
			pos += 1;
		}
	}
	printf("%d valores positivos\n", pos);
	
	return 0;
}