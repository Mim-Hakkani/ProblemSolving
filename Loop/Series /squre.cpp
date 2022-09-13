#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
int number;
cin>>number;
for(int i=1;i<=number;i++){
    cout<<i*i<<"+";
}
return 0;
}