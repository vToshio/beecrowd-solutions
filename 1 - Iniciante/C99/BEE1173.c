#include <stdio.h>

int main(void)
{
    int N[10];

    do {
        scanf("%d", &N[0]);
    } while ((N[0] < 0) || (N[0] > 50));

    printf("N[0] = %d\n", N[0]);
    for (int i=1; i<10; i++) {
        N[i] = N[i-1] * 2;
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}