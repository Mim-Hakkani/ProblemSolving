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
struct personalinfo
{
    /* data types */

    string name,month;
    int date,year;
    long int phone;

};

int main(){
 // declare it as a variables 

// hakknai data 
 struct personalinfo pInfo;
 pInfo.name ="Golam Hakkani Mim";
 pInfo.month ="August";
 pInfo.date =03;
 pInfo.year =1994;
 pInfo.phone =745166705;


 // Ema data 
 struct personalinfo pInfo2;
 pInfo2.name ="Suhana AfaZ Emu";
 pInfo2.month ="August";
 pInfo2.date =02;
 pInfo2.year =1995;
 pInfo2.phone =745166905;

 // print the personal informations 
 cout<<"Name :"<<pInfo.name<<endl;
 cout<<"DOB :"<< pInfo.month<<" "<<pInfo.date<<" "<<pInfo.year<<endl;
 cout<<"Phone :"<<pInfo.phone<<endl;

cout<<endl;  // show the data in the another input line 

 // print the personal informations 2 
 cout<<"Name :"<<pInfo2.name<<endl;
 cout<<"DOB :"<< pInfo2.month<<" "<<pInfo2.date<<" "<<pInfo2.year<<endl;
 cout<<"Phone :"<<pInfo2.phone<<endl;
 
}
