#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[10],num1;
    cin>>num1;
    for(int i =0;i<9;i++){
        if(i==0) cout<<"N["<<i<<"] = "<<num1<<endl; 
        num1 =num1*2;
      cout<<"N["<<i+1<<"] = "<<num1<<endl;
    }

   
    return 0;
}