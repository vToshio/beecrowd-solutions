#include <stdio.h>
#include <string.h>

int main(void)
{
    char string1[101], string2[101], out[202];
    unsigned i, j, k, t1, t2, maior;
    int casos;

    scanf("%d", &casos);
    getchar();

    for (i=0; i<casos; i++)
    {
        gets(string1);
        gets(string2);

        t1 = strlen(string1);
        t2 = strlen(string2);
        if (t1 > t2) maior = t1;
        else maior = t2;

        for (j=0, k=0; k<maior; j+=4, k+=2)
        {
            out[j] = string1[k];
            out[j+1] = string1[k+1];
            out[j+2] = string2[k];
            out[j+3] = string2[k+1];
        }
        out[j] = '\0';

        printf("%s\n", out);
    }

    return 0;
}