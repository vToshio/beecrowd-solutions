#include <stdio.h>

int main(void)
{
    int T, N[1001];
    int i, j;

    do
    {
        scanf("%d", &T);
    } while ((T < 2) || (T > 50));
    
    j = 0;
    for (i=0; i<1000; i++)
    {
        N[i] = j;
        printf("N[%d] = %d\n", i, N[i]);
        j++;
        if (j == T) j = 0;
    }
    
    return 0;
}