#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
  
#define PI 3.14159
double raio, area;
int main(){
    scanf("%lf", &raio);
    area = PI * pow(raio, 2);
    printf("A=%.4lf\n", area);
}