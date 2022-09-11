/*
problem name : 
  Write a C program to convert a given integer (in seconds) to hours, minutes and seconds. Go to the editor
Test Data :
Input seconds: 25300
Expected Output:
There are:
H:M:S - 7:1:40

*/


#include<bits/stdc++.h>
using namespace std;
int main(){
    
   int year,month,day,remaing;
   cin>>day;

   year = day/365;
   remaing = day - (365*year);
   month = remaing /30;
   remaing = day-(365*year)-(30*month);

   cout<<year<<"Years(s)"<<endl<<month<<"Month(s)"<<endl<<remaing<<"Days"<<endl;

     return 0;

}
