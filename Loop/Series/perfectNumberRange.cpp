/*
28. Write a c program to find the perfect numbers within a given number of range. 
Test Data :
Input the starting range or number : 1
Input the ending range of number : 50
Expected Output :
The Perfect numbers within the given range : 6 28

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n,i=1,j,divisor,sum=0,first,last;
   cout<<"Input the number start range:";
   cin>>first;
   cout<<"Input the number last range:";
   cin>>last;
   cout<<" The Perfect numbers within the given range ";
   for(j=4;j<=last;j++){
   for(i=1;i<=j/2;i++){
     if(j%i==0){
        sum+=i;
     }
   }
     if(sum==j) cout<<j<<" ";
     sum =0;
   }

   return 0;

}