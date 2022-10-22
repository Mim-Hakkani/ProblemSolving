/*
Motu has N bananas and Patlu has M bananas. Can you tell how many bananas both of them have?

Input Format

You will given two non-negative integers N and M
Constraints

0 <= N <= 100
0 <= M <= 100
Output Format

Output a single line, the total number of bananas both of them have
Sample Input 0

10 20
Sample Output 0

30

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    unsigned int m,n,total;

    scanf("%d %d",&m,&n);
    if((n>=0 && n<=100) && (m>=0 && m<=100)){
        total = m+n;
      printf("%d\n",total);
    
    }

    return 0;
}
