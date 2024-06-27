#include <stdio.h>
#define true 1

int main(void)
{
    int ordem, i, j;

    while (true)
    {
        scanf("%d", &ordem);
        if (ordem == 0) break;

        int mat[ordem][ordem];
        int fim_mat=ordem, ini_mat=0, elem=1;

        while (true)
        {
            
            for (i = ini_mat; i < fim_mat; i++) {
                for (j=ini_mat; j<fim_mat; j++) {
                    mat[i][j] = elem;
                }
            }

            if (fim_mat==0) break;

            fim_mat--, ini_mat++, elem++;
        }

        for (i=0; i<ordem; i++) {
            for (j=0; j<ordem; j++) {
                if (j==0)
                    printf("%3d", mat[i][j]);
                else
                    printf(" %3d", mat[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}