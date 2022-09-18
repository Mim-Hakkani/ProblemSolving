/*
37. Write a C program to read the coordinates(x, y) (in Cartesian system) and find the quadrant to which it belongs (Quadrant -I, Quadrant -II, Quadrant -III, Quadrant -IV). Go to the editor
Note: A Cartesian coordinate system is a coordinate system that specifies each point uniquely in a plane by a pair of numerical coordinates.
These are often numbered from 1st to 4th and denoted by Roman numerals: I (where the signs of the (x,y) coordinates are I(+,+), II (−,+), III (−,−), and IV (+,−).
Test Data :
Input the Coordinate(x,y):
x: 25
y: 15
Expected Output:
Quadrant-I(+,+)

*/
#include<iostream>
using namespace std;
int main(){
 int a,b;
 cout<<"X : ";
 cin>>a;

 cout<<"Y : ";
 cin>>b;

 if(a>0 && b>0) cout<<"Quadrant-I(+,+)"<<endl;
 if(a<0 && b>0) cout<<"Quadrant-II(-,+)"<<endl;
 if(a<0 && b<0) cout<<"Quadrant-II(-,-)"<<endl;
 if(a>0 && b<0) cout<<"Quadrant-IV(+,-)"<<endl;
 

 
    return 0;
}