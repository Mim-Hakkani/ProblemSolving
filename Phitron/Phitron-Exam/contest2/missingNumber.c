#include<stdio.h>
int main(){
   int t,sumTotal,a,b,c,missing,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){

         scanf("%d %d %d %d",&sumTotal,&a,&b,&c);
         if(sumTotal >0 && a>0 && b>0 && c>0){

          missing = sumTotal - (a+b+c);
          printf("%d\n",missing);
         }
    }
  
    return 0;
}