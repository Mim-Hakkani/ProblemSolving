#include<iostream>
using namespace std;
int main(){
  
  int sum=0,first =0,second=1,range,total;
  cout<<"Enter num range :";
  cin>>range;
  
   // 0 1  1 2 3 5 8 
 cout<<first<<" "<<second<<" ";
   for(int i=3;i<=range;i++){
    total = first + second ; 
    first = second; 
    second = total; 
    cout<<total<<" "; 
    
   }
   cout<<"\n";

}