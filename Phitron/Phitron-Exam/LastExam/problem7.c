#include<stdio.h>
void searchNumber(int arr[],int n,int count){
    int flag =0,indx=0;
    for(int i =0;i<n;i++){
      scanf("%d",&arr[i]);
    }
    int search ;
    scanf("%d",&search);

     for(int i =0;i<n;i++){
    //    printf("%d",arr[i]);

      if(search==arr[i]){
         flag =1;
         indx = i+1;
         break;
      }
    

    }

    if(flag==1){
          printf("Case %d: %d\n",count,indx);
    }
    else{
         printf("Case %d: Not Found\n",count);
    }
    
    
  
    
}
int main(){
    int t,n,count=1;
    scanf("%d",&t);
    for(int i =1;i<=t;i++){
        scanf("%d",&n);
        int arr[n];
        searchNumber(arr,n,count++);
        
    }

}