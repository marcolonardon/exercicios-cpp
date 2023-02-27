#include <stdlib.h>
#include <stdio.h>
#include <cmath>

double x, x2, y, y2, d;
int main(){
    scanf("%lf %lf %lf %lf", &x, &y, &x2, &y2);
    d = sqrt((x2-x)*(x2-x) + (y2-y)*(y2-y));
    printf("%.4lf\n", d);
}