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
    cout<<"one"<<"\n";
    break;

    case 2:
    cout<<"two"<<"\n";
    break;

    case 3:
    cout<<"Three"<<"\n";
    break;

    case 4:
    cout<<"Four"<<"\n";
    break;

    case 5:
    cout<<"five"<<"\n";
    break;

    case 6:
    cout<<"Six"<<"\n";
    break;


    case 7:
    cout<<"seven"<<"\n";
    break;

    case 8:
    cout<<"eight"<<"\n";
    break;

    case 9:
    cout<<"Nine"<<"\n";
    break;

    

   
   default:
   cout<<"Invalid Input";
    break;
   }



    return 0;
}