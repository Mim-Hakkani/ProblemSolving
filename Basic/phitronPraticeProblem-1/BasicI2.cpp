/*
Write a C program to declare two integer variables and set values 10 and 20 respectively. Now print the second
number and then the first number.

input : No input 

output : 20 10 

*/

#include<stdio.h>
int main(){
        int a = 10,b = 20 ;
      printf("Enter Two Number : ");
      printf("%d %d\n",a,b);

    printf("OutPut Two Number : ");
    printf("%d %d\n",b,a);
    return 0;

}