/*
 input : 1,5,6,7,10
 output : 1,5,6,7,10
*/

#include<iostream>
using namespace std;

int main(){
    int number[5];
    
    cout<<"Enter The Number : " ;
    for(int i=0;i<5;i++){
        cin>>number[i];
    }

    cout<<"Enter The Output Number is : ";

      for(int i=0;i<5;i++){
        cout<<number[i]<<" ";
    }
    
    cout<<"\n";
}