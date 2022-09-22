/*

Pattern Series :   
1
2 4
3 6 9
4 8 12 16 

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

        printf("%d ",k*i);
    }

    cout<<"\n";

}



cout<<"\n";
}