/*
 Write a C program that reads an integer and check the specified range where it belongs. Print an error message if the number is negative and greater than 80.

Test Data :
Input an integer: 15
Expected Output:
Range [0, 20]

*/
/*
22. Write a C program that read 5 numbers and sum of all odd values between them. 

Test Data :
Input the first number: 11
Input the second number: 17
Input the third number: 13
Input the fourth number: 12
Input the fifth number: 5

Expected Output:
Sum of all odd values: 46

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    
   int num[5] = {1, 2 ,3, 4, 5};
   int sum =0;
  //  cout<<"Enter The Number ::";
  
   
  //  for(int i =0 ;i<5 ;i++){
  //    cin>>num[i];

     
  //  }

  if(num[0]&1==1){
      sum += num[0];
     }

     if(num[1]&1==1){
      sum += num[1];
     }
     if(num[2]&1==1){
      sum += num[2];
     }
     if(num[3]&1==1){
      sum += num[3];
     }
     if(num[4]&1==1){
      sum += num[4];
     }
   
   cout<<"Summation of Total Odd Number is :: "<<sum<<endl;

   return 0;

}
