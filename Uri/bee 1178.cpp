#include<iostream>
using namespace std;
int main(){
    float n, a[100];
    cin>>n;
   
    for(int i =0;i<=99;i++){
  
        a[i] = (n*2)/2.0;
       
       n= n/2.0;
    } 

    // show output 

    for(int i=0;i<=99;i++){
        cout<<"N["<<i<<"] = ";
        printf("%0.4f\n",a[i]);
    }
}