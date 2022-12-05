#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int arr[20],n;
    printf("How many number of array you want : ");
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }


    // see the array using input 
       for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }
   
   // sorted list 

    for(int i =0;i<n;i++){
        for(int j = 1 ;j<n-i;j++){
            if(arr[j]<=arr[j-1]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
                 
            }
        }
    }


 // see sorted array list 

    printf("\nSorted array list : ");
       for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }

    // find median number 

    if(n%2==1){
        int median = (n+1)/2;
        printf("\nMedian is : %d\n",arr[median-1]);
    }
    else{
        int m1 = (n/2);
        int m2 = (n/2)+1;
        int median = ((arr[m1-1]+arr[m2-1])/2);
        printf("\nMedian is : %d\n",median);

    }

    return 0;
}