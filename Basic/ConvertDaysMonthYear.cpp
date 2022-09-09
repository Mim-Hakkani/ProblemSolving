/*
problem name : 6.
Write a C program to convert specified days into years, weeks and days
Expected Output:

Expected Output:
Test Data :
Number of days : 1329
Expected Output :
Years: 3
Weeks: 33
Days: 3



*/

#include<iostream>
using namespace std;
int main(){
    int year,weeks,day,inputdays;
    cout<<"Number the days :: ";
    cin>>inputdays;
    year = inputdays/365;
    int remainingDays = inputdays%365;
    weeks = remainingDays/7;

    day=inputdays -((year*365)+(7*weeks));

    // output shows 

        cout<<"Total year is : "<<year<<endl;
        cout<<"Total week is : "<<weeks<<endl;
        cout<<"Total Day is : "<<day<<endl;

}