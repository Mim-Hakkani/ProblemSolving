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
    for(j=1;j<=2*i-1;j++){
        cout<<"* ";
    }
    cout<<"\n";
}
cout<<"\n";
}