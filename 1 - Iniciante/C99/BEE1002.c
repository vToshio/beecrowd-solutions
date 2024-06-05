#include <stdio.h>
 
int main() {
    double a, pi, r;
    
    scanf("%lf", &r);
    pi = 3.14159;
    a = pi * pow(r, 2);
 
    printf("A=%.4lf\n", a);
    
    return 0;
}