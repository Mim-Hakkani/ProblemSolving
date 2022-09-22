/*

Pattern Series :   
1 
1 2 
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

for(i=1;i<=n;i++){

    // for show number 
    for(int k=1;k<=i;k++)
    {

        printf("%d ",k);
    }

    cout<<"\n";

}

for(i=n-1;i>=1;i--){

    // for show number 
    for(int k=1;k<=i;k++)
    {

        printf("%d ",k);
    }

    cout<<"\n";

}

cout<<"\n";
}