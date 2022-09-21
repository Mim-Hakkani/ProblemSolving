/*

Pattern Series :   
   *
  * *
 * * *
* * * *
 * * * 
  * *
   *


*/

#include<iostream>
using namespace std;

int main(){

int i,j,n;
cout<<"How Many Star Do You Print : ";
cin>>n;

for(i=1;i<=n;i++){

    for(j=1;j<=n-i;j++){
        cout<<" "; 
    }

    // for show star 
    for(int k = 1;k<=i;k++)
    {
        cout<<"* " ;
    }

    cout<<"\n";
}

for(i=n-1;i>=1;i--){

        for(j=1;j<=n-i;j++){
        cout<<" "; 
    }

    // for show star 
    for(int k = 1;k<=i;k++)
    {
        cout<<"* " ;
    }

    cout<<"\n";
}


cout<<"\n";
}