/*
36. Write a C program to read a password until it is correct. For wrong password print "Incorrect password" and for correct password print "Correct password" and quit the program. The correct password is 1234. 
Test Data :
Input the password: 1234
Expected Output:
Correct password
*/

#include<iostream>
using namespace std;
int main(){
 int pass,correctpassWord;
 cout<<"Enter Password : ";
 cin>>pass;

correctpassWord = 1234;

 while(1){
   if(correctpassWord==pass) {
     cout<<"Correct Password "<<endl;
     break;
   }
 
   else {
    cout<<"Wrong Password"<<endl;
    cin>>pass;
   }
 }
    // return 0;
}