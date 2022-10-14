/*
problem Name : Write a C program to perform addition, subtraction, multiplication and  division of two numbers. 

input : Input any two numbers separated by comma : 10,5

output : 

The sum of the given numbers : 15
The difference of the given numbers : 5
The product of the given numbers : 50
The quotient of the given numbers : 2.000000

*/


#include<iostream>
using namespace std;
int main(){
    
  // initialization 

  int a,b;
  char comma;

  // input 
  cout<<"Input Two Number : ";
  cin>>a>>comma>>b;
  
  
  // output 
  cout<<"The sum of the given numbers : "<<a+b<<"\n";
  cout<<"The difference of the given numbers : "<<a-b<<"\n";
  cout<<"The product of the given numbers : "<<a*b<<"\n";
  printf("The quotient of the given numbers : %lf",(float)a/b);

    return 0;
}