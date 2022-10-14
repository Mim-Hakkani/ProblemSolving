/*
4. Write a C program to find whether a given year is a leap year or not. 
Test Data : 2016
Expected Output :
2016 is a leap year.
*/

#include<iostream>
using namespace std ;

int main(){
    int year;
    cout<<"Enter The Year : ";
    cin>>year;

    if(year%4 == 0 || year%400 == 0) cout <<"Leap Year "<<endl;
    else  cout <<"Not Leap Year "<<endl;
    return 0;
}