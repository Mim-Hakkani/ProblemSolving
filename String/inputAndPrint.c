/*
1. Write a program in C to input a string and print it.

Test Data :
Input the string : Welcome, w3resource

Expected Output :

The string you entered is : Welcome, w3resource
*/
#include <stdio.h>
#include <string.h>
int main()
{

    char stringData[1000];
    printf("Input the String : ");
    fgets(stringData, sizeof(stringData), stdin);
    printf("The string you entered is : ");
    puts(stringData);
    return 0;
}