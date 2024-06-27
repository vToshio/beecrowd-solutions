#include <stdio.h>

int main(void)
{
    int i, num, menor=0, posi=0;

    scanf("%d", &num);
    int vet[num];

    for (i=0; i<num; i++)
    {
        scanf("%d", &vet[i]);
    }

    menor = vet[0];
    for (i=0; i<num; i++)
    {
        if (vet[i]<menor)
        {
            menor = vet[i];
            posi = i;
        }
    }

    printf("%d\n", posi+1);
}