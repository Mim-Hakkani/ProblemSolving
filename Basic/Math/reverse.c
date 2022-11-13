/*
reverse Number 

*/

#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
  
  int a,reverse;
  printf("Enter Number : ");
  scanf("%d",&a);
  printf("Reverse Number is : ");

  while(a!=0){
    reverse = a%10;
   printf("%d",reverse);
    a/=10;
  }
  printf("\n");


    return 0 ;
}