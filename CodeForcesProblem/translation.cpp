#include <algorithm> 
#include<iostream>
#include<string>
using namespace std;

int main(){
  string str1,str2;
  cin>>str1>>str2;
  string temp = str2;
   reverse(str1.begin(), str1.end());
   if(temp==str1){
     cout<<"YES";
   }
   else{
     cout<<"NO";
   }


  return 0;
}
