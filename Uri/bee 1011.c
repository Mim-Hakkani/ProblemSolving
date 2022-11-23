#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.14159
int main(){
    int radious;
    double result;
    scanf("%d",&radious);

    result = (4/3.0)*PI*radious*radious*radious;
    printf("VOLUME = %0.3f\n",result);
    return 0;
}