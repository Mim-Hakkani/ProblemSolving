/*
4. This time you need to find the sum of the digits of the input. So look at the sample input output. 
Sample Input: 
2346167 
Sample Output: 
29 
Explanation: Since, the sum of the digits is 2+3+4+6+1+6+7 = 29. So the output is 29. 

*/

#include <stdio.h>
int main()
{
    long long int a;
    int sum =0,reminderLast;
    scanf("%lld",&a);

    while(a!=0){
        reminderLast = a%10;
        sum = sum+reminderLast;
        a= a/10;

    }
    printf("%lld",sum);

   return 0;
}