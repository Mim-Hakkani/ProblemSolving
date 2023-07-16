/*
Write a function that will take an integer as an argument and return the factorial of the
integer.

Then write another function that will take two integers as arguments and then
return the ratio of the factorials of the first argument with the second one.

You need to make two calls to the first function inside the second function to find the factorials of the
numbers.

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int factirial(int num){
  int fact = 1;
   while(num>=1){
    fact = fact*num;
    num--;
   } 
   return fact;
}

float factrialMain(int num1,int num2){
  int a = factirial(num1);
  int b = factirial(num2);

  printf("a = %d\n",a);
  printf("b = %d\n",b);
  return (float)b/(float)a;
}

int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    // factirial(num);

    // printf("%d\n",factirial(num));

    float ratio = factrialMain(num1,num2);

    printf("%0.2f\n",ratio);


    return 0;
}