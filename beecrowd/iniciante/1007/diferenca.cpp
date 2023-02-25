#include <stdlib.h>
#include <stdio.h>

int A, B, C, D, DIFERENCA;
int main(){
    scanf("%i %i %i %i", &A, &B, &C, &D);
    DIFERENCA = (A * B - C * D);
    printf("DIFERENCA = %i\n", DIFERENCA);
}