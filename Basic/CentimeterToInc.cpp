/*
54. Write a C program that accepts a distance in centimeters and prints the corresponding value in inches. 
Test Data:
Input Data: 500cms
Input the distance in cm:
Distance of 500.00 cms is = 196.85 inches
*/

#include<bits/stdc++.h>
using namespace std;
#define VALUE 0.393701
int main (){
    int cm;
    float inc ;

    cout<<"Enter Centimeter : ";
    cin>>cm;

    inc = cm*VALUE;
    printf("Distance of %d cms is : %0.2f\n",cm,inc);

}