#include <stdio.h>

int main(void)
{
    int num, i, j;

    while (scanf("%d", &num)!=EOF)
    {
        int mat[num][num];


        for (i=0; i<num; i++)
        {
            for (j=0; j<num; j++)
            {
                if (i==j)
                    mat[i][j] = 1;
                if (i == num - j - 1)
                    mat[i][j] = 2;
                if (i!=num-j-1 && i!=j) 
                    mat[i][j] = 3;
            }
        }

        for (i=0; i<num; i++)
        {
            for (j=0; j<num; j++)
            {
                printf("%d", mat[i][j]);
            }
            printf("\n");
        }
    }   

    return 0;
}