/*
Write a program in C to find the sum of the series [ x - x^3 + x^5 + ......]. 
Test Data :
Input the value of x :2
Input number of terms : 5
Expected Output :
The values of the series:
2
-8
32
-128
512
The sum = 410
*/

#include<bits/stdc++.h>
using namespace std ;

int main(){
    int  x,n,sum=0,total,sumEven=0;

    cout<<"Input number of Values x : ";
    cin>>x;

    cout<<"Input number of terms : ";
    cin>>n;

    for(int i=1;i<=n;i++){
      
      if(i%2==0){
        sumEven = sumEven + pow(x,2*i-1) ;
        cout<<sumEven;
      }
      else{
        sum = sum+pow(x,2*i-1);
      }
       
       total = sum - sumEven;

    }

    cout<<"Summation is : "<<total<<"\n";
 
 return 0;

}