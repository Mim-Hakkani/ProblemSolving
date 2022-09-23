/*
Series pattern :2.4.6.8 
*/

#include<iostream>
using namespace std ;

int main(){
    int number,sum=1,another;
    cout<<"Enter Num : ";
    cin>>number;

    for (int i = 2; i <=number*2 ; i+=2)
    {
    //   cout<<i<<"."<<i<<endl;
       sum =sum*i;
       
    }
    
    cout<<"Summation of Loop Series is :: "<<sum<<endl;

    return 0;
}