/*
 Write a program in C to display the pattern like right angle triangle with a number. 

The pattern like :

1
12
123
1234

*/

#include<bits/stdc++.h>
using namespace std;
int main (){
    int i,n;
    cout<<"number of line : ";
    cin>>n;
   for(i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
        cout<<j<<" ";
       }  
       
       cout<<"\n";
    }


    return 0;
}