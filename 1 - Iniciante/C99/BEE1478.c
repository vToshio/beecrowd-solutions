#include <stdio.h>
#define true 1

int main(void)
{
    int num, i, j;

    while (true)
    {
        scanf("%d", &num);
        if (num==0) break;

        int mat[num][num];

        for (i=0; i<num; i++)
        {
            for (j=0; j<num; j++)
            {
                if (i==j) 
                    mat[i][j] = 1;
                else if (j>i)
                    mat[i][j] = mat[i][j-1] + 1;
                else
                    mat[i][j] = mat[i-1][j] + 1;
            }   
        }

        for (i=0; i<num; i++)
        {
            for (j=0; j<num; j++)
            {
                if (j==0) printf("%3d", mat[i][j]);
                else printf(" %3d", mat[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}