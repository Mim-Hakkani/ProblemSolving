// problem name :2+4+6+8+....+n

#include<iostream>
using namespace std;
int main(){
    int number,sum=0;
    cout<<"Enter The Number :";
    cin>>number;
    for(int i=2;i<=number;i+=2){
        // cout<<i<<" ";
        sum = sum+i;
    }
    cout<<"2+4+6+8+...+"<<sum<<endl;

}