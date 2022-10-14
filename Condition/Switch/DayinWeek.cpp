/*
 Write a program in C to read any day number in integer and display day name in the word. ]

Test Data :
4

Expected Output :
Thursday


*/


#include<bits/stdc++.h>
using namespace std;
int main (){
    int day ;
  
    cout<<"Day In Week : ";
    cin>>day ;

   switch (day)
   {
   case 1:
    cout<<"Saterday"<<"\n";
    break;

    case 2:
    cout<<"Sunday"<<"\n";
    break;

    case 3:
    cout<<"Monday"<<"\n";
    break;

    case 4:
    cout<<"Tuesday"<<"\n";
    break;

    case 5:
    cout<<"Wednesday"<<"\n";
    break;

    case 6:
    cout<<"Thusday"<<"\n";
    break;


    case 7:
    cout<<"Friday"<<"\n";
    break;
   
   default:
   cout<<"Invalid Input";
    break;
   }



    return 0;
}