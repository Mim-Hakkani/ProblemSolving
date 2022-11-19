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

#include<stdio.h>
#include<math.h>

int main(){
    float a,result;
    int n;

    scanf("%d %f",&n,&a);
    // result = pow(a,n);
    result = sqrt(a);
    printf("%0.4f\n",result);

return 0;
}