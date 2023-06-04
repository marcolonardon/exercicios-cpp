#include <stdio.h>
#include <stdlib.h>

double m[12][12];
double soma = 0.0; 
int coluna, i, j;
char operacao[5];
main(){
    scanf("%d", &coluna);
    scanf("%s", &operacao);

    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%lf", &m[i][j]);
        }
    }

    for(i = 0; i < 12; i++){
        soma += m[i][coluna];
    }

    if(operacao[0] == 'M'){
        soma = soma / 12.0;
    }

    printf("%.1lf\n", soma);
}