#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
  int number,num2,sum=0,count =0;
  float avg;
     cout<<"initial Number : ";
     cin>>number;

    cout<<"End Number : ";
     cin>>num2;

  for(int i =number;i<=num2;i++){

    if(i%2==1){
    count++;
    sum =sum+i;
    }

  }

  avg = (float) sum/count;

cout<<"*****************"<<endl;
  cout<<"Odd Count is : "<<count<<endl;
  cout<<"Summation is : "<<sum<<endl;
  cout<<"Average is : "<<avg<<endl;
  return 0;
}