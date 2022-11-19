#include<stdio.h>
int main(){
    int test,i,j,k[6], sum=0 ;
    scanf("%d",&test); // test case 

    for(i=1;i<=test;i++){
     
         
         for(j=1;j<=6;j++){
            scanf("%d",&k[j-1]);
            sum = sum+k[j-1];
        //    printf("m = %d\n",sum);
         }
           

         if(sum==0){
            printf("YES\n");
         }
         else{
          printf("NO\n");
         }
         sum = 0;
         
        
        
        }

 return 0;
}