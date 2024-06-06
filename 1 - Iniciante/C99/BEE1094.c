#include <stdio.h>

int main(void){
	int casos, qtd, total=0;
	int i, c=0, r=0, s=0;
	char tipo;
	
	scanf("%d", &casos);
	
	for (i = 1; i<=casos; i++){
		
		scanf("%d %c", &qtd, &tipo);
		
		total += qtd;
		
		if (tipo == 'C'){
			c += qtd;
		} else if (tipo == 'R'){
			r += qtd;
		} else s += qtd;
	}
	
	printf("Total: %d cobaias\n", total);
	printf("Total de coelhos: %d\n", c);
	printf("Total de ratos: %d\n", r);
	printf("Total de sapos: %d\n", s);
	printf("Percentual de coelhos: %.2f %%\n", (float) (c * 100) / total);
	printf("Percentual de ratos: %.2f %%\n", (float) (r * 100) / total);
	printf("Percentual de sapos: %.2f %%\n", (float) (s * 100) / total);
	
	return 0;
}
