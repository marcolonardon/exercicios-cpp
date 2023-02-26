#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

double raio, volume;
int main(){
    scanf("%lf", &raio);
    volume = (4.0/3) * PI * (raio*raio*raio);
    printf("VOLUME = %.3lf\n", volume);
}