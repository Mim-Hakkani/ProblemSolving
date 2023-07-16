#include<stdio.h>
int main(){
    int i,j,t,k,num[20],temp,m;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&num[i]);      
    }

   for(m=0;m<t-1;m++){
        for(j=0;j<t-m-1;j++){
            if(num[j]>num[j+1]){
            temp = num[j];
            num[j] = num[j+1];
            num[j+1] = temp;  
            }
             
        }      
            
    }

    // printf("sort : ");
    // for(i=0;i<t;i++){
    //     printf("%d",num[i]);
    // }

    // printf("\n\n");

    //print 
     int sum = 0,l,max=0;
      for(k=t-1;k>=0;k--){

        if(num[k]%2==0){
            if(num[k]>max){
                    max = num[k];
                }
                   
                }
       

     
        for(l=k-1;l>=0;l--){
            if((num[k]+num[l])%2==0){
                sum = num[k]+num[l];

                if(sum>max){
                    max = sum;
                }
            }
            
        }
        
       
        // printf("%d \n",num[k]); 


        
    }
     printf("%d\n",max);
}