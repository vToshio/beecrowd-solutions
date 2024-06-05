#include <stdio.h>

int main(){
	int h_ini, min_ini, h_fin, min_fin;
	int horas, minutos;
	
	//Entrada de dados
	scanf("%d %d %d %d", &h_ini, &min_ini, &h_fin, &min_fin);
	
	//Conferir as horas
	minutos = ((h_fin * 60 + min_fin) - (h_ini*60 + min_ini));
	if(minutos<=0){
		minutos += 24*60;
	}
	horas = minutos/60;
	minutos = minutos%60;
	
	//Saída de dados
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);

    return 0;
}
