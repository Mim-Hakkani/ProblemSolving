#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    char name[100];
    double grosssalary,productsold,total;
    scanf("%s %lf %lf",name,&grosssalary,&productsold);
    total = (productsold*.15)+grosssalary;
    printf("TOTAL = R$ %0.2lf\n",total);


    return 0;
}