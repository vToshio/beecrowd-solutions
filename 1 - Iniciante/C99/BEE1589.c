#include <stdio.h>

int main(void)
{
    int casos, i;
    int r1, r2;

    scanf("%d", &casos);
    for (i=0; i<casos; i++)
    {
        scanf("%d %d", &r1, &r2);
        printf("%d\n", r1 + r2);
    }

    return 0;
}