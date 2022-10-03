/*
25. Write a C program that reads an integer between 1 and 12 and print the month of the year in English. Go to the editor
Test Data :
Input a number between 1 to 12 to get the month name: 8
Expected Output:
August

*/

#include<iostream>
using namespace std;
int main(){
  int month;
  cout<<"Enter Month Selected :";
  cin>>month;

  switch (month)
  {
  case 1:
    cout<<"Jamuary"<<endl; 
    break;
      case 2:
    cout<<"February"<<endl; 
    break;
      case 3:
    cout<<"March"<<endl; 
    break;
      case 4:
    cout<<"April"<<endl; 
    break;
      case 5:
    cout<<"May"<<endl; 
    break;
      case 6:
    cout<<"June"<<endl; 
    break;
      case 7:
    cout<<"July"<<endl; 
    break;
      case 8:
    cout<<"August"<<endl; 
    break;
      case 9:
    cout<<"September"<<endl; 
    break;
      case 10:
    cout<<"October"<<endl; 
    break;
      case 11:
    cout<<"November"<<endl; 
    break;
     case 12:
    cout<<"December"<<endl; 
    break;

  
  default: cout<<"Invalid Month"<<endl;
    break;
  }
}