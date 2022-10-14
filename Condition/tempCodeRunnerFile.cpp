/*
9. Write a C program to accept a coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies. 
Test Data : 7 9
Expected Output :
The coordinate point (7,9) lies in the First quadrant.
*/

#include<bits/stdc++.h>
using namespace std;
int main (){
    int a,b;
    cout<<"Two Numbers : ";
    cin>>a>>b;
    if(a>0 && b>0) cout<<"First Co-Ordinate"<<"\n";
    else if(a<0 && b<0) cout<<"Third Co-Ordinate"<<"\n";
    else if(a>0 && b<0) cout<<"Fourth Co-Ordinate"<<"\n";
    else cout<<"Second Cordinate"<<"\n";
    return 0;
}