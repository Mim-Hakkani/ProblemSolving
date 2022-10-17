/*
problem name : 
  Write a C program to convert a given integer (in seconds) to hours, minutes and seconds. 
Test Data :
Input seconds: 25300
Expected Output:
There are:
H:M:S - 7:1:40

*/


#include<bits/stdc++.h>
using namespace std;
int main(){
    
   int time,hour,min,sec,remaing;
   cin>>sec;
 //    cout<<sec<<endl;
   hour = sec/3600;
   remaing = sec-(3600*hour);
   min = remaing/60;
   remaing = sec - (min*60) - (3600*hour);
   cout<<"Hour : "<<hour<<endl<<"Minutes : "<<min<<endl<<"Seconds :"<<remaing<<endl;


//    cout<<a1<<endl<<remaing;

     return 0;

}
