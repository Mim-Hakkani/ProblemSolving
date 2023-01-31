/*
27. Write a c program to check whether a given number is a perfect number or not. 
Test Data :
Input the number : 56
Expected Output :
The positive divisor : 1 2 4 7 8 14 28
The sum of the divisor is : 64
So, the number is not perfect.

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n,i=1,divisor,sum=0;
   cout<<"Input the number :";
   cin>>n;
   cout<<"Divisor is : ";
   for(int i =1;i<=n/2;i++){
     if(n%i==0){
        cout<<i<<" ";
        sum+=i;
     }
   }
   cout<<"\n";
   if(sum!=n) cout<<n<<" is not the perfect number"<<"\n";
   else cout<<n<<" is the perfect number"<<"\n";
   return 0;

}