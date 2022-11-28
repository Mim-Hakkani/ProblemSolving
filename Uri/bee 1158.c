#include<iostream>
using namespace std;
int main(){
    int num,num1,num2;

    cin>>num;
    for(int i=1;i<=num;i++){
        cin>>num1>>num2;
        int sum=0;
        if(num1%2==0) {
            num1 =num1+1;
        }

        for(int j=1;j<=num2;j++){
            sum = sum+num1;
            num1+=2;
           
        }
        cout<<sum<<endl;

    }
    return 0;
}