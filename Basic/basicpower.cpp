/*
Write a C program to calculate x raised to the power n (xn). 
Example:
Input:
x = 7.0
n = 2

x = 6.2
n = 3
Output:
Result:(x^n) : 49.000000
Result:(x^n) : 238.328000

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    float a,result;
    int n;

    scanf("%f",&a);
    scanf("%d",&n);

    result = pow(a,n);
    printf("%0.4f\n",result);


return 0;
}