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