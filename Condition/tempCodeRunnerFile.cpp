#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter The Number : ";
    cin>>num;

    // condition 
      
      for(int i=1;i<=100;i++){
        if(num%i==3){
            cout<<i<<endl;
        }
      }
    return 0;
}