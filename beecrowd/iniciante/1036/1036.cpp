#include <stdlib.h>
#include <stdio.h>
#include <cmath>

float A, B, C, delta, raiz, r1, r2;
main(){
    scanf("%f %f %f", &A, &B, &C);

    delta = (B*B) - 4 * A * C;

    if(delta > 0 && A > 0){
        raiz = sqrt(delta);
        r1 = (-B + raiz)/(2*A);
        r2 = (-B - raiz)/(2*A);
        printf("R1 = %.5f\n", r1);
        printf("R2 = %.5f\n", r2); 
    }else{
        printf("Impossivel calcular\n");
    }
}