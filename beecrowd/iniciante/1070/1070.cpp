#include <stdlib.h>
#include <stdio.h>

int n, i;
main(){
    scanf("%d",&n);
    while(i<6){
        if(n % 2 == 0){
            n++;
        }else{
            printf("%d\n", n);
            n++;            
            i++;
        }
    }
}