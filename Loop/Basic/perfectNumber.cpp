/*
Write a c program to check whether a given number is a perfect number or not. 
Test Data :
Input the number : 56
Expected Output :
The positive divisor : 1 2 4 7 8 14 28
The sum of the divisor is : 64
So, the number is not perfect.

*/


#include<bits/stdc++.h>
using namespace std ;

int main(){
    int  x,n,sum=0,total;

    cout<<"Input number of Values x : ";
    cin>>x;

cout<<"Divisor Number is : ";
    for(int i=1;i<=x/2;i++){
      
     if(x%i==0){
        cout<<i<<" ";
        sum = sum+i;

     }

    }
    cout<<endl;
    cout<<"Sum of Divisor is : "<<sum<<"\n";
  
   // check perfect 

   if(sum == x){
    cout<<"Perfect Number "<<"\n";
   }
   else{
    cout<<"Not Perfect"<<"\n";
   }
     
 z
 return 0;

}