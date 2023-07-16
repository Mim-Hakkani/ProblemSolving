/*
Write a C program to take one positive integer N, the size of an array as input. Then take an integer array of size
N as input and show output in reverse order.

Sample Input: 
5 
5 10 3 20 1

Sample Output:

1 20 3 10 5

*/

#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter The Size of array : ";
    cin>>size;

    int number[size];

// for input 
    for(int i=1;i<=size;i++){
        cin>>number[i-1];
    }

    // for reverse output  
    for(int i=1;i<=size;i++){
        cout<<number[size-i]<<" ";
    }

    cout<<"\n";
    return 0;

}