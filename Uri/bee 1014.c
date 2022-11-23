#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int x;
    double fuelSpent,perkilometer;
    scanf("%d %lf",&x,&fuelSpent);
    perkilometer = x/fuelSpent;
    printf("%0.3f km/l\n",perkilometer);


    return 0;
}