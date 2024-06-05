#include <stdio.h>

int main(void){
	int i, pos=0;
	float num, soma=0;
	
	for (i=1; i<=6; i++){
		scanf("%f", &num);
		
		if (num>0){
			pos += 1;
			soma += num;
		}
	}
	
	printf("%d valores positivos\n", pos);
	printf("%.1f\n", soma/pos);
	
	return 0;
}