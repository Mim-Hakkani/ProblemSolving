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

for(i=n;i>=1;i--){

    // for show number 
    for(int k=1;k<=i;k++)
    {

        printf("%d ",k);
    }

    cout<<"\n";
}

cout<<"\n";
}