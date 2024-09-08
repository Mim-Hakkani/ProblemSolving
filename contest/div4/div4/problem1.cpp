#include<iostream>
#include<string>
using namespace std;



int main() {
    int n,a,b,min=0;
    cin>>n;
   
    for(int i = 0; i < n; i++) {
        cin>>a>>b;
        if(a==b) cout<<0<<endl;
       if(a>=1 && b>=a && b<=10){
          int c = a;
        min  = (c-a) +(b-c);
        cout<<min<<<<endl;

       } 
    }

    return 0;
}
