#include <stdio.h>
#include <string.h>
#include <ctype.h>

void verifica_valor(char a, char b[])
{
    char output[4001];
    int tamanho, posi=0, i, j, zeros;

    //Monta a string de output do valor, excluindo a falha
    tamanho = strlen(b);
    for (i=0, j=0; i<tamanho; i++)
    {    
        if (a != b[i]) {
            output[j] = b[i];
            j++;
        }
        else 
            continue;
    }
    output[j] = '\0';

    //Verifica a string de output
    for (zeros=0, i=0; i<j; i++)
    {
        if (output[i] == '0') zeros++; //conta a quantidade de 0
        else { //Se encontra um valor que não é zero, armazena a posicao e sai do loop
            posi = i;
            break;
        }
    }

    //Se a string não é composta só de 0:
    tamanho = j;
    if (zeros!=tamanho){
        for (j=0, i=posi; i<tamanho; i++, j++) //Passa pela string de novo, transformando o output num valor a partir da posicao encontrada
        {
            output[j] = output[i];
        }    
        output[j] = '\0';
    }
    else if (zeros == tamanho) 
    {
        memset(output, 0, sizeof(output));
        output[0] = '0';
        output[1] = '\0';
    }

    printf("%s\n", output);
}

int main(void)
{
    char falha, valor[4001];

    while(scanf("%c %s", &falha, valor))
    {
        //limpeza do buffer
        getchar();

        if ((falha == '0') && (valor[0] == '0')) break;

        //função pra verificação do valor
        verifica_valor(falha, valor);
    }
    
    return 0;
}