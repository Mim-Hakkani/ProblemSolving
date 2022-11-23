#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    double a,b,c,rectangle,circle,triangle,squre,trapizum;
    scanf("%lf %lf %lf",&a,&b,&c);

    rectangle = a*b;
    squre = b*b;
    circle = 3.14159*c*c;
    triangle = (1/2.0)*a*c;
    trapizum = ((a+b)/2)*c;

    printf("TRIANGULO: %0.3lf\nCIRCULO: %0.3lf\nTRAPEZIO: %0.3lf\nQUADRADO: %0.3lf\nRETANGULO: %0.3lf\n",triangle,circle,trapizum,squre,rectangle);



    return 0;
}