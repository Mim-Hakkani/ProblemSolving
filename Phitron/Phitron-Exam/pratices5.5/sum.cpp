// WAP that takes n integer numbers, and sum up all the integers in that array.
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,sum=0;
   cin>>n;
   vector<int>a(n);
   for(int i=0;i<n;i++){
     cin>>a[i];
   }

   for(int i=0;i<n;i++){
    sum +=a[i];
   }

   cout<<"Summation is : "<<sum<<"\n";
    return 0;
}