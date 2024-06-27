#include <stdio.h>

int nivel(int v)
{
    if(v < 10) 
        return 1;
    else if ((v>=10) && (v<20)) 
        return 2;
    else 
        return 3;
}

int main(void)
{
    int i=0, qtd;
    
    while (scanf("%d", &qtd)!=EOF)
    {
        int mais_rap, v_lesmas[qtd];
        
        mais_rap = 0;
        for (i=0; i<qtd; i++)
        {
            scanf("%d", &v_lesmas[i]);
            if (v_lesmas[i]>mais_rap) mais_rap = v_lesmas[i];
        }
        printf("%d\n", nivel(mais_rap));

    }

    return 0;
}