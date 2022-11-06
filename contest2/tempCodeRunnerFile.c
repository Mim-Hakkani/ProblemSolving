#include<stdio.h>
int main(){
    unsigned int n,k,arr[22],j,i,count=0;
    scanf("%u",&n);
    if(n>=1 && n<=20) {

    // printf("\n");
    for(i=0;i<n;i++){
      scanf("%u",&arr[i]);
    
    }

//  printf("\n");
  
    scanf("%u",&k);

    
  if((k>=0 && k<=20))
  {
    if(k==0){
        for(i=0;i<n;i++){
                printf("%u ",arr[i]);
            }
        
    }
    else{
    for(j=k;j<n;j++){
        printf("%u ",arr[j]);
        // count =j+1;   
    }

    for(i=0;i<k;i++){
         printf("%u ",arr[i]);
    }

    }
    printf("\n");
    }
 }
}