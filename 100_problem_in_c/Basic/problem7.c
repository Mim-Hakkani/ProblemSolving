/*
7. Swap Two Variables
Write a program to swap the values of two variables using a third variable.
*/

#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter Three value : ");
    scanf("%d %d",&a,&b);

    printf("Before Swap  a = %d , b = %d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("After Swap  a = %d, b = %d\n",a,b);
   return 0;   
}