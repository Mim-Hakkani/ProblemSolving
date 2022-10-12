/*
 Write a program in C to convert decimal number to binary number using the function.

Test Data :
Input any decimal number : 65
Expected Output :

 The Binary value is : 1000001 
*/


#include<iostream>
using namespace std ;


int main(){
    int i,number,reminder,divider,quoitent,value[10];
    cout<<"Enter The Number : ";
    cin>>number;

    // convert 0 and 1 in decimal number 

     for(i=0;number>0;i++){
        value[i] = number%2;
        number =number/2;
     }
 
    // Binary Conversion 
    
    cout<<"Binary Number is : ";

     for(int j = i-1;j>=0;j--){
        cout<<value[j];
     }

    cout<<"\n";

     return 0;
}