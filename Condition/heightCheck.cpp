/*
7. Write a C program to accept the height of a person in centimeter and categorize the person according to their height. Go to the editor
Test Data : 135
Expected Output :
The person is Dwarf.
*/


#include<iostream>
using namespace std ;

int main(){
    double height,centimeter;
    cout<<"Enter Height on foot : ";
    cin>>height;

    centimeter = height*30.48;

    if( centimeter<150){ cout<<"He is a Drawf Person"<<"\n";}
    else if(centimeter>150 || centimeter<250) {cout<<"He is a Taller Person"<<"\n";}
    else {cout<<"He is invalid Person"<<"\n";}
    return 0;
}