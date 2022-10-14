/*
41. Write a C program to print 3 numbers in a line, starting from 1 and print n lines. Accept number of lines (n, integer) from the user. 
Test Data :
Input number of lines: 5
Expected Output:
1 2 3
4 5 6
7 8 9
10 11 12
13 14 15
*/

#include<iostream>
using namespace std ;
int main(){
    int number ;
    cout<<"Number of line ";
    cin>>number;

    for(int i=1;i<=number*3;i++){  
        cout<<i<<" ";
        if(i%3==0) cout<<endl;
    }

    return 0;
}