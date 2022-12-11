/*
Problem Statement:
 
Write a c program that asks the user to enter integers as inputs to be stored in the variables 'x' &  'y' respectively. There are also two integer pointers named ptrX &  ptrY. Assign the values of 'x' and 'y' to ptrX and ptrY respectively, and display them.
 
Sample Input
5 10
Sample Output
5 10
 
Tag: Pointer

*/

#include<stdio.h>
int main(){
    int x,y;
    printf("Sample Input : ");
    scanf("%d %d",&x,&y);
    int* ptrX,*ptrY;
    ptrX = &x;
    ptrY = &y;
    printf("Sample Output : ");

    printf("%d %d\n",*ptrX,*ptrY);
  

}                             