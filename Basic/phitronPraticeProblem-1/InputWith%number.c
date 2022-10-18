/*

Write a C program to take integer value as input and print that value. There is a twist! The input will contain a %
sign.

*/

#include<stdio.h>
int main(){
    char symbol ;
    int  number;
    printf("Enter The Number : ");
    scanf("%d %c",&number,&symbol);
    printf("Ascii Number : %d\n",number);

}