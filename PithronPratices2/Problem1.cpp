/*
Write a C program to take one positive integer N as input and print from 1 to N.

Sample Input: Sample Output:
5 1

output : 
1 2 3 4 5

*/

#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a;

    for(int i=1;i<=a;i++){
        cout<<i<<" ";
    }
    
    printf("\n");
    return 0;
    
}