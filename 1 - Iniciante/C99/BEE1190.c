#include <stdio.h>

int main(void)
{
    double aux, mat[12][12];
    int count, i, j;
    char operacao;

    scanf("%c", &operacao);

    for (i=0; i<12; i++)
    {
        for (j=0; j<12; j++)
        {
            scanf("%lf", &mat[i][j]);
        }
    }

    aux = 0;
    count = 0;
    for (i=0; i<12; i++) 
    {
        for (j=0; j<12; j++) 
        {
            if ((i<j) && (i>12-1-j))
            {
                aux += mat[i][j];
                count++;
            }
        }
    }

    if (operacao == 'S') printf("%.1lf\n", aux);
    else printf("%.1lf\n", aux/count);

    return 0;
}