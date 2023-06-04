#include <stdio.h>
#include <stdlib.h>

int v, n[10];
main(){
    scanf("%i", &v);
    n[0] = v;

    for(int i = 1; i < 10; i++){
        n[i] = 2 * n[i-1];
    }

    for(int i = 0; i < 10; i++){
        printf("N[%i] = %i\n", i, n[i]);
    }
}