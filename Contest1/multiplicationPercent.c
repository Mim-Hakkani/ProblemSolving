/*
Problem Statement

Rahim has X% share, Karim has Y% share and Habib has (X*Y)% share of the company Zeta. Can you tell the amount of share of Habib?

Input Format

Input will consist of two non-negative integers X and Y
Constraints

0 <= X <= 10
0 <= Y <= 10
Output Format

Output the amount of share of Habib and put a % sign after it
Sample Input 0

5% 4%
Sample Output 0

20%

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    unsigned int a,b,mul;
    char percentSymbol;

    scanf("%d%c %d%c",&a,&percentSymbol,&b,&percentSymbol) ;
        if((a>=0 && a<=10) && (b>=0 && b<=10)){
          mul = a*b;
         printf("%d%c\n",mul,percentSymbol);
    
    }

    return 0;
}
