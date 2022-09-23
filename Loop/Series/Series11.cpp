/*
Series pattern :1^2 . 2^2 . 3^3 .....n^2
*/

#include<iostream>
using namespace std ;

int main(){
    int number,sum=1,another;
    cout<<"Enter Num : ";
    cin>>number;

    for (int i = 1; i <=number ; i++)
    {
    //   cout<<i<<"."<<i<<endl;
       sum =sum*i*i;
       
    }
    
    cout<<"Summation of Loop Series is :: "<<sum<<endl;

    return 0;
}