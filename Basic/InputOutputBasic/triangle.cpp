/*
problem Name :Write a C program to find the third angle of a triangle if two angles are given. 

input : Input two angles of triangle separated by comma : 50,70

output : Third angle of the triangle : 60

*/


#include<iostream>
using namespace std;
int main(){
    
  // initialization 

  int angle1,angle2,angle3;
  char comma;

  // input 
  cout<<"Input Two Angle : ";
  cin>>angle1>>comma>>angle2;
  angle3 = 180 -(angle1+angle2);  // Summation of Three triangle is 180
  
  // output 
  cout<<"Third Angle of the Triangle is : "<<angle3<<"\n";

    return 0;
}