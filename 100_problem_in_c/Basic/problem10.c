/*
10. Check Even or Odd
Write a program to check whether a given integer is even or odd.
*/

#include<stdio.h>
int main(){
    int number;
    printf("Enter the number :");
    scanf("%d",&number);
    if(number%2==0) printf("Even");
    else printf("odd");

}