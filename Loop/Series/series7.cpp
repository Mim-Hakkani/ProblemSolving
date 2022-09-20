/*
Series pattern :1^2 + 2^2 + 3^3 +....n^2
*/

#include<iostream>
using namespace std ;

int main(){
    int number,sum=0,another;
    cout<<"Enter Num : ";
    cin>>number;

    for (int i = 1; i <=number ; i++)
    {
      cout<<i<<"^"<<i<<endl;
       sum =sum+i*i;

       
    }
    
    // another pattern 

    another = (number*(number+1)*(2*number+1))/6;


    cout<<"Summation of Loop Series is :: "<<sum<<endl;
    cout<<"Summation of another Series is :: "<<another<<endl;
    return 0;
}