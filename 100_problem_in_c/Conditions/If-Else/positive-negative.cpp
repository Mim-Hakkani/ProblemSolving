#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter The Number: ";
    cin>>num;
    if(num==0) cout<<"Nutral Number\n";
    else if(num>0) cout<<"Positive Number\n";
    else cout<<"Negative Number";
    return 0;
}