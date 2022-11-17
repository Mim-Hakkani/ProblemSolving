<<<<<<< HEAD
#include <stdio.h>
#include <math.h>
int main()
{
    int num[101], test, squrtNumber, i, j;
    scanf("%d", &test);
    for (i = 0; i < test; i++)
    {
        scanf("%d", &num[i]);
        
    }


        for (j = 3; j <=j-test ; j++)
        {  

        if (num[j-3] == 1 ){
    printf("No\n");
        }
           

       if (num[j-3] == 2){
  printf("Yes\n");
        }
          

        // squrtNumber = sqrt(num[i]); 

            if (num[j-3] % j == 0)
            {
              
                 printf("No\n");
            }
            else
            {
                 printf("Yes\n");
            }
        }
    
    return 0;
=======
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
>>>>>>> 7897db0b0f37260325db8f4fa17f44b13b525f6f
}