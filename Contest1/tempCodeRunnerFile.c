#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    unsigned int a,b,mul;

     scanf("%d %d",&a,&b);
     if((a>=0 && a<=100) && (b>=0 && b<=100)){
        mul = a*b;
        printf("%d\n",mul);
     }

    
    return 0;
}
