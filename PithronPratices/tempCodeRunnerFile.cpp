/*
Write a C program to two positive integers N and M as input and print all numbers from 1 to N that are divisible
by M.

Sample Input: Sample Output:
10 3 3 6 9
15 4 4 8 12

*/

#include<bits/stdc++.h>
using namespace std;
int main (){
    int m,n;
    cin>>m>>n;
    for(int i=n;i<=m;i++){
        if(i%n==0) cout<<i<<" ";
    }
    cout<<"\n";
    return 0;
}