#include <stdio.h>

int main(void)
{
    float aux, mat[12][12];
    int count, i, j;
    char operacao;

    scanf(" %c", &operacao);

    for (i=0; i<12; i++)
    {
        for (j=0; j<12; j++)
        {
            scanf("%f", &mat[i][j]);
        }
    }

    aux = 0;
    count = 0;
    if (operacao == 'S')
    {
        for (i=0; i<12; i++)
            for (j=0; j<12; j++)
                if (j<i)
                {
                    aux += mat[i][j];
                }
        printf("%.1f\n", aux);
    }
    else
    {
        for (i=0; i<12; i++)
            for (j=0; j<12; j++)
                if (j<i)
                {
                    aux += mat[i][j];
                    count++;
                }
        printf("%.1f\n", aux/count);
    }

    return 0;
}
