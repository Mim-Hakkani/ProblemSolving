/*
 Write a program in C to display the pattern like right angle triangle using an asterisk. 

The pattern like :

*
**
***
****
*

*/


#include<bits/stdc++.h>
using namespace std;
int main (){
    int i,n;
    cout<<"Input upto the table number starting from 1 : ";
    cin>>n;
   for(i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
        cout<<"* ";
       }  
       
       cout<<"\n";
    }


    return 0;
}