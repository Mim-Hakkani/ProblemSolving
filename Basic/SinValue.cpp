/*

61. Write a C program that accepts a real number x and prints out the corresponding value of sin(1/x) using 4-decimal places. Go to the editor
Input value of x: .6235
Value of sin(1/x) is 0.9995

*/

#include<bits/stdc++.h>
using namespace std;
int main (){
    float value,convert;
    cout<<"Enter value : ";
    cin>>value;
    
    convert = sin(value*0.0174533);
    cout<<"Sin = "<<convert<<endl;
    return 0;
}