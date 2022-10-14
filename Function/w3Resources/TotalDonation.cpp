/*
problem Name : Write a program in C to show the simple structure of a function

inputOutput : 

Input any number for square : 20

*/

#include<iostream>
using namespace std ;

int SqureNumber(int a );

int main(){
    int a;
    
    int TotalValue = SqureNumber(a);
    cout<<"Squre Number is : "<<TotalValue<<"\n";

    return 0;
}


int SqureNumber(int a){
    cout<<"Enter The Number : ";
    cin>>a;
    int squre = a*a;

    return squre ;
}