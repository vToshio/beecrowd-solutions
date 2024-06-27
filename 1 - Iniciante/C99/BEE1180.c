#include <stdio.h>

int main(void)
{
    int i, num, menor, posi;
    scanf("%d", &num);
    int x[num];

    scanf("%d", &x[0]);
    menor = x[0];
    posi = 0;
    for (i=1; i<num; i++)
    {
        scanf("%d", &x[i]);

        if (x[i]<menor) {
            menor = x[i];
            posi = i;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posi);

    return 0;
}