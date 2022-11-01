/*
Write a C program to take one positive integer N, the size of an array as input. Then take an integer array of size
N as input. You need to print the values and for every value, you need to print other values than that. See the
samples for more clarification.

Sample Input: 
5 
1 2 3 4 5

Sample Output:
1 - 2 3 4 5
2 - 1 3 4 5
3 - 1 2 4 5
4 - 1 2 3 5
5 - 1 2 3 4

*/

#include<bits/stdc++.h>
using namespace std;
int main (){
     int n;
     cin>>n;
     int a[n];

    for(int i=1;i<=n;i++)
    {
        cin>>a[i-1];
    }

   cout<<"Output is : "<<"\n";

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"-";
       for(int j =0; j<n;j++){
        if(a[i]!=a[j]) cout<<a[j]<<" ";
       }
       cout<<"\n";
    }
    return 0;
}