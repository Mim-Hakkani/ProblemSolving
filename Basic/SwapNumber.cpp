/*
 Swap two number

*/

#include<bits/stdc++.h>
using namespace std;
int main (){
    int a,b,temp; 

    cout<<"First Number : ";
    cin>>a;

    cout<<"Second Number : ";
    cin>>b ;

    cout << "Before Swap a : b = "<< a <<" : "<<b<<endl;
    
    temp = a ;
    a = b ;
    b= temp;

    cout << "after Swap a : b = "<< a <<" : "<<b<<endl;
}