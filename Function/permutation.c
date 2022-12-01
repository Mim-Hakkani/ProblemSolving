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
    int a,r;
    scanf("%d %d",&a,&r);
    fact(a);

    int permutaion = fact(a)/fact(a-r);
    int combinator = fact(a)/fact(a-r)*fact(r);



    printf("Permutation : %d\n",permutaion);
    printf("Combinator : %d\n",combinator);


    return 0;
}