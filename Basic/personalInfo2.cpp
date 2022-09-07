/*
problem Name : Print your name, date of birth, and mobile number

input : yes 

output :
        Name   : Alexandra Abramov  
        DOB    : July 14, 1975  
        Mobile : 99-9999999999

*/


// Solution 1: simple print function with input 

#include<bits/stdc++.h>
using namespace std;

int main(){
    char name[60];
    string month;
    int date,year;
    long int phone;

    cin >> name;
    cin >> month;
    cin >> date;
    cin>>year;
    cin >> phone;



    cout << "Name : "<<name<<endl;
    cout << "DOB    : August 03, 1994"<<endl;
    cout << "Mobile : 01816910886"<<endl;

return 0;
}
