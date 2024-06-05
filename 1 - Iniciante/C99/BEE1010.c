#include <stdio.h>
 
int main() {
    int cod, qde;
    float preco, valor;
    
    //entrada e saida de dados do primeiro produto
    scanf("%d %d %f", &cod, &qde, &preco);
    valor = preco * qde;
    
    //entrada e saida de dados do segundo produto
    scanf("%d %d %f", &cod, &qde, &preco);
    valor = valor + preco * qde;
    
    printf("VALOR A PAGAR: R$ %.2f\n", valor);
    
    return 0;
}