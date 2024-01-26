#include<iostream>
#include <vector>
using namespace std;

// function to store data 
int majorityElement(int number[],int len){
    cout<<"Show the output ::";

    for(int i =0;i<len;i++){
       cout<<number[i]<<" ";
    }
    return 0;
}

// main function start 

int main(){

  int length,number[3];

 length = size(number);

//   get array elements 

  for(int i =0;i<length;i++){
    cin>>number[i];
  }

  // call the function 
  majorityElement(number,length);

  return 0;
}