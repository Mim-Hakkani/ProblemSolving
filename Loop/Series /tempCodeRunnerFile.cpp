/*
26. Write a C program that prints all even numbers between 1 and 50 (inclusive). Go to the editor
Test Data :
Even numbers between 1 to 50 (inclusive):
Expected Output:
2 4 6 8 10 12 14 16 18 20 22 24 26 28 30 32 34 36 38 40 42 44 46 48 50
*/

#include<iostream>
using namespace std;
int main(){
    
    for (int i = 1; i <=50; i++)
    {
       if(i%2==0) cout<<i<<" ";
    }
    
}