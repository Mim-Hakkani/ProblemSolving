/*
problem name : 1.2+2.3+3.4+.....+n1.n2 
*/

#include<iostream>
using namespace std;
int main(){
    int sum=0,i,a=1,n;
    cout<<"Enter The Number : ";
    cin>>n;
    

    for(i=1;i<=n;i++){
        sum = sum + (i*(i+1));
    }


    cout<<"Series is : 1.2+2.3+3.4+.....+ "<<n<<"."<<n+1<<endl;
    cout<<"Summation is : 1.2+2.3+3.4+.....+ ="<<sum<<endl;
    return 0;
}