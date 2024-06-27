#include <stdio.h>

int main(void)
{
    float num, aux, mat[12][12];
    int linha, i, j;
    char operacao;

    scanf("%d", &linha);
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
    for (i=linha, j=0; j<12; j++)
    {
        aux += mat[i][j];
    }
    
    if (operacao == 'S') printf("%.1f\n", aux);
    else printf("%.1f\n", aux/12);

    return 0;
}