#include <stdio.h>
#include <string.h>

int main(void)
{
	int casos, maior, tamanho1, tamanho2, i, j;
	char string1[51], string2[51];
	
	scanf("%d", &casos);
	getchar();
	
	for (i=1; i<=casos; i++)
	{
		scanf("%s %s", string1, string2);
		tamanho1 = strlen(string1);
		tamanho2 = strlen(string2);

		if (tamanho1>tamanho2) maior = tamanho1;
		else maior = tamanho2;

		for (j=0; j<maior; j++)
		{
			if (j<tamanho1) printf("%c", string1[j]);
			if (j<tamanho2) printf("%c", string2[j]);
		}
		printf("\n");
	}
	
	return 0;
}
