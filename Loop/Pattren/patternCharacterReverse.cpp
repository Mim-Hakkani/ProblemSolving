/*

Pattern Series :   
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1

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