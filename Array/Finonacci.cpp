/*
 show the finonacci number : 0 1 1 2 3 5 8 ..
*/

#include<iostream>
using namespace std ;
int main(){
    int a[100],temp,n,total;
     cout<<"How Many Range : ";
     cin>>n;
     a[0] = 0 ; 
     a[1] = 1 ; 
     cout<<a[0] <<" "<<a[1] <<" ";
     for(int i=2;i<=n;i++){
        //   total  =  a[i-1] + a[i];
        //   a[i+1] = total;

        //     cout<<total<<" ";  

        a[i] = a[i-1] + a[i-2];
   
       cout<<a[i]<<" ";
            
     }
     cout<<"\n";

}