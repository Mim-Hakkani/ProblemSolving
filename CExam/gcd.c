#include<stdio.h>

int main(){
    int num1,num2,temp,rem;
    scanf("%d %d",&num1,&num2);
    printf("The GCD of %d and %d is ",num1,num2);

    while(num2!=0){
      rem = num1%num2;
      num1= num2;
      num2 = rem;     
    }
   
    printf("%d\n",num1);
}