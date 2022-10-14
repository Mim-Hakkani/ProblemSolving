/*
8. Write a C program to find the largest of three numbers. 
Test Data : 12 25 52
Expected Output :
1st Number = 12,        2nd Number = 25,        3rd Number = 52
The 3rd Number is the greatest among three
*/

#include<bits/stdc++.h>
using namespace std;
int main (){
    int a,b,c;
    cout<<"First : ";
    cin>>a;
    cout<<"Second : ";
    cin>>b;
    cout<<"Third : ";
    cin>>c;

    if(a>b && a>c) cout<<"Largest Number is : "<<a<<"\n";
    else if(c>b && c>a) cout<<"Largest Number is : "<<c<<"\n";
    else cout<<"Largest Number is : "<<b<<"\n";
    return 0;
}