#include<stdio.h>
#include<math.h>
int main(){
    char n[100];
    int t;
    scanf("%d",&t);
    scanf("%s",n);
   int i ,mx=0,count=1;
    for(i=1;i<=t;i++){

        if(n[i-1]==n[i]){

            count++;
    
        }
        else{
           count=1 ; 
            
        }

    if(count>mx){
        mx=count;
    }

    }

   
    printf("%d\n",mx);
    
}