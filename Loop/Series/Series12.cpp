/*
Series pattern :1-2+3-4+5-6 = -3 
*/

#include<iostream>
using namespace std ;

int main(){
    int number,sum=0,i,j;
    cout<<"Enter Num : ";
    cin>>number;

    for (i=1,j=2;i<=number,j<=number*2;i+=2,j+=2)
    {
    //   cout<<i<<"."<<j<<endl;
       sum =sum+(i-j);
    //    cout<<sum<<endl;
       
    }
    
    cout<<"Summation of Loop Series is :: "<<sum<<endl;

    return 0;
}