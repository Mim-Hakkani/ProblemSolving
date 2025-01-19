/*
9. Data Type Size
Write a program to display the sizes of basic data types (int, float, char, double) using sizeof.
*/

#include<stdio.h>
int main(){
    int a;
    float b;
    char c;
    double d;
    printf("Sized of integer is : %d\n",sizeof(a));
    printf("Sized of float is : %d\n",sizeof(b));
    printf("Sized of char is : %d\n",sizeof(c));
    printf("Sized of double is : %d\n",sizeof(d));
}