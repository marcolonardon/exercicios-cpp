#include <stdio.h>
#include <stdlib.h>

int dias, ano=0, mes=0, dia=0;
main(){
    scanf("%i", &dias); 

    while (dias > 0){
        if(dias - 365 >= 0){
            ano++;
            dias = dias - 365;
        }else if(dias - 30 >= 0){
            mes++;
            dias = dias - 30;
        }else {
            dia++;
            dias = dias - 1;
        }   
    }
    
    printf("%i ano(s)\n", ano);
    printf("%i mes(es)\n", mes);
    printf("%i dia(s)\n", dia);
}
