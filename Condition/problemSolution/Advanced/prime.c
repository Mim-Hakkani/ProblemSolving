#include<stdio.h>
int main(){
    int number;
    printf("Enter the number : ");
    scanf("%d",&number);
    
    if(number ==2 || number==3 || number == 5 || number==7) {
        printf("Prime Number");
        return 0;
    }
     if(number==1 || number%2==0 || number%3==0 || number%4==0 || number%5==0 || number%6==0 ||number%7==0 ||number%8==0 || number%9==0) {
        printf("Not prime");
    }
    else{
        printf("Prime Number");
    }

    return 0;
}