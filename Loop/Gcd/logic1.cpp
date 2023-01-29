#include<bits/stdc++.h>
using namespace std ;
int calculateGcd(int n1,int n2){
    while(n1!=n2){
        if(n2>n1) n2-=n1;
        else n1-=n2;
     }

     return n1;
}
int main (){
    int n1,n2,i,gcd;
    cout<<"enter the number : ";
    cin>>n1;
    cout<<"Enter the number : ";
    cin>>n2;
    gcd = calculateGcd(n1,n2);
    cout<<"Gcd is : "<<gcd<<"\n";
    return 0;
}