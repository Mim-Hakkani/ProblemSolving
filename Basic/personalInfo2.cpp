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

//   initialize 
  
    char name[60];
    string month;
    int date,year;
    long int phone;

//   input 

    cin >> name;
    cin >> month;
    cin >> date;
    cin>>year;
    cin >> phone;

// output 

    cout<<"********************"<<endl;
    cout << "Name : "<<name<<endl;
    cout << "DOB    : "<<month<<" "<<date<<" "<<year<<endl;
    cout << "Mobile : "<<phone<<endl;

return 0;
}
