#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int casos, i, num1, num2, aux;
    char op;

    scanf("%d", &casos);

    for (i=0; i<casos; i++)
    {
        scanf("%d%c%d", &num1, &op, &num2);

        if (num1!=num2)
        {
            if (isupper(op)!=0)
                aux = num2 - num1;
            else 
                aux = num1 + num2;
        }
        else aux = num1 * num2;

        printf("%d\n", aux);
    }
}