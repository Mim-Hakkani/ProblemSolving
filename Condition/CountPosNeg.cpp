/*
27. Write a C program that read 5 numbers and counts the number of positive numbers and negative numbers. Go to the editor
Test Data :
Input the first number: 5
Input the second number: -4
Input the third number: 10
Input the fourth number: 15
Input the fifth number: -1
Expected Output:
Number of positive numbers: 3
Number of negative numbers: 2
*/

#include<iostream>
using namespace std;
int main(){
    
 int a[5],i,evencount=0,oddcount=0;
 for(i=0;i<=4;i++){
     cin>>a[i];
      if(a[i]>0) evencount++;
      else oddcount++;
 }

 cout<<"Positive Count "<<evencount<<endl<<"Negative Count "<<oddcount<<endl;

return 0;
    
}