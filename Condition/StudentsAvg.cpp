/*

Write a C program to read roll no, name and marks of three subjects and calculate the total, percentage and division. 

Test Data :
Input the Roll Number of the student :784
Input the Name of the Student :James
Input the marks of Physics, Chemistry and Computer Application : 70 80 90

Expected Output :
Roll No : 784
Name of Student : James
Marks in Physics : 70
Marks in Chemistry : 80
Marks in Computer Application : 90
Total Marks = 240
Percentage = 80.00
Division = First

*/

#include<iostream>
using namespace std;
int main(){
    float phy,chem,math,total,avg;
    int roll;
    char name[30];

    cout<<"Enter Name : ";
    cin>>name;
    cout<<"Enter Roll : ";
    cin>>roll;

    cout<<"Enter Physics : ";
    cin>>phy;

    cout<<"Enter Chemistry : ";
    cin>>chem;


    cout<<"Enter Math : ";
    cin>>math;

    total = phy +chem+math;
    avg = total/3;

    cout<<"Total Marks is : "<<total<<"\n";
    cout<<"Average Marks is : "<<avg<<"\n";
    // grade 

    if(phy>=33 && chem>=33 && math >=33){

    if(avg>=0 && avg<33) cout<<"You Are Fail !!"<<"\n";
    else if(avg>=33 && avg<=45) cout<<" Third Division"<<"\n";
    else if(avg>45 && avg<=59) cout<<" Second Division"<<"\n";
    else if(avg>60 && avg<=100) cout<<" First Division"<<"\n";
    else cout<<"Invalid input"<<"\n";

    }

    else cout<<"You are Fail ...."<<"\n";

    
}