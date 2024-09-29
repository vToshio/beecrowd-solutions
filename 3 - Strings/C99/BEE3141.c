#include <stdio.h>

int main()
{
    char nome[50];
    int da, ma, aa;
    int dn, mn, an;
	int idade;
    scanf("%[^\n]%*c", nome);
    scanf("%d/%d/%d", &da, &ma, &aa);
    scanf("%d/%d/%d", &dn, &mn, &an);

    idade = aa - an;

    int d[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};

    int xa = d[ma - 1] + da;
    int xn = d[mn - 1] + dn;

    if ((idade == 0) || (xa < xn))
        printf("Voce tem %d anos %s.\n", (idade - 1) < 0 ? 0 : idade - 1, nome);
    else if (xa == xn)
        printf("Feliz aniversario!\nVoce tem %d anos %s.\n", idade, nome);
    else
        printf("Voce tem %d anos %s.\n", idade, nome);
    return 0;
}