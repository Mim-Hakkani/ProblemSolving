/*
problem name : 1+2+3+.....+n  
*/

#include<iostream>
using namespace std;
int main(){
    int sum=0,i,a=1,n;
    cout<<"Enter The Number : ";
    cin>>n;
    
    while(a<=n){
        sum=sum+a;
        a+=1;
    }


    cout<<"Summation is : "<<sum<<endl;
    return 0;
}