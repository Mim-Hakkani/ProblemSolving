#include<stdio.h>
int main(){
    int  a=5;
    double b=7.65;
    int *pi ;
    double *pb ;

    // convert pointer 

     pi = &a;
    //  pb  = pi ;         // without typecasting get warning   
     pb  = (double*)pi ;  // withtype Casting no warning

    printf("a address is : %p \n a value is %d",&a,a);
    printf("\nb address is : %p \n b value is %lf\n",&b,b);


    printf("\nb using pointer address is : %p \n b using pointer address is %p\n",pi,pb);
}