#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);

    int *ptr ;
    ptr =(int *) malloc(n*sizeof(n));

    // input the array 

    for(int i =0;i<n;i++){
        scanf("%d",(ptr+i));
    }

  // output 

       for(int i =0;i<n;i++){
        printf("%d ",*(ptr+i));
    }
    printf("\n");





}