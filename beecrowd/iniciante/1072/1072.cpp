#include <stdlib.h>
#include <stdio.h>

int i, num, in=0, out=0;
main(){
    scanf("%i", &i);

    while (i>0){
        i--;
        scanf("%i", &num);
        if(num>=10 && num<=20)
            in++;
        else
            out++;
    }
    
    printf("%i in\n", in);
    printf("%i out\n", out);
}