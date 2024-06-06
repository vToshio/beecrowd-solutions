#include <stdio.h>

int main(void){
	int tentativa, senha=2002;
	
	while (1){
			
		scanf("%d", &tentativa);
		
		if (tentativa != senha) 
			printf("Senha Invalida\n");
		else {
			printf("Acesso Permitido\n");
			break;
		}	
	}
	
	return 0;
}