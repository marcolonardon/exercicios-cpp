#include <stdio.h>
#include <stdlib.h>

int n[20];
main(){
    for(int i = 19; i >= 0; i--){
        scanf("%i", &n[i]);
    }
    for(int i = 0; i < 20; i++){
        printf("N[%i] = %i\n", i, n[i]);
    }
}