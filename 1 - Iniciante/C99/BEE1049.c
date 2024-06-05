#include <stdio.h>
#include <string.h>

int main() {
	char p1[13], p2[13], p3[13];
	
	//Entrada de dados
	fflush(stdin); //limpar o buffer do teclado
	scanf("%s %s %s", p1, p2, p3);
	
	//Validação usando strcmp(a1, "string") - devolve 0 se forem iguais e 1 se forem diferentes
	if (strcmp(p1, "vertebrado") == 0){
		if (strcmp(p2, "ave") == 0){
			if (strcmp(p3, "carnivoro") == 0)
				printf("aguia\n");
			else
				printf("pomba\n");
		}
		else {
			if (strcmp(p3, "onivoro") == 0)
				printf("homem\n");
			else 
				printf("vaca\n");
		}
	}
	else {
		if (strcmp(p2, "inseto") == 0){
			if (strcmp(p3, "hematofago") == 0)
				printf("pulga\n");
			else  
				printf("lagarta\n");
		}
		else {
			if (strcmp(p3, "hematofago") == 0)
				printf("sanguessuga\n");	
			else  
				printf("minhoca\n");
		}
	}

    return 0;
}