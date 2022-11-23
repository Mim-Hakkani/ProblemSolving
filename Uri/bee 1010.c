#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int productCode1 , productNumber1,productCode2 , productNumber2;
    double productPrice1 ,productPrice2,total;

    scanf("%d %d %lf",&productCode1,&productNumber1,&productPrice1);
    scanf("%d %d %lf",&productCode2,&productNumber2,&productPrice2);
    
    total =( productNumber1*productPrice1) + (productNumber2*productPrice2);

    printf("VALOR A PAGAR: R$ %0.2lf\n",total);

    return 0;
}