/*

Pattern Series :   
      *
    * * * 
  * * * * * 
* * * * * * * 

*/

#include<iostream>
using namespace std;

int main(){

int i,j,n;
cout<<"How Many Star Do You Print : ";
cin>>n;

for(i=1;i<=n;i++){

    // for space 
    for(j=n;j>=i;j--){
        cout<<" ";
    }

    // for show star 
    for(int k = 1;k<=2*i-1;k++)
    {
        cout<<"*" ;
    }

    cout<<"\n";
}
cout<<"\n";
}