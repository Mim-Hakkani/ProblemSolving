/*
44. Write a C program to calculate the average marks of mathematics of some students. Input 0 (excluding to calculate the average) or negative value to terminate the input process. 
Test Data :
Input Mathematics marks (0 to terminate): 10
15
20
25
0
Expected Output:
Average marks in Mathematics: 17.50

*/

#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int number,sum=0,count=0,num;

        while(1){
            cin>>number;
            if(number== 0 || number <0) break;

        else{
            count++;
            sum = sum + number; 
        }
        }
   float avg = (float) sum / (float) count;
    printf("Average Markes : %0.2lf",avg);

    }


    


