/*
Series pattern : 1+4+7+10+13+16....(n+3)
*/

#include<iostream>
using namespace std ;

int main(){
    int number,sum=0;
    cout<<"Enter Num : ";
    cin>>number;

    for (int i = 1; i <=number ; i++)
    {
    //    cout<<3*i-2<<endl;
       sum =sum+3*i-2;
    }
    
    cout<<"Summation of another Series is :: "<<sum<<endl;
    return 0;
}