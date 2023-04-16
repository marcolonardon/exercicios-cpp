#include <stdlib.h>
#include <stdio.h>

int valor, impar=0, par=0, positivo=0, negativo=0;
main(){
    for(int i=0; i<5; i++){
        scanf("%d", &valor);
        if(valor%2==0){
            par++;
        }else{
            impar++;
        }
        if(valor<0){
            negativo++;
        }else if(valor>0){
            positivo++;
        }
    }

    printf("%i valor(es) par(es)\n%i valor(es) impar(es)\n%i valor(es) positivo(s)\n%i valor(es) negativo(s)\n", par, impar, positivo, negativo );
}