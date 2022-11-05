#include<stdio.h>
int main(){
    int i,j,n,count=0,a,p,arr[101];
    scanf("%d",&n);

 for(i=0;i<n;i++){
    scanf("%d %c",&a,&p);
    for(j=a;j<=100;j++){
        if(j>=0 && j<60){
            count+=1;
            //  printf("Count1 : %d\n",count);
        }
        else if(j>=60 && j<80){
            count+=2;
            //  printf("Count2 : %d\n",count);
        }
       else if(j>=80 && j<=100){
            count+=3;
            if(j==100){
                count-=3;
            }
            //  printf("Count3 : %d\n",count);
        }
      

   
    //  printf("Count : %d\n",count);
        
    }
     
     arr[i] =count;
     count=0;
    // printf("Count : %d\n",arr[i]);
    
 }

 for(i=0;i<n;i++){
    printf("%d minutes\n",arr[i]);
 }
return 0;

}