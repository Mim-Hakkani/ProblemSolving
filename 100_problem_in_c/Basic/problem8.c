/*
Simple Interest Calculator
Write a program to calculate simple interest using the formula:

Interest
=
Principal
×
Rate
×
Time
100
Interest= 
100
Principal×Rate×Time

p = i * n * r
*/

#include<stdio.h>
int main(){
    float principle,interest,time,rate;
    printf("Enter principle : ");
     scanf("%f",&principle);
    printf("Enter Time : ");
      scanf("%f",&time);
    printf("Enter Rate : ");
     scanf("%f",&rate);

    interest = (principle * time * rate)/100;
    printf("Interest : %0.2f", interest);
    return 0;
    
}