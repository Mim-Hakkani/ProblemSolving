/*
42. Write a C program to print a number, it’s square and cube in a line, starting from 1 and print n lines. Accept number of lines (n, integer) from the user. Go to the editor
Test Data :
Input number of lines: 5
Expected Output:
1 1 1
2 4 8
3 9 27
4 16 64
5 25 125

*/

#include<iostream>
using namespace std;
int main(){
    int n,x=0;

    cout<<"Number input : ";
    cin>>n;

    for(int i=1 ;i<=n;i++){
       while(x<3){
        cout<<i<<" "<<i*i<<" "<<i*i*i;
        x+=3;
       }
       x=0;

       cout<<endl;
    }


}