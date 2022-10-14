/*
Write a C program to check whether a character is an alphabet, digit or special character. 
Test Data :
@
Expected Output :
This is a special character.

*/

#include<bits/stdc++.h>
using namespace std;
int main (){
    char symbol;
    cout<<"Enter Character ";
    cin>>symbol;

    // check letter 
    if((symbol>='a' && symbol<='z') || (symbol>='A' && symbol<='Z')) 
    cout<<"This the Character "<<"\n";

    // check number

    else if(symbol>='0' && symbol<='9') 
    cout<<"This the Number "<<"\n";

    else cout<<"This is The Special Symbol"<<"\n";

    return 0;
}