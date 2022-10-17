/*
Write a program in C to print all perfect numbers in given range using the function. 
Test Data :
Input lowest search limit of perfect numbers : 1
Input lowest search limit of perfect numbers : 100
Expected Output :
 mimsds
 The perfect numbers between 1 to 100 are : 6   28 

*/


#include <bits/stdc++.h>
using namespace std;

int main(){
    int number,sum=0,divisor;
    for(int i=1;i<=100;i++){
        for(int j=4;i<=j;j++){
            divisor = j%i;
            sum =sum+divisor;
            if(divisor==0);break
        }
    }
}