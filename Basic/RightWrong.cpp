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
    
   int p,q,r,s,sum1,sum2;
   cin>>p>>q>>r>>s;
   sum1 = p+q;
   sum2 = r+s;
   if(q>r && s>p && sum2>sum1 && p%2==0 && q>0 && r>0 && s>0){
    cout<<"Correct Answer";
   }
   else
   {
    cout<<"WrongAnswer"<<endl;
   }
 
     return 0;

}
