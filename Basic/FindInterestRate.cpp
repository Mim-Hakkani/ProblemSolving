/*
53. Write a C program that accepts principle, rate of interest, time and compute the simple interest. 

Test Data:
Input Data: p = 10000, r = 10% , t = 12 year

Expected Output:
Input principle, Rate of interest & time to find simple interest:
Simple interest = 12000

formula : I = pnr
*/


#include<bits/stdc++.h>
using namespace std;
int main (){
    int capital , year ;
    float interest , r; 

    cout<<"Capital : ";
    cin>>capital;

    cout<<"Nominal Interest Rate : ";
    cin>>r;

    cout<<"Year : ";
    cin>>year;

  interest = capital * year * (r/100);

  printf("Simple interest = %0.1f\n",interest);

  return 0; 

}