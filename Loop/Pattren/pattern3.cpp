/*
43. Write a C program that reads two integers p and q, print p number of lines in a sequence of 1 to q in a line. Go to the editor
Test Data :
Input number of lines: 5
Number of characters in a line: 6
Expected Output:
1 2 3 4 5 6
7 8 9 10 11 12
13 14 15 16 17 18
19 20 21 22 23 24
25 26 27 28 29 30

*/

#include<iostream>
using namespace std ;
int main(){
    int line,characterline, x =1;
    cin>>line>>characterline;

    for(int i=1;i<=line*characterline;i++){
        cout<<i<<" ";
        if(i%characterline ==0) cout<<"\n";
    }


}