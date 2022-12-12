/*
Question-10
 Beautiful Array

Problem Statement:
You are given an array of size n. And the next line will contain n positive integers. Your favourite number is 7. The array will be nice if half or more of the numbers in the array have 7 digits. Implement it using a function and traverse the array using pointers.

See the sample input-output for more clarification.

Note - If the array size is odd that time  consider the ceil value as half, for example n=5, that means n/2 = 5/2 = 3 

Sample Input- 1
-----------------------
6
33 1 17 171 88 734

Sample Output- 1
-----------------------
Beautiful

Sample Input- 2
-----------------------
5
33 1 17 11 88 

Sample Output- 2
-----------------------
Ugly

Explanation - 
In sample input 1 - 
17 have the last digit 7
171 have the middle digit 7
734 has the first digit 7 

*/

#include<stdio.h>
#include<math.h>

void FavourateNumber(int arr[],int n){
    int count=0;
    int indexValue =ceil((float)n/2);
  for(int i=0;i<n;i++){
       while(arr[i]>0){
            if(arr[i]%10==7){
                count++;
            }
            arr[i]/=10;
        }
  }


  printf("Count : %d\n",count);
    if(count>=indexValue) {
        printf("Beautiful\n");}

    else {printf("Ugly\n");}

}

int main(){
    int arr[100];
    int n,i;
    scanf("%d",&n);
    // int indexValue =ceil((float)n/2);

    
    // input array 

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    } 

    FavourateNumber(arr,n);
    
    
    //print function 
    // for(i=0;i<n;i++){
    //     // printf("%d ",arr[i]);

    //     while(arr[i]>0){
    //         if(arr[i]%10==7){
    //             count++;
    //         }
    //         arr[i]/=10;
    //     }
    // } 
    
    // printf("Count : %d\n",count);
    // if(count>=indexValue) {
    //     printf("Beautiful\n");}

    // else {printf("Ugly\n");}


}