#include <stdio.h>
#include <stdlib.h>

int segundos, h, m, s;
main(){
    scanf("%i", &segundos);
    while (segundos > 0){
        if (segundos >= 3600){
            for (h = 0; segundos>=3600; h++){
            segundos=segundos-3600;
            }
        }  
        if (segundos >= 60){
            for (m = 0; segundos>=60; m++){
            segundos=segundos-60;
            }
        }  
        if (segundos >= 1){
            for (s = 0; segundos>=1; s++){
            segundos=segundos-1;
            }
        }  
    }

    printf("%i:%i:%i\n", h, m, s);
    
    return 0;
}