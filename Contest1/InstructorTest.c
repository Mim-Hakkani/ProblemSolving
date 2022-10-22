
/*
Problem Statement

Take two non-negative integer X and Y as input and output the multiplication of those two numbers.

Input Format

Input will contain two non-negative positive integers
Constraints

0 <= X <= 100
0 <= Y <= 100
Output Format

Output a single integer, the multiplication of X and Y
Sample Input 0

10 20
Sample Output 0

200

*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    unsigned int a,b,mul;

     scanf("%d %d",&a,&b);
     if((a>=0 && a<=100) && (b>=0 && b<=100)){
        mul = a*b;
        printf("%d\n",mul);
     }

    
    return 0;
}
