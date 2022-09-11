/*
problem name : 
 Write a C program to read an amount (integer value) and break the amount into smallest possible number of bank notes.

Test Data :
Input the amount: 375

Expected Output:
There are:
3 Note(s) of 100.00
1 Note(s) of 50.00
1 Note(s) of 20.00
0 Note(s) of 10.00
1 Note(s) of 5.00
0 Note(s) of 2.00
0 Note(s) of 1.00

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
