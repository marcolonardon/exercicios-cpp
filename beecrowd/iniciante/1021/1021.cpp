#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float valor, resto;
int cem=0, cinquenta=0, vinte=0, dez=0, cinco=0, dois=0, um=0;
int cinquenta_c=0, vinte_e_cinco_c=0, dez_c=0, cinco_c=0, um_c=0;

main(){
    scanf("%f", &valor);   
    
    if(valor > 0){
        cem = valor / 100;
        resto = fmod(valor, 100);
        cinquenta = resto / 50;
        resto = fmod(resto, 50);
        vinte = resto / 20;
        resto = fmod(resto, 20);
        dez = resto / 10;
        resto = fmod(resto, 10);
        cinco = resto / 5;
        resto = fmod(resto, 5);
        dois = resto / 2;
        resto = fmod(resto, 2);
        um = resto / 1;
        resto = fmod(resto, 1);  

        resto *= 100.0;
       // printf("\n\n%f\n\n", resto);  
        cinquenta_c = resto / 50;
        resto = fmod(resto, 50);
        vinte_e_cinco_c = resto / 25;
        resto = fmod(resto, 25);
        dez_c = resto / 10;
        resto = fmod(resto, 10);
        cinco_c = resto / 5;
        resto = fmod(resto, 5);
        um_c = resto / 1;
        resto = fmod(resto, 1);   
       // printf("\n\n%f\n\n", resto);   
    }

    if(resto > 0.9 && resto < 1.00){
        um_c++;
    }

    printf("NOTAS:\n");
    printf("%i nota(s) de R$ 100.00\n", cem); 
    printf("%i nota(s) de R$ 50.00\n", cinquenta); 
    printf("%i nota(s) de R$ 20.00\n", vinte); 
    printf("%i nota(s) de R$ 10.00\n", dez); 
    printf("%i nota(s) de R$ 5.00\n", cinco); 
    printf("%i nota(s) de R$ 2.00\n", dois); 
    printf("MOEDAS:\n");
    printf("%i moeda(s) de R$ 1.00\n", um);
    printf("%i moeda(s) de R$ 0.50\n", cinquenta_c);
    printf("%i moeda(s) de R$ 0.25\n", vinte_e_cinco_c);
    printf("%i moeda(s) de R$ 0.10\n", dez_c);
    printf("%i moeda(s) de R$ 0.05\n", cinco_c);
    printf("%i moeda(s) de R$ 0.01\n", um_c);

}