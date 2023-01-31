#include<bits/stdc++.h>
using namespace std;
int main(){
        int n1,n2,temp,gcd;
    cout<<"enter the number : ";
    cin>>n1;
    cout<<"Enter the number : ";
    cin>>n2;

  for(int i=1;i<=n1 && i<=n2;++i){
    if(n1%i==0 && n2%i==0){
        gcd = i;
        
    }

    cout<<"Gcd : "<<gcd<<"\n";
  }
  return 0;
    
}