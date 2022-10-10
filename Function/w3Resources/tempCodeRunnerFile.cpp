/*
problem Name : Write a program in C to show the simple structure of a function

inputOutput : 
The total is :  11  
*/

#include<iostream>
using namespace std ;

//  funtion declaration 

int TotalDonate (int a,int b){
    cout<<"Enter Donation 1: ";
    cin>>a;

    cout<<"Enter Donation 2: ";
    cin>>b;

    int total = a+b;

    return total;
}

int main(){
    int donate1,donate2;
    
    int TotalValue = TotalDonate(donate1,donate2);
    cout<<"Total Donation is : "<<TotalValue<<"\n";

    return 0;
}