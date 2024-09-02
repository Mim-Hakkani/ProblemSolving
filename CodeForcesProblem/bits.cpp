// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
 int count=0,n;

 cin>>n;

for(int i=1;i<=n;i++){
     string x;
     cin>>x;
    if(x=="X++" || x=="++X"){
        count++;
    }
    else {
        count--;
    }
    
   
}

cout<<count;

    return 0;
}