#include <stdio.h>

int valida_hora(int hi, int mini, int hf, int minf)
{
    if (hi==0) hi = 24;
    if (hf==0) hf = 24;
    
    if (hf>hi)
        return (hf*60 + minf) - (hi*60 + mini);
    else if (hf==hi)
    {
        if (minf>=mini)
            return minf - mini;
        else    
            return 24*60 - (mini-minf);   
    }
    else
        return (24*60 - (hi*60 + mini)) + (hf*60 + minf);
}

int main(void)
{
    int h1, m1, h2, m2, minutos;

    while (1)
    {
        scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
        if (h1==0 && m1==0 && h2==0 && m2==0) break;

        minutos = valida_hora(h1, m1, h2, m2);

        printf("%d\n", minutos);
    }

    return 0;
}