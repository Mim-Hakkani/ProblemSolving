/*
4. Write a program in C to 
read 10 numbers from keyboard 
and find their sum 
and average. 

Test Data :
Input the 10 numbers :
Number-1 :2
...
Number-10 :2
Expected Output :
The sum of 10 no is : 55
The Average is : 5.500000

*/

#include<bits/stdc++.h>
using namespace std;
int main (){
    int sum=0,i,a[10];
    float avg;
     // read 10 number of input 

   for(i=1;i<=10;i++){
      cout<<"Number"<<i<<" : ";
        cin>>a[i];
        sum = sum+a[i];
       
    }

      cout<<"The Sum of 10 Number is  : "<<sum<<"\n";
      cout<<"The Average is  : "<< ((float)sum/10)<<"\n";
   
   

  
    return 0;
}