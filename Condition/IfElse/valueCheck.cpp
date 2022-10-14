/*
6. Write a C program to read the value of an integer m and display the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0. 
Test Data : -5
Expected Output :
The value of n = -1
*/

#include<iostream>
using namespace std ;

int main(){
    int value;
    cout<<"Enter Value : ";
    cin>>value;
    if(value==0) cout<<"Value of M is : 0"<<"\n";
    else if(value>0) cout<<"Value of M is : 1"<<"\n";
    else  cout<<"Value of M is : -1"<<"\n";

  
    return 0;
}