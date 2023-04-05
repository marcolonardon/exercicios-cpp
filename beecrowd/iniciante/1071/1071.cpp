#include <stdio.h>
#include <stdlib.h>
int x, y, soma=0, i, maior, menor;
main(){
    scanf("%d %d", &x, &y);
    if(x>y){
        maior = x;
        menor = y;
    }else{
        maior = y;
        menor = x;
    }
    for(i=menor+1; i<maior; i++){
        if(i%2 != 0){
            soma += i;
        }
    }
    printf("%d\n", soma);
}