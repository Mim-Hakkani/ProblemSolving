/*
Write a C program to calculate profit and loss on a transaction. 
Test Data :
500 700
Expected Output :
You can booked your profit amount : 200


*/

#include<bits/stdc++.h>
using namespace std;
int main (){
    int a,b;
    cout<<"Buy product : ";
    cin>>a;

    cout<<"Sell Product : ";
    cin>>b;

    if(a>b) cout<<"Sorry Loss Product :  "<<a-b<<"\n";
    else cout<<"Congrats! Profit Product :  "<<b-a<<"\n";

    return 0;
}