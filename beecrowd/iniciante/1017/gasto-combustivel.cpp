#include <stdlib.h>
#include <stdio.h>

int t, vm;
float gasto;
int main(){
    scanf("%i %i", &t, &vm);
    gasto = (t*vm)/12.0;
    printf("%.3f\n", gasto);
}