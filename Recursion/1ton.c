#include<stdio.h>
void NumberShow(int i,int n){
    if(i>n) return;
    printf("%d ",i);
    NumberShow(i+1,n);    
}

int main(){
    int n;
    scanf("%d",&n);
    NumberShow(1,n);
    printf("\n");
    return 0;
}