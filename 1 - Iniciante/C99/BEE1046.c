#include <stdio.h>

int main(void){
	int h_ini, h_fin;
	int horas;
	
	scanf("%d %d", &h_ini, &h_fin);
	
	if (h_fin > h_ini)
		horas = h_fin - h_ini;
	else
		horas = (24 - h_ini) + h_fin;
		
	printf("O JOGO DUROU %d HORA(S)\n", horas);
	
	return 0;
}