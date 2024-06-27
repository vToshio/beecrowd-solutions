#include <stdio.h>

int main(void)
{
    float num, aux, mat[12][12];
    int coluna, i, j;
    char operacao;

    scanf("%d", &coluna);
    scanf(" %c", &operacao);

    for (i=0; i<12; i++)
    {
        for (j=0; j<12; j++)
        {
            scanf("%f", &num);
            mat[i][j] = num;
        }
    }
    
    aux = 0;
    for (j=coluna, i=0; i<12; i++)
    {
        aux += mat[i][j];
    }
    
    if (operacao == 'S') printf("%.1f\n", aux);
    else if (operacao == 'M') printf("%.1f\n", aux/12);
    else printf("Invalid operation.\n");

    return 0;
}