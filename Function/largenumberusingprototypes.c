#include<stdio.h>
int max(int a,int b);
int main(){
    int a,b;
    printf("Enter Two Number : ");
    scanf("%d %d",&a,&b);
    int large = max(a,b);
    
    printf("Large Number is : %d\n",large);
}

int max(int a,int b){
    if(a>b) return a;
    else return b;
}