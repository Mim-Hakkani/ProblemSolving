/*
 some steps of nth term of febonacci series :

*/


#include<stdio.h>
int main(){

    int n,i,foboNumber;
    scanf("%d",&n);
   

     int fib = 0;
     int fib1 = 1; 
 
    for(i=1;i<=n;i++){
    if(i==1) printf("0 ");
    else if(i==2) printf("1 ");  
    else{
   
     foboNumber = fib+fib1; 
      fib=fib1;
      fib1 = foboNumber;
     printf("%d ",foboNumber);
    }

      
    }


}