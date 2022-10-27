/*
Write a C program to take one positive integer N as input and print all divisors of N.

Sample Input: Sample Output:
10 1 2 5 10
18 1 2 3 6 9 18
24 1 2 3 4 6 8 12 24

*/

#include<bits/stdc++.h>
using namespace std;
int main (){
    int number;
    cin>>number;
    for(int i=1;i<=number;i++){
        if(number%i==0) {
            cout<<i<<" ";
            }
    }
    cout<<"\n";
    return 0;
}