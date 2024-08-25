/*
Paulinho tem em suas mãos um novo problema. Agora a sua professora lhe pediu que construísse um programa para verificar, 
à partir de dois valores muito grandes A e B, se B corresponde aos últimos dígitos de A.

Entrada
A entrada consiste de vários casos de teste. A primeira linha de entrada contém um inteiro N que indica a quantidade de casos de teste. 
Cada caso de teste consiste de dois valores A e B maiores que zero, cada um deles podendo ter até 1000 dígitos.
*/

#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);  
    char numA[1001], numB[1001];  
    char results[n][20];  

    for (int i = 0; i < n; i++) {
        scanf("%s %s", numA, numB); 

        int lenA = strlen(numA); 
        int lenB = strlen(numB);  

        if (lenA >= lenB && strcmp(numA + lenA - lenB, numB) == 0) {
            strcpy(results[i], "encaixa");
        } else {
            strcpy(results[i], "nao encaixa");
        }
    }
    
    for (int i = 0; i < n; i++) {
        printf("%s\n", results[i]);
    }

    return 0;
}
