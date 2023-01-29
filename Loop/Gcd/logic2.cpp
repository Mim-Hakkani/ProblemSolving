#include<bits/stdc++.h>
using namespace std;
int main(){
        int n1,n2,temp,gcd;
    cout<<"enter the number : ";
    cin>>n1;
    cout<<"Enter the number : ";
    cin>>n2;

    while(true){
        if(n2%n1==0){
            cout<<"Gcd : "<<n1<<"\n";
            break;
        }

        else if(n2%n1 ==1){
            cout<<"Gcd : 1"<<"\n";
            break;
        }

      else{
        temp = n1;
        n1= n2%n1;
        n2 = temp;
      }
    }
    
}