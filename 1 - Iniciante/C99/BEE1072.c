#include <stdio.h>

int main(void){
	int i, casos, num;
	int in=0, out=0;
	
	scanf("%d", &casos);
	
	for (i=1;i<=casos; i++){
		
		scanf("%d", &num);
		
		if (num < 10 || num > 20)
			out++;
		else
			in++;
	}
	
	printf("%d in\n", in);
	printf("%d out\n", out);
	
	return 0;
}