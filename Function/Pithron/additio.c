#include<stdio.h>
int summation(int a , int b){
    printf("Summation is : ");
    int sum = a+b;
    return sum ;
}
int main(){
 int a,b,result;
 scanf("%d %d",&a,&b);
 result = summation(a,b);
 printf("%d\n",result);

 return 0;
} 