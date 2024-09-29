#include <stdio.h>
#include <string.h>

int main(void) {
    int alice[100001], beatriz[100001];
    int a, b, carta, unicasA, unicasB, soma;

    while (scanf("%d %d", &a, &b)) {
        if (!a && !b) break;

        memset(alice, 0, sizeof(alice));
        memset(beatriz, 0, sizeof(beatriz));

        //Verifica a quantidade de cartas únicas pertencentes à Alice
        unicasA = 0;
        for (int i=0; i<a; i++) {
            scanf("%d", &carta);
            if (!alice[carta]) {
                alice[carta] = 1;
                unicasA++;
            }
        }

        //Verifica a quantidade de cartas pertencentes à Beatriz
        //e que convergem com as da Alice
        soma = 0, unicasB = 0;
        for (int i=0; i<b; i++) {
            scanf("%d", &carta);
            if (!beatriz[carta]) {
                beatriz[carta] = 1;
                unicasB++;
                if (alice[carta])
                    soma++;
            }
        }
    
        unicasA = unicasA - soma;
        unicasB = unicasB - soma;

        printf("%d\n", unicasA < unicasB ? unicasA : unicasB);
    }

    return 0;
}