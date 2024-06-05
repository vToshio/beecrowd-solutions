#include <stdio.h>
 
int main() {
    int A, B, DIFF;
    
    scanf("%d", &A);
    scanf("%d", &B);
    
    DIFF = A * B;
    
    scanf("%d", &A);
    scanf("%d", &B);
    
    DIFF = DIFF - (A * B);
    
    printf("DIFERENCA = %d\n", DIFF);
 
    return 0;
}