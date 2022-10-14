/*
29. Write a C program that read 5 numbers and sum of all odd values between them. 
Test Data :
Input the first number: 5
Input the second number: 7
Input the third number: 9
Input the fourth number: 10
Input the fifth number: 13
Expected Output:
Sum of all odd values: 34
*/

#include<iostream>
using namespace std;
int main(){
    int a[5],sum=0;

    for(int j = 0 ; j<=4;j++){
        // input five integer number 
        cin>>a[j];

      // calculate the sum 
        if(a[j]%2==1){
            sum =sum + a[j];
        }

    }

    // see the sum of the odd number 

    cout<<"Sum Of the Odd Number is :: "<<sum<<endl;
}