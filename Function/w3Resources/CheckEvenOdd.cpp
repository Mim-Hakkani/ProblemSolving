/*
Write a program in C to check a given number is even or odd using the function. Go to the editor
Test Data :
Input any number : 5
*/

#include<iostream>
using namespace std;

void check(int number){

    if(number%2==0) cout<<"Even Number";
    else cout<<"Odd Number ";
   
}
int main (){
    int number;
    cout<<"Enter the Number : ";
    cin>>number;
   
        check(number);
   
   

}