#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    char letter;
    float price;
    string name,lastname,fullname;
    cin>>name>>letter>>price>>num;
    cout<<"Name : "<<name<<"\n"<<"Letter is : "<<letter<<"\n"<<"Price : "<<price<<"\nNumber : "<<num<<"\n";
    cin>>lastname;
    fullname = name + lastname ;
    cout<<"Full name : "<<fullname<<"\n";
    
    return 0;
}