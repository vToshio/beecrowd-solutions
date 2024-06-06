#include <stdio.h>

int main(void){
	int num, i;
	float v1, v2, v3;
	
	scanf("%d", &num);
	
	for (i=1; i<=num; i++){
		scanf("%f %f %f", &v1, &v2, &v3);	
		printf("%.1f\n", (v1 * 2 + v2 * 3 + v3 * 5) / 10);
	}
	
	return 0;
}