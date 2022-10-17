/*
62. Write a C program that accepts a positive integer less than 500 and prints out the sum of the digits of this number. 
Input a positive number less than 500:
Sum of the digits of 347 is 14
*/

#include<bits/stdc++.h>
using namespace std;
int main (){
   
   int i,number,sum=0,reminder;
  
    while(1){
        cout<<"Enter The Number : ";
        cin>>number;
        if(number<=500){
            while(number>=1){
                reminder = number%10;

            //    cout<<"Sum Of Dight is : "<<reminder<<endl;
                sum = sum+reminder;
                number=number/10;
            }

            cout<<"Sum Of Dight is : "<<sum<<endl;
            break;
        }
        else{
            cout<<"Invalid Input Try Again ,,, "<<endl;
        }
    }
    return 0;
}