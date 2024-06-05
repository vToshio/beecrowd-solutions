#include <stdio.h>

int main(){
	float x, y;
	
	//Entrada dos pontos
	scanf("%f %f", &x, &y);
	
	//Validação da posição
	if (x==0 && y==0){
		printf("Origem\n");		
	}
	else if (x>0 && y>0){
		printf("Q1\n");
	}
	else if (x<0 && y>0){
		printf("Q2\n");
	}
	else if (x<0 && y<0){
		printf("Q3\n");
	}
	else if (x>0 && y<0){
		printf("Q4\n");
	}
	else if (x==0 && y!=0){
		printf("Eixo Y\n");
	}
	else if (x!=0 && y==0){
		printf("Eixo X\n");
	}
}
