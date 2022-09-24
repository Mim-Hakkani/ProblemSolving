/*
57. Write a C program to reverse and print a given number.

Input a number:
The original number = 234
The reverse of the said number = 432

*/


#include<bits/stdc++.h>
using namespace std;
int main (){
    int num,count=0,reminder,value,reverse;
    cout<<"Main Number : ";
    cin>>num;

    while(1){

       value =  num/10 ;
       reminder =num%10;
       num = value;
    
       cout<<reminder;
       if(num<=0){
         break;
       }

       
       }

       
    }
   
