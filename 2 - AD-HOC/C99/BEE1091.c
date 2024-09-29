#include <stdio.h>

#define false 0
#define true 1

int main(void) {
    int qtd;

    while (true) {
        int m, n, x, y;

        scanf("%d", &qtd);
        if (qtd == 0)
            break;

        scanf("%d %d", &m, &n);

        for (int i=0; i<qtd; i++) {
            scanf("%d %d", &x, &y);

            if (x==m || y==n)
                printf("divisa\n");
            else if (x>m && y>n)
                printf("NE\n");
            else if (x<m && y>n)
                printf("NO\n");
            else if (x<m && y<n)
                printf("SO\n");
            else if (x>m && y<n)
                printf("SE\n");
        }
    }

    return 0;
}