/*
problem name : 6.
 Write a C program to compute the perimeter and area of a circle with a given radius. Go to the editor
Expected Output:

Expected Output:
Perimeter of the Circle = 37.680000 inches
Area of the Circle = 113.040001 square inches



*/

#include<iostream>
using namespace std;
int main(){
 float area , perimeter ;
 int radius;

 const float PI = 3.14156;

 cout<<"Enter the radious :: ";
 cin>>radius;

 area = PI*radius*radius;
 cout<<"Area Of Circle is :: "<<area<<endl;;

 perimeter = 2 * PI * radius;

 cout << "perimer of Circle is :: "<<perimeter<<endl;;



}