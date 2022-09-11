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
    
   int amount,a1,a2,remaing;
   cin>>amount;
   a1 = amount/100; // 3
   remaing = amount%100;  // 75
    a2 = remaing /50; //1
    cout<<a2;
   remaing =amount -(a2*remaing);


//    cout<<a1<<endl<<remaing;

     return 0;

}
