/*
 some steps of nth term of febonacci series :

 step 1  : first declare the variable of first two fibo number 
 step 2  : loop executed in n times
 step 3 : add contion of first two fibo number 
 step 4 : add two declate variable 
 step 5 : swap the fibo and fibo1 
 step 6 : execute n times 
 step 7 : end 

*/

#include <stdio.h>
int main()
{

    int n, i, foboNumber;
    scanf("%d", &n);

    int fib = 0;
    int fib1 = 1;

    for (i = 1; i <= n; i++)
    {
        if (i == 1)
            printf("0 ");
        else if (i == 2)
            printf("1 ");
        else
        {

            foboNumber = fib + fib1;
            fib = fib1;
            fib1 = foboNumber;
            printf("%d ", foboNumber);
        }
    }
}