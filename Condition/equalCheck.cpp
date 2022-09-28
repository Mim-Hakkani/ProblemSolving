/*
1. Write a C program to accept two integers and check whether they are equal or not.
Test Data : 15 15
Expected Output :
Number1 and Number2 are equal

*/

#include<iostream>
using namespace std ;

int main(){
    int a,b;
    cout<<"Enter Two numbers : ";
    cin>>a>>b;
    if(a==b) cout<<"Two Numbers are equal"<<endl;
    else cout<<"They are Not Equal"<<endl;
    return 0;
}