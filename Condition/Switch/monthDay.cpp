/*

Write a program in C to read any Month Number in integer and display Month name in the word. 
Test Data :
4
Expected Output :
April
31 days in this  month


*/

#include<bits/stdc++.h>
using namespace std;
int main (){
    int month ;
  
    cout<<"month : ";
    cin>>month ;

   switch (month)
   {
   case 1:
    cout<<"January"<<"\n";
    cout<<"31 days in this  month"<<"\n";
    break;

    case 2:
    cout<<"February"<<"\n";
    cout<<"28 days in this  month"<<"\n";
    break;

    case 3:
    cout<<"March"<<"\n";
    cout<<"31 days in this  month"<<"\n";
    break;

    case 4:
    cout<<"April"<<"\n";
    cout<<"30 days in this  month"<<"\n";
    break;

    case 5:
    cout<<"May"<<"\n";  
   cout<<"31 days in this  month"<<"\n";
    break;

    case 6:
    cout<<"June"<<"\n";
    cout<<"30 days in this  month"<<"\n";
    break;


    case 7:
    cout<<"July"<<"\n";
    cout<<"31 days in this  month"<<"\n";
    break;

    case 8:
    cout<<"August"<<"\n";
    cout<<"31 days in this  month"<<"\n";
    break;

    case 9:
    cout<<"September"<<"\n";
    cout<<"30 days in this  month"<<"\n";
    break;

    case 10:
    cout<<"October"<<"\n";
    cout<<"31 days in this  month"<<"\n";
    break;


    case 11:
    cout<<"November"<<"\n";
    cout<<"30 days in this  month"<<"\n";
    break;


    case 12:
      cout<<"December"<<"\n";
     cout<<"31 days in this  month"<<"\n";
    break;

    

   
   default:
   cout<<"Invalid Input";
    break;
   }



    return 0;
}