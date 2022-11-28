#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num1,num2;
    cin>>num1>>num2;

    for(int i=1;i<=num2;i++){
        //  cout<<i;
         if(i%num1==0){
            cout<<i<<endl;
            continue;
         }
         cout<<i<<" ";
    }
    return 0;
}