#include <stdio.h>

char impedimento(int atacantes[], int defensores[])
{
    if (atacantes[0] < defensores[1])
        return 'Y';
    return 'N';
}

void sort(int lista[], int esq, int dir)
{
    int pivot = lista[esq];
    int i = esq;
    int j = dir;
    int aux;

    if (i<=j) {
        while (lista[i]<pivot && i<dir) i++;
        while (lista[j]>pivot && j>esq) j--;

        if (i<=j) {
            aux = lista[i];
            lista[i] = lista[j];
            lista[j] = aux;

            i++, j--;
        }
    }

    if (i<dir)
        sort(lista, i, dir);
    if (j>esq)
        sort(lista, esq, j);
}

int main(void) 
{
    int a, d;
    char imp;

    while (scanf("%d %d", &a, &d) && (a!=0 && d!=0)) {
        int atacantes[a], defensores[d];

        for (int i=0; i<a; i++) scanf("%d", &atacantes[i]);
        for (int i=0; i<d; i++) scanf("%d", &defensores[i]);

        sort(atacantes, 0, a-1);
        sort(defensores, 0, d-1);

        imp = impedimento(atacantes, defensores);

        printf("%c\n", imp);
    }

    return 0;
}