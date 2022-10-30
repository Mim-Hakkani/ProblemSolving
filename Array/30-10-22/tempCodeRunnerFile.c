#include<stdio.h>

int main()
{

    int arr[5],i,odd=0,even=0;
    for(i=1; i<=5; i+=1)
    {
       scanf("%d",&arr[i-1]);
    }
    
    for(i=0; i<5; i+=1)
    {
        if(arr[i]%2==0){even++;}
        else{
            odd++;
        }
      
    }
    printf("Number of Even Count : %d\n",even);
    printf("Number of Odd Count : %d\n",odd);
    return 0;
}