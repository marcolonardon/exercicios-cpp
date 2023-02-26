#include <stdio.h>
#include <stdlib.h>

int X;//distancia em km
float Y, kml;//gasto 
int main(){
    scanf("%i %f", &X, &Y);
    kml = X/Y;
    printf("%.3f km/l\n", kml);
}