/*
57. Write a C program to reverse and print a given number.

Input a number:
The original number = 234
The reverse of the said number = 432

*/


#include<bits/stdc++.h>
using namespace std;
int main (){
    int num,reminder=0,value,reverse;
    cout<<"Main Number : ";
    cin>>num; // 155

    while(num>=1){
       
       value =num%10;  // 5  5 1
       reminder = reminder*10+value;  // 5 55 551
       num = num/10 ; // 15 1 0

       cout<<"value"<< value << "reminder" << reminder << "Number" <<num<<endl;
       }

       
    }
   
