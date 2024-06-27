#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[10];
    int count=3, soma=0;
    unsigned tamanho, i;

    while (count!=0)
    {
        gets(input);
        
        if (strcmp(input, "caw caw")==0)
        {
            printf("%d\n", soma);
            soma = 0;
            count -= 1;
        }
        else
        {
            tamanho = strlen(input);
            for (i=0; i<tamanho; i++)
            {
                if ((i==0) && (input[i]=='*')) soma += 4;
                else if ((i==1) && (input[i]=='*')) soma += 2;
                else if ((i==2) && (input[i]=='*')) soma += 1;
            }
        }

        memset(input, 0, 10);
    }  
    
    return 0;
}