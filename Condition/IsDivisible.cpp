/*
24. Write a C program that reads two integers and checks whether they are multiplied or not. 
Test Data :
Input the first number: 5
Input the second number: 15
Expected Output:
Multiplied!
*/

#include<iostream>
using namespace std;
int main(){
  int number, number2;
  cout<<"First Number :";
  cin>>number;

  cout<<"Second Number :";
  cin>>number2;

  if(number2%number==0) cout<<"Multiplied !!"<<endl;
  else cout<<"Not Multiplied!"<<endl;;
}