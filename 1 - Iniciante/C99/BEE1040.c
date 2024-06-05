#include <stdio.h>

int main(){
	double n1, n2, n3, n4, n_exame;
	double media;
	
	//Entrada das notas
	scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
	
	//Média
	media = ((n1*2) + (n2*3) + (n3*4) + (n4*1)) / 10;
	printf("Media: %.1lf\n", media);
	
	//Validação da nota
	if (media >= 7){
		printf("Aluno aprovado.\n");
	} else if (media>=5){
		printf("Aluno em exame.\n");
		
		scanf("%lf", &n_exame);
		printf("Nota do exame: %.1lf\n", n_exame);
		
		//Nova média
		media = (media + n_exame) / 2;
		
		//Validação da nova média
		if (media >= 5){
			printf("Aluno aprovado.\n");
		} else if (media <= 4.9){
			printf("Aluno reprovado.\n");
		}
		
		printf("Media final: %.1lf\n", media);
    }  else if (media < 5){
		printf("Aluno reprovado.\n");
	} 		

    return 0;
}