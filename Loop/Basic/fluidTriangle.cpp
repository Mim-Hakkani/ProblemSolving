/*
 Write a program in C to print the Floyd's Triangle. 

1 
01
101 
0101 
10101

*/

#include<iostream>
using namespace std ;

int main(){
    int i,j,n,sum=0,t=9,total=0;

    cout<<"Enter The Ranges : ";
    cin>>n;

    for(int i=1;i<=n;i++){
       for(j=i;j>=1;j--)
       {
         cout<<j%2<<"";
       }
       cout<<"\n";
    }

    cout<<"Sum of The Series is : "<<total<<"\n";

}