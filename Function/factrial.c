#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int fact(int a){
    int i,fact = 1;
    for(i=1;i<=a;i++){
        fact*=i;
      
    }
      return fact;
}
int main(){
    int a;
    scanf("%d",&a);
    int factorial = fact(a);

    printf("Factrial : %d\n",factorial);


    return 0;
}