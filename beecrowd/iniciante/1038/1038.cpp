#include <stdlib.h>
#include <stdio.h>

int codigo, quantidade;
float total;
main(){
    scanf("%i %i", &codigo, &quantidade);
    switch (codigo){
    case 1:
        total = 4.00 * quantidade;
        break;
    case 2:
        total = 4.50 * quantidade;
        break;
    case 3: 
        total = 5.00 * quantidade;
        break;
    case 4:
        total = 2.00 * quantidade;
        break;
    default:
        total = 1.50 * quantidade;
        break;
    }

    printf("Total: R$ %.2f\n", total);
}