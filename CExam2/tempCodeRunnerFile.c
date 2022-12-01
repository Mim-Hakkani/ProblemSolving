#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int a,b,arr[10000],arreven[10000],arrodd[10000],i,j;
    scanf("%d %d",&a,&b);
    int index = 0;
    int index2 = 0;
    int count = 0;

//   for even number 

   for(i=2;i<=a;i+=2){

    arreven[index] = i;
    arr[index]=arreven[index];
    index++;
    count++;
  
   }


   //   for odd number 

   for(i=1;i<=a;i+=2){

    arrodd[index2] = i;
    arr[index]=arrodd[index2];
    index2++;
    index++;
    count++;
  
   }

   for(i=0;i<count;i++){
     printf("%d ",arr[i]);
   }
   printf("\nThe %dth element in this sequence is %d\n",b,arr[b-1]);
 


    return 0;
}