/*
28. Write a C program that read 5 numbers and counts the number of positive numbers and print the average of all positive values. Go to the editor
Test Data :
Input the first number: 5
Input the second number: 8
Input the third number: 10
Input the fourth number: -5
Input the fifth number: 25

Expected Output:
Number of positive numbers: 4
Average value of the said positive numbers: 12.00
*/

#include<iostream>
using namespace std;
int main(){
    
 int a[5],i,evencount=0,sum=0;
 float avg;
 for(i=0;i<=4;i++){
     cin>>a[i];
      if(a[i]>0) {
        evencount++;
        sum = sum+a[i];
      }
    
 }

 cout<<"Positive Count "<<evencount<<endl<<"Summation is done:"<<sum<<endl;
 avg = (float) sum/evencount;
 printf("Average is : %0.2lf\n",avg);

return 0;
    
}