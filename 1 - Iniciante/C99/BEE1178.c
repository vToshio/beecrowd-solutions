#include <stdio.h>

int main(void)
{
    int i;
    double num, N[101];

    scanf("%lf", &num);

    N[0] = num;
    for (i=0; i<100; i++) 
    {
        printf("N[%d] = %.4lf\n", i, N[i]);
        N[i+1] = N[i] / 2;
    }
 
    return 0;
}