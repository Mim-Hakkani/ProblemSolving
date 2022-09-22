/*

Pattern Series :   
1
2 3 
4 5 6
7 8 9 10
*/

#include<iostream>
using namespace std;

int main(){

int i,j=1,n;
cout<<"Number : ";
cin>>n;


for(i=1;i<=n;i++){


    // for show number 
    for(int k=1;k<=i;k++)
    {
      cout<<j++<<" ";
        
    }

    cout<<"\n";

}



cout<<"\n";
}