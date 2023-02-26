#include <stdlib.h>
#include <stdio.h>

int n, h;
float sh, s;
int main(){
    scanf("%i %i %f", &n, &h, &sh);
    s = sh*h;
    printf("NUMBER = %i\n", n);
    printf("SALARY = U$ %.2f\n", s); 
}