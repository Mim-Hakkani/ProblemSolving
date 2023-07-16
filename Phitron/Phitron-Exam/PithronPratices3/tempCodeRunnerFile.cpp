#include<iostream>
using namespace std;
int main(){
    int n,search,flag=0;
    cout<<"Enter the number : ";
    cin>>n;
    int a[n];

    for(int i = 0 ;i<n;i++){
        cin>>a[i];
    }
    
    cout<<"Enter the Search Value : ";
    cin>>search;

    for(int j = 0; j<n;j++){
        for(int k =j+1;k<n;k++){
            if(search == a[j]+a[k]){
                flag = 1;
            }
        }
    }

    if(flag == 1) cout<<"Yes"<<"\n";
    else cout<<"No"<<"\n";

    return 0;
    
}