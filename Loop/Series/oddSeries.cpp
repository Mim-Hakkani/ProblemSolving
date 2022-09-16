// problem name : 1+3+5+7+....+n

#include<iostream>
using namespace std;
int main(){
    int number,sum=0;
    cout<<"Enter The Number :";
    cin>>number;
    for(int i=1;i<=number;i+=2){
        // cout<<i<<" ";
        sum = sum+i;
    }
    cout<<"1+3+5+...+"<<sum<<endl;

}