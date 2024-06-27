#include <stdio.h>

int main(void)
{
    int dia1, dia2, dia3, aumento1, aumento2;

    scanf("%d %d %d", &dia1, &dia2, &dia3);
    aumento1 = dia2 - dia1;
    aumento2 = dia3 - dia2;

    if(dia1>dia2)
    {
        if(dia2>dia3)
        {
            if(aumento1<aumento2) printf(":)\n");
            else printf(":(\n");
        }
        else printf(":)\n");
    }
    else if(dia2>dia1)
    {
        if(dia3>dia2)
        {
            if(aumento2<aumento1) printf(":(\n");
            else printf(":)\n");
        }
        else printf(":(\n");
    }
    else if(dia3>dia2) printf(":)\n");
    else printf(":(\n");
    
    return 0;
}