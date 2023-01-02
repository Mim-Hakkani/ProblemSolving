#include<bits/stdc++.h>
using namespace std;
// function 

void Swap(int &a ,int & b){
    int temp;
    temp = a;
    a=b;
    b=temp;
    
}

int main(){
    int a,b;
    cout<<"Enter Two Number : ";
    cin>>a>>b;
    cout<<"Brfore Swap : \n"<<"a = "<<a<<"\n"<<"b = "<<b<<"\n";

    Swap(a,b);
    cout<<"After Swap : \n"<<"a = "<<a<<"\n"<<"b = "<<b<<"\n";
}