#include <stdio.h>

int main(void)
{
    int i=0, x[10];

    do {
       scanf("%d", &x[i]);
       if (x[i]<=0) x[i] = 1; 
       i++;
    } while(i<10);

    for (i=0; i<10; i++) printf("X[%d] = %d\n", i, x[i]);    

    return 0;
}