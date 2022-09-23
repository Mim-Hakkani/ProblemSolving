#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
  int number,sum=0,count =0;
  float avg;
    cout<<"Enter The Number : ";
  cin>>number;

  for(int i =1;i<=number;i+=2){
    count++;
    sum =sum+i;
  }

  avg = (float) sum/count;

  cout<<"Odd Count is : "<<count<<endl;
  cout<<"Summation is : "<<sum<<endl;
  cout<<"Average is : "<<avg<<endl;
  return 0;
}