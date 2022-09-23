#include<iostream>
using namespace std;
int main(){
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  if(a==c && b==d) {cout<<"The pair is in ascending order! "<<endl;}
  else if(a==d && b==c) cout<<"The pair is in descending order!"<<endl;
  else cout<<"Invalid input"<<endl; 
} 

