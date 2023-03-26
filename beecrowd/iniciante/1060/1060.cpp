#include <stdio.h>
#include <stdlib.h>

float n;
int i, flag;
main(){
    for(i=0; i<6; i++){
        scanf("%f", &n);
        if(n > 0){
            flag++;
        }
    }    
    printf("%i valores positivos\n", flag);
}