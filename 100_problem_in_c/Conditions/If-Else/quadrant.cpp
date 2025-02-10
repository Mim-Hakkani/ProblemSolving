#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter The Num1 and Num2:";
    cin>>num1>>num2;
    if(num1>0 && num2>0) cout<<"First Quardrant\n";
    else if(num1<0 && num2>0) cout<<"Second Quardrant\n";
    else if(num1<0 && num2<0) cout<<"Third Quardrant\n";
    else cout<<"Fourth Quardrant\n";
    return 0;
}