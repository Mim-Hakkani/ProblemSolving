/*

find the smallest number of this array function 
input : 15 25 98 12 54

output : 
 Smallest Number is : 12 

*/

#include<iostream>
using namespace std ;
int main(){
    int a[5],i,small;
  

    for(i=0;i<5;i++)
    {
        cin>>a[i];
            
    }
//   int small = a[0];

  for(i=1;i<5;i++)
    {
       small = a[0];
      if(a[i]<small){
        small = a[i];
       }
        
    }
  cout<<"Smallest Elementd is : "<<small<<endl;  



}