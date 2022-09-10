/*
problem name : 
Write a C program that accepts three integers and find the maximum of three.

Test Data :
Input the first integer: 25
Input the second integer: 35
Input the third integer: 15

Expected Output:
Maximum value of three integers: 35



*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int num1,num2,num3,firstMaxValue,finalMax;
    cout<<"Enter The Three Numbers :: ";
    cin>>num1>>num2>>num3;
    
     firstMaxValue = max(num1,num2);
     finalMax =max(firstMaxValue,num3);

     cout<<"Maximum value is :: "<<finalMax<<endl;
     return 0;



}

