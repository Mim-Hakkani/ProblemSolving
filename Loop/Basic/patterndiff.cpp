/*
Write a program in C to make such a pattern like right angle triangle with number increased by 1. 

The pattern like :

   1
   2 3
   4 5 6
   7 8 9 10

*/

#include<bits/stdc++.h>
using namespace std;
int main (){
    int i,n,k=1;
    cout<<"Input upto the table number starting from 1 : ";
    cin>>n;
   for(i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
        cout<<k++<<" " ;
       }  
       
       cout<<"\n";
    }


    return 0;
}