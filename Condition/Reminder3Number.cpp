#include<iostream>
using namespace std;
int main(){
    int num,count=0;
    cout<<"Enter The Number : ";
    cin>>num;

    // condition 
      
      for(int i=1;i<=100;i++){
        if(i%num==3){
            count++;
            cout<<i<<endl;
        }
      }
    return 0;
}