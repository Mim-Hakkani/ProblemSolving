/*
6. Write a C program that will take two integers as input from you. And then it will show us in output whether any one of those two numbers is divisible by the other or not. Sample Input 1: 
Enter the first number: 13 
Enter the second number: 39 
Sample Output 1: 
The second number is divisible by the first number.

*/

#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b){
        if(a%b==0) {
            printf("The first number is divisible by the second number.");
        }
        else{
            printf("The first number is not divisible by the second number.");
        }
    }
    else{
        if(b%a==0){
            printf("The second number is divisible by the first number.");
        }
          else{
            printf("The second number is not divisible by the first number.");
        }
    }
    
    return 0;

}