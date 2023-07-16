#include<stdio.h>
int main(){
    int n,i,j,k,arr[101];
    scanf("%d",&n);
    // input random number 
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(j=0;j<n;j++){
      int flag=0;
    //    printf("Num : %d",arr[])
        if(arr[j]==1 || arr[j]==0) {
           flag =1;
        //    break;
        //   if(flag==1) printf("No\n");
        }
         


         for(k=2;k<=arr[j]/2;k++){
            if(arr[j]%k==0){
                flag = 1;
                break;
            }

         }

         if(flag==1) printf("No\n");
         if(flag==0) printf("Yes\n");
    }
}