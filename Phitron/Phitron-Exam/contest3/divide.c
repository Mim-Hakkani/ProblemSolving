#include<stdio.h>
int main(){
    long long int number,result;
    scanf("%lld",&number);
    if(number%3==0){
        result = number/3;
        printf("%lld\n",result);
    }
    else{
        printf("-1\n");
    }
}