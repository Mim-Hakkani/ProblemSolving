/*
problem Name : summation 
Write a C program that accepts two integers from the user and calculate the sum of the two integers. 

Test Data :
Input the first integer: 25
Input the second integer: 38


Expected Output:
Sum of the above two integers = 63
*/

#include<iostream>
using namespace std;
int main(){
    int num1,num2,sum;
    cout<<"Input the first integer :: ";
    cin>>num1;

    cout<<"Input the first integer :: ";
    cin>>num2;
    
 
    // output shows 

    cout<<"Sum of the above two integers = "<<num1+num2<<endl;

    return 0;
}