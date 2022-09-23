/*
problem name : 1.2+2.4+3.6+.....+n1.n2 
*/

#include<iostream>
using namespace std;
int main(){
    int sum=0,i,a=1,n,j;
    cout<<"Enter The Number : ";
    cin>>n;
    

    for(i=1,j=2;i<=n,j<=n*2;i++,j+=2){
        cout<<i<<j<<"\n";
        sum = sum + (i*j);
    }


    cout<<"Series is : 1.2+2.4+3.6+.....+ "<<i-1<<"."<<j-2<<endl;
    cout<<"Summation is : 1.2+2.4+3.6+.....+ ="<<sum<<endl;
    return 0;
}