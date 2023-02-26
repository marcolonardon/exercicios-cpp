#include <stdio.h>
#include <stdlib.h>

int c1, c2, q1, q2;
double preco1, preco2, total;
int main(){
    scanf("%i %i %lf", &c1, &q1, &preco1);
    scanf("%i %i %lf", &c2, &q2, &preco2);
    total = q1 * preco1 + q2 * preco2;
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
}