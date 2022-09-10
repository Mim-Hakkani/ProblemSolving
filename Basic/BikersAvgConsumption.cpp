/*
problem name : 
Write a C program to calculate a bike’s average consumption from the given total distance (integer value) traveled (in km) and spent fuel (in liters, float number – 2 decimal point).

Test Data :
Input total distance in km: 350
Input total fuel spent in liters: 5

Expected Output:
Average consumption (km/lt) 70.000




*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int totalDistance,totalFual;
    float avgPerHour;

    cout<<"Total Distance :: ";
    cin>>totalDistance;

    cout<<"Total Fual in Distance:: ";
    cin>>totalFual;

    avgPerHour = (float)(totalDistance/totalFual);
    printf("Per Average :: %0.2f\n",avgPerHour);

     return 0;

}

