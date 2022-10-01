/*
Calculate The Prime Number 
*/

#include<bits/stdc++.h>
using namespace std;
int main (){
    
    int i,j,number;
    cout<<"Number Of Range Do U See ";
    cin>>number;

    // if(number%2==0){
    //     cout<<"Not Prime";
    // }

    for(i=3;i<=number;i++){
      if(number%i==0){
        // cout<<i<<" ";
      } 
      else{
        cout<<i<<" ";
      }
    }

    return 0;
}