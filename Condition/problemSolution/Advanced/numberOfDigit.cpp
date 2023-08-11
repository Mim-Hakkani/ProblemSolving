#include<iostream>
#include <vector>
using namespace std; 

int main(){
    int num,sum=0;
    vector<int>numbers;
    cout<<"Enter Number : ";
    cin>>num;
   
   int count = 0;
   while(num!=0){
    int reminder = num%10;
    count++;
    // numbers.push_back(reminder);
    num = num/10;
    
   }

cout<<"Digit is : "<<count<<"\n";
// cout<<"Number of Digit is : "<<numbers.size();

//   for(int i = numbers.size()-1; i>=0 ;i--){
//     cout<<numbers[i];
//   }
   
    return 0;
}