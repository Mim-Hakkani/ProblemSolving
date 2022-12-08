#include<iostream>
using namespace std;
int main(){
    int n,a[1000];
    cin>>n;
    int j = 0 ; 
    for(int i =0;i<=999;i++){
  
        a[i] = j;
        if(j==n-1){
            j=0;
        }else{
                j++;
        }
   
    } 

    // show output 

    for(int i=0;i<=999;i++){
        cout<<"N["<<i<<"] = "<<a[i]<<"\n";
    }
}