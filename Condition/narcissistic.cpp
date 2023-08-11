#include<iostream>
#include <cmath>
#include<string>
using namespace std; 

int main(){
    int num,sum=0,length;
 
    cout<<"Enter Number : ";
    cin>>num;
   
   length = to_string(num).length();
//    cout<<"StringLength is :"<<digitString.length()<<"\n";

   while(num!=0){
    int reminder = num%10;
    sum+=pow(reminder,length);
    num = num/10;
    
   }

cout<<"narcissistic number is : "<<sum<<"\n";

   
    return 0;
}