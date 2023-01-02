#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
     cin>>a[i];

     int sum=0,mul=1;
     for(int i=0;i<n;i++){
     sum = sum+a[i];
     mul = mul*a[i];
     }


     cout<<"Summation : "<<sum<<"\n";
     cout<<"Mul is : "<<mul<<"\n";
     return 0;
    
}