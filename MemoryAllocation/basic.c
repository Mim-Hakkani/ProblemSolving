#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);

    
    // i think always using pointe with type casting 
    int *ptr ;
    ptr =(int *) malloc(n*sizeof(n)); // dynamically allocate function 

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