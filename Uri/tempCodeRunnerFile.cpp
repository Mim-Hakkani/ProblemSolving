#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int j = 0 ; 
    for(int i =0;i<1000;i++){

           
        cout<<"N["<<i<<"] = "<<j<<"\n";
        if(j==n-1){
            j=0;
        }else{
                j++;
        }
   
    } 
}