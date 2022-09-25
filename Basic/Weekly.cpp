/*
60. Write a C program to create enumerated data type for 7 days and display their values in integer constants.

Sun = 0
Mon = 1
Tue = 2
Wed = 3
Thu = 4
Fri = 5
Sat = 6

*/

#include<bits/stdc++.h>
using namespace std;
int main (){
    
    int i,j;
    string day[15] ={"sun","mon","tue","wed","thus","fri","sat"};
     
     for(int i=0;i<7;i++){
        cout<<day[i]<<" = "<<i<<"\n";
     }
    return 0;
}