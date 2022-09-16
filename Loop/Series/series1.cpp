// problem name : 1+2+3+..+n

#include<iostream>
using namespace std;
int main(){
    int number,sum=0;
    cout<<"Enter The Number :";
    cin>>number;
    for(int i=0;i<=number;i++){
        sum = sum+i;
    }
    cout<<"1+2+3+...+"<<sum<<endl;

}