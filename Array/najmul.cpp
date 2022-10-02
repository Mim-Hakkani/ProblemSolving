/*
problem name : array in series 
input : [1,2,3,4,5]
output : [1,3,6,10,15]
*/

#include<iostream>
using namespace std;
int main(){
    int a[] = {1,2,3,4,5},value;
    cout<<a[0]<<" ";
    for(int i=1;i<=4;i++){
      a[i]= a[i-1]+a[i];
      cout<<a[i]<<" ";
    }
    cout<<"\n";

}