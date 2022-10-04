/*
Write a program in C to display the sum of the series [ 1+x+x^2/2!+x^3/3!+....]. 
Test Data :
Input the value of x :3
Input number of terms : 5
Expected Output :
The sum is : 16.375000
*/

#include<bits/stdc++.h>
using namespace std ;

int main(){
    float i,j,x=1,n,sum=0,fact=1;

    cout<<"Input number of Values x : ";
    cin>>x;

    cout<<"Input number of terms : ";
    cin>>n;

    for(int i=1;i<n;i++){
       fact = fact*(i);
       
       sum = sum + pow(x,i) / fact ;
       cout<<pow(x,i)<<" "<<fact<<" "<<sum<<"\n";
  
      
    }

    cout<<"Summation is : "<<sum+1<<"\n";
 
 return 0;

}