/*
 Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene. 
Test Data :
50 50 60
Expected Output :
This is an isosceles triangle.

*/

#include<bits/stdc++.h>
using namespace std;
int main (){
    int a,b,c;

    // get triangle input 
    cout<<"First side : ";
    cin>>a;

    cout<<"Second side : ";
    cin>>b;


    cout<<"Third side : ";
    cin>>c;

    // triangle condition check

   if(a+b+c<180 && (a+b>c && b+c >a && c+a>b)){

    if(a!=b && b!=c && a!=c) cout<<"Scalene triangle"<<"\n";

    else if((a==b && a!=c) || (b==c && c!=a) || (a==c && b!=a)) cout<<"Isosceles  triangle"<<"\n";

    else cout<<"Equilateral"<<"\n";

   }
   else cout<<"Invalid input !!"<<"\n";
    return 0;
}