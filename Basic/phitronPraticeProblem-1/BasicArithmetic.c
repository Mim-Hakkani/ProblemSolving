/*

Write a C program to take two positive integers as input and show the summation, subtraction and
multiplication of those two numbers.

*/

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter Two Number : ");
    scanf("%d %d",&a,&b);

    printf("Summation is : %d + %d = %d\n",a,b,a+b);
    printf("Subtraction : %d - %d = %d\n",a,b,a-b);
    printf("Multiplication : %d * %d = %d\n",a,b,a*b);

}