#include<iostream>
using namespace std; 

int main(){
    int num,sum=0;
    cout<<"Enter Number : ";
    cin>>num;
    for(int i=1;i<num;i++){
        if(num%i==0){
            sum+=i;
        }
    }

    if(num==sum) {
        cout<<"perfect number"<<"\n";
    }
    else cout<<"Not pefect"<<"\n";
    return 0;
}