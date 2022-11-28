#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
   
   int X[10];
   for(int i=0;i<=9;i++){
    cin>>X[i];
    if(X[i]<=0){
       X[i] =1;
     cout<<"X["<<i<<"] = "<<X[i]<<endl;
    }
    else
      cout<<"X["<<i<<"] = "<<X[i]<<endl;
   }
    
    return 0;
}