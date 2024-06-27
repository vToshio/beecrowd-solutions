#include <stdio.h>

int main(void)  
{
    int casos, val, i;
    unsigned long long int fib[61];

    fib[0] = 0;
    fib[1] = 1;
    for (i=2; i<=60; i++) fib[i] = fib[i-1] + fib[i-2];    

    scanf("%d", &casos);
    for (i=1; i<=casos; i++)
    {
        scanf("%d", &val);
        printf("Fib(%d) = %llu\n", val, fib[val]);
    }

    return 0;
}