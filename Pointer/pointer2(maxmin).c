
// return more than one value 

#include<stdio.h>
void MaxMinCalculator(int a,int b,int *p,int *q){
     if(a>b){
        *p = a;
        *q = b;
     }
     else{
        *p = b;
        *q = a;
     }
}
int main(){
    int a = 35,b=15,max,min;
    
    // declate the function 
    MaxMinCalculator(a,b,&max,&min);

    printf("max : %d\n",max);
    printf("min : %d\n",min);
    return 0;
}