#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    string name;
    cin>>name;
    int firstCharacterRange = name[0];
    if(firstCharacterRange>=97){
        name[0] = firstCharacterRange-32;
    }

    cout<<name;
}