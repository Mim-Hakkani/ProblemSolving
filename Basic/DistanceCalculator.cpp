/*
problem name : 
Write a C program to calculate the distance between the two points..

Test Data :
Input x1: 25
Input y1: 15
Input x2: 35
Input y2: 10

Expected Output:
Distance between the said points: 11.1803




*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int x1,x2,y1,y2,area;
    float distance;
    cout<<"Enter the axis : ";
    cin>>x1>>x2>>y1>>y2;
    
    area =((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1));

    distance = sqrt(area);
    
    printf("Total Distance is : %0.2f\n",distance);
    
     return 0;

}

