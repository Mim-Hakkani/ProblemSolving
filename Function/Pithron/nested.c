#include<stdio.h>

int operator(int a,int b)
{
    int sum,c;
    sum = a+b;
    printf("Enter number for ");
    scanf("%d",&c);
    mul(sum,c);
}

int mul(int sum,int c){
    return sum*c;
}
int main(){
    int a,b;
    printf("Enter Two Number for addition: ");
    scanf("%d %d",&a,&b);
    int nested = operator(a,b);
    printf("Nested function is : %d\n",nested);
    return 0;
}