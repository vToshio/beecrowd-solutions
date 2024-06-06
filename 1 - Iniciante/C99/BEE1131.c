#include <stdio.h>

int main(void){
	int gremio, inter;
	int empates=0, vinter=0, vgremio=0;
	int qtd_grenais=1, novo_grenal;
	
	while (1){
		scanf("%d %d", &inter, &gremio);
		
		if (gremio>inter)	
			vgremio++;
		else if (inter>gremio)
			vinter++;
		else 
			empates++;
		
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &novo_grenal);
		
		if (novo_grenal == 1)
			qtd_grenais++;
		else
			break;	
	}
	
	printf("%d grenais\n", qtd_grenais);
	printf("Inter:%d\n", vinter);
	printf("Gremio:%d\n", vgremio);
	printf("Empates:%d\n", empates);
	if (inter>gremio)
		printf("Inter venceu mais\n");
	else if (gremio>inter)
		printf("Gremio venceu mais\n");
	else 
		printf("Nao houve vencedor\n");
	
}