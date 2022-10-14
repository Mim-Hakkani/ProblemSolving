#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter The Number : ";
    cin>>num;
    
    if(num<0){
        if(num%2==0) cout<<"Neg Even"<<endl;
        else cout<<"Neg Odd"<<endl;
    }
    else
    {
       if(num%2==0) cout<<"Pos Even"<<endl;
        else cout<<"Pos Odd"<<endl;
    }

    return 0;
}