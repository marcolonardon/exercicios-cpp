#include <stdlib.h>
#include <stdio.h>

float a[100];
main(){
    for(int i = 0; i < 100; i++){
        scanf("%f", &a[i]);
    }
    for(int i = 0; i < 100; i++){
        if(a[i] <= 10) 
            printf("A[%i] = %.1f\n", i, a[i]);
    }
}