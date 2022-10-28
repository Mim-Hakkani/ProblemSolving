/*
Write a C program to take one integer N as input and print from 1 to N.

Sample Input: Sample Output:
5 1 2 3 4 5
-5 1 0 -1 -2 -3 -4 -5
*/

#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    
    int i=1;
    while (i!=a)
    {
       cout<<i<<" ";
       if(a<0){
         i--;
       }
       else{
        i++;
       }
       
    }
    cout<<a<<"\n";

    return 0;
}