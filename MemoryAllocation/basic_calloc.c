#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    
    // functionality of dynamic memory allocation 
     int *ptr;
     ptr = (int*) calloc(n,sizeof(int));

     // get input 

     for(int i=0;i<n;i++){
        scanf("%d",(ptr+i));
     }
     
    //  show output 
      for(int i=0;i<n;i++){

        if(*(ptr+i)%2==0){
          printf("%d ",*(ptr+i));
        }
      
     }
}