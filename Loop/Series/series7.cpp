/*
Series pattern :1.5+2.5+3.5+...+n.5
*/

#include<iostream>
using namespace std ;

int main(){
    int number,sum=0;
    cout<<"Enter Num : ";
    cin>>number;

    for (int i = 1; i <=number ; i++)
    {
      cout<<i<<"."<<5<<endl;
       sum =sum+i*5;
    }
    
    cout<<"Summation of another Series is :: "<<sum<<endl;
    return 0;
}