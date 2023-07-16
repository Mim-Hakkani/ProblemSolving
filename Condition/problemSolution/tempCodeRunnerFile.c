
// problem Name : Write a program to check if a number is even or odd. 
#include<stdio.h>
int main(){
    int a ; 
    scanf("%d",&a);
    char *checkNumber = a%2!=0 ? "odd" : "Even";
    printf("%d is the %s",a,checkNumber);
    return 0;
}