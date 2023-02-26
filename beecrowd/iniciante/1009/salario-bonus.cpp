#include <stdio.h>
#include <stdlib.h>

char nome [20] ;
double s, vendas, total;
int main(){
    scanf("%s %lf %lf", nome, &s, &vendas);
    total = s + (vendas * 0.15);
    printf("TOTAL = R$ %.2lf\n", total);
}