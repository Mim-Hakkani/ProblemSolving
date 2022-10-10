/*
problem Name : Print your name, date of birth, and mobile number

input : 

output :
        Name   : Alexandra Abramov  
        DOB    : July 14, 1975  
        Mobile : 99-9999999999

*/


#include<iostream>
using namespace std;

void personalInfo(string name , string month, int date ,int year, long int phone){

 // print the personal informations 2 
 cout<<"Name :"<<name<<endl;
 cout<<"DOB :"<<month<<" "<<date<<" "<<year<<endl;
 cout<<"Phone :"<<phone<<endl;

 cout<<endl;
}
int main(){


personalInfo("Ariful islam","January",25,2005,910886);

personalInfo("Hakkani Mim","february",12,1987,5967886);

personalInfo("Najmul","March",11,1917,187582);

 
}
