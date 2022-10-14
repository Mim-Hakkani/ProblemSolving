/*
 Write a program in C to accept a grade and declare the equivalent description : 

Grade	Description
E	Excellent
V	Very Good
G	Good
A	Average
F	Fail

Test Data :
Input the grade :A

Expected Output :
You have chosen : Average

*/


#include<bits/stdc++.h>
using namespace std;
int main (){
    char letter ;
    cout<<"Grade	Description"<<"\n";
    cout<<"E	Excellent"<<"\n"<<"V	Very Good"<<"\n"<<"G	Good"<<"\n"<<"A	Average"<<"\n"<<"F	Fail"<<"\n"<<"\n";

    cout<<"Grade	: ";
    cin>>letter ;

   switch (letter)
   {
   case 'E':
    cout<<"Excellent"<<"\n";
    break;

    case 'V':
    cout<<"Very Good"<<"\n";
    break;

    case 'G':
    cout<<"Good"<<"\n";
    break;

    case 'A':
    cout<<"Average"<<"\n";
    break;

      case 'F':
    cout<<"Fail"<<"\n";
    break;
   
   default:
   cout<<"Invalid Input";
    break;
   }



    return 0;
}