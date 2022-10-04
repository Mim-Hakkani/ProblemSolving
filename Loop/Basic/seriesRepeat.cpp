/*

Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...]. 
Test Data :
Input the number or terms :5
Expected Output :
9 99 999 9999 99999
The sum of the saries = 111105

*/

#include<iostream>
using namespace std ;

int main(){
    int i,j,n,sum=0,t=9,total=0;

    cout<<"Enter The Ranges : ";
    cin>>n;

    for(int i=1;i<=n;i++){
       sum = sum +t;
       cout<<sum<<" ";
       total = total +sum;
       sum = 10*sum;
    }

    cout<<"Sum of The Series is : "<<total<<"\n";

}