#include<stdio.h>

int main(){
    int num1,num2,temp,rem,lcm;
    scanf("%d %d",&num1,&num2);
    printf("The LCM of %d and %d is ",num1,num2);
     temp = (num1*num2);

    while(num2!=0){
      rem = num1%num2;
      num1= num2;
      num2 = rem;     
    }
   
   lcm = temp/num1;

    printf("%d\n",lcm);

    return 0;
}