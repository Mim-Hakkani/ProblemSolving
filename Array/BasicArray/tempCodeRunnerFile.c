#include<stdio.h>
int main(){
    int i,j,n,x[10];
    printf("Enter the Number : ");
    scanf("%d",&n);

    for(i=0;i<5;i++){
        x[i] = n;
       // increment by 3 or triple 
        n=n*3;
    }

    for(i=0;i<5;i++){
        printf("n[%d] = %d\n",i,x[i]);
    }


}