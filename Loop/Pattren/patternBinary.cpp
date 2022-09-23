/*

Pattern Series :   
1
1 0 
1 0 1  


*/

#include<iostream>
using namespace std;

int main(){

int i,j,n;
cout<<"Number : ";
cin>>n;

for(i=1;i<=n;i++){

    // for show number 
    for(int k = 1;k<=i;k++)
    {

        cout<<k%2<<" ";
    }

    cout<<"\n";
}

cout<<"\n";
}