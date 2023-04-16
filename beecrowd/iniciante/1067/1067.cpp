#include <stdio.h>
#include <stdlib.h>

int x, impar;
main(){
    scanf("%d",&x);
    for(int i=1; i<=x; i++){
        if(i%2>0){
            impar = i;
            printf("%d\n",impar);
        }
    }
}