#include <stdio.h>
#include <stdlib.h>

int n;
main(){
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        if(i % 2 == 0){
            printf("%d^2 = %d\n",i, i*i);
        }
    }
}