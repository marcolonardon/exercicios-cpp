#include <stdio.h>
#include <stdlib.h>

int valor, cem, cinquenta, vinte, dez, cinco, dois, um;
int main(){
    scanf("%i", &valor);
    printf("%i\n", valor);
    while (valor>0){
        if (valor >= 100){
            for (cem = 0; valor>=100; cem++){
            valor=valor-100;
        }  
        }
        if(valor >= 50){
            for (cinquenta = 0; valor>=50; cinquenta++){
                valor=valor-50;
            }  
        }
        if(valor >= 20){
            for (vinte = 0; valor>=20; vinte++){
                valor=valor-20;
            }  
        }
        else if(valor >= 10){
            for (dez = 0; valor>=10; dez++){
                valor=valor-10;
            }  
        }else if(valor >= 5){
            for (cinco = 0; valor>=5; cinco++){
                valor=valor-5;
            }  
        }else if(valor >= 2){
            for (dois = 0; valor>=2; dois++){
                valor=valor-2;
            }  
        }else if(valor >= 1){
            for (um = 0; valor>=1; um++){
                valor=valor-1;
            }  
        }
    }
    printf("%i nota(s) de R$ 100,00\n", cem);
    printf("%i nota(s) de R$ 50,00\n", cinquenta);
    printf("%i nota(s) de R$ 20,00\n", vinte);
    printf("%i nota(s) de R$ 10,00\n", dez);
    printf("%i nota(s) de R$ 5,00\n", cinco);
    printf("%i nota(s) de R$ 2,00\n", dois);
    printf("%i nota(s) de R$ 1,00\n", um);
}