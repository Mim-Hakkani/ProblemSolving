/*

Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...]. 
Test Data :
Input the number or terms :5
Expected Output :
9 99 999 9999 99999
The sum of the saries = 111105

*/

#include<iostream>
using namespace std ;

int main(){
    int i,j,n;

    cout<<"Enter The Ranges : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<9;
        }

        cout<<" ";
    }

}