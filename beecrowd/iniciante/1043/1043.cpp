/*
Leia 3 valores reais (A, B e C) e verifique se eles formam ou não um triângulo. Em caso positivo, calcule o perímetro do triângulo e apresente a mensagem:

Perimetro = XX.X

Em caso negativo, calcule a área do trapézio que tem A e B como base e C como altura, mostrando a mensagem

Area = XX.X

Entrada
A entrada contém três valores reais.

Saída
O resultado deve ser apresentado com uma casa decimal.
*/


#include <stdio.h>

main(){
    float a, b, c, area=0;
    scanf("%f %f %f", &a, &b, &c);

    if(a + b > c && b + c > a && a + c > b){
        printf("Perimetro = %.1f\n", a+b+c);
    }else{
        //A = (B+b)*h/2
        area = ((a+b)*c)/2;
        printf("Area = %.1f\n", area);
    }
}