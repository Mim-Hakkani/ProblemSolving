/*
problem name : 
Write a C program that accepts an employee's ID, total worked hours of a month and the amount he received per hour. Print the employee's ID and salary (with two decimal places) of a particular month

Test Data :
Input the Employees ID(Max. 10 chars): 0342
Input the working hrs: 8
Salary amount/hr: 15000

Expected Output:
Employees ID = 0342
Salary = U$ 120000.00



*/

#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    
int Day_per_hour,empIds,perHourSalary;
float TotalSalary ;
cout<<"Employee ID : ";
cin>>empIds;

cout<<"Working Hour Per Day : ";
cin>>Day_per_hour;

cout<<"Per Hour Salary : ";
cin>>perHourSalary;

TotalSalary = Day_per_hour*perHourSalary;

    // output shows 

cout<<"Employee Id is :"<<empIds<<endl;
printf("Total Salary Per Month : U$ %0.2f\n",TotalSalary);

}