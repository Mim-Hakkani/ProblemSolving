#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
int number,sum=0;
cin>>number;
for(int i=1;i<=number;i++){
    cout<<i*i<<"+"<<endl;
    sum =sum+i*i;
}

cout<<"Summation of Squre of Sum :"<<sum<<endl;
return 0;
}