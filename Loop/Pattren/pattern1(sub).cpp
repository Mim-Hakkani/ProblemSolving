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
using namespace std;
int main(){
    int a,b,c,n,x=0,p=0;

    cin>>n;

    for(int j = 1 ;j<=n;j++)
    {
      while(x<3){
         p++;
         cout<<p<<" ";
        x++;
       }
       x=0;
       cout<<endl;

    }

}