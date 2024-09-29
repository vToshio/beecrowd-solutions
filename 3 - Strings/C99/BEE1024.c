#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int casos, tam, meio, i, j, k;
    char string[1001], output[1001];

    scanf("%d", &casos);
    getchar();

    for (i=1; i<=casos; i++)
    {
        gets(string);
        tam = strlen(string);
        meio = tam/2;

        //primeira passada
        for (j=0; j<tam; j++)
        {
            if ((isupper(string[j]) != 0) || (islower(string[j]) != 0))
                string[j] += 3;
        }

        //segunda passada
        for (k=0, j=tam-1; j>=0; j--, k++)
        {
            output[k] = string[j];
        }
        output[j] = '\0';

        //terceira passada
        for (j=meio; j<=tam-1; j++)
        {
            output[j] -= 1; 
        }
        output[j] = '\0';

        printf("%s\n", output);
        memset(string, 0, sizeof(string));
    }

    return 0;
}