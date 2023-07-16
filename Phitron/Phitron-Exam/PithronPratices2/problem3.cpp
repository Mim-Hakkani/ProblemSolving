/*
Write a C program to take one positive integer N as input and print all even numbers from 1 to N.

Sample Input: Sample Output:
10 2 4 6 8 10
7 2 4 6

*/

#include<bits/stdc++.h>
using namespace std;
int main (){
    
    int num;
    cin>>num;
    for(int i=2;i<=num;i+=2){
        cout<<i<<" ";
    }
    cout<<"\n";
    return 0;
}
