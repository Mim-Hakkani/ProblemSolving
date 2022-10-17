/*
38. Write a program that reads two numbers and divide the first number by second number. If the division not possible print "Division not possible". 
Test Data :
Input two numbers:
x: 25
y: 5
Expected Output: 5.0
*/

#include<iostream>
using namespace std ;

int main(){
    int a,b;
    float c;
    cout<<"First Number : ";
    cin>>a;
    cout<<"Second Number ";
    cin>>b;

if(b!=0){
    c= (float) a/  (float) b;
    
    if(c) cout<<"Division possible : "<<c<<endl;
    else cout<<"Division Not possible"<<endl;
}

}