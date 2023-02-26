#include <stdlib.h>
#include <stdio.h>

int a, b, c, maior;
int main(){
    scanf("%i %i %i", &a, &b, &c);
    maior = (a+b+abs(a-b))/2;
    maior = (maior+c+abs(maior-c))/2;
    printf("%i eh o maior\n", maior);
}