#include <stdio.h>
#include <math.h>

#define true 1
#define false 0;

int main(void)
{
    int comp, larg, percent;
    int area;

    while (true)
    {
        scanf("%d", &comp);
        if (comp==0) break;
        
        scanf("%d", &larg);
        if (larg==0) break;

        scanf("%d", &percent);
        if (percent==0) break;

        area = ((comp*larg) * 100) / percent;

        printf("%.0lf\n", floor(sqrt(area)));
    }
    return 0;
}