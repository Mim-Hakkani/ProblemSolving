/*

Pattern Series :   

    1
   121
  12312
 1234123

*/

#include<iostream>
using namespace std;

int main(){

int i,j,n;
cout<<"Number : ";
cin>>n;

for(i=1;i<=n;i++){

    for(int j=1;j<=n-i;j++)
    { cout<<" ";}
    // for show number 
    for(int k=1;k<=i;k++)
    {
       cout<<k;
          
    }
    for(int k=i-1;k>=1;k--){
        cout<<k;
    }
    cout<<"\n";
}

cout<<"\n";
}