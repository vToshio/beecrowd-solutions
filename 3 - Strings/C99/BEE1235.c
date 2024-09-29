#include <stdio.h>
#include <string.h>

int main()
{
    char string[101], decifrado[101];
    int casos, i, j, k;
    int tamanho, meio;

    scanf("%d", &casos);
	getchar();

    for (i=1; i<=casos; i++)
    {   
		gets(string);
		
        tamanho = strlen(string);
        meio = tamanho/2; 
    
        for (k=0, j=meio-1; j>=0; j--, k++) 
        {
            decifrado[k] = string[j];
        } 
        for (j=tamanho-1; j>=meio; j--, k++) 
        {
            decifrado[k] = string[j];
		} 
        decifrado[k] = '\0';
        
        printf("%s\n", decifrado);
    }

    return 0;
}