#include <iostream>
using namespace std;

int main() {
 int a=1,b=2,c=3,absent;
 cin>>a>>b;
 
 if(a>=1 && b<=3 && a!=b){
     absent = 6 - (a+b);
 }
 cout<<absent;

    return 0;
}