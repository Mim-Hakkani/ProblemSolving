#include<iostream>
using namespace std;
int main (){
    int n,pos,count=0,a[100];
    cin>>n>>pos;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

int kth_value = a[pos-1];


  for(int i=1;i<=n;i++){
       if(a[i-1]>=kth_value && a[i-1]>0 ) {
       count++;
       }; 
    }

  cout<<count<<"\n";  
    

    return 0;
}