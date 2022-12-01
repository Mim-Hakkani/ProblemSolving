#include <stdio.h>
// user define function
int max_number(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int main()
{
    int a, b, c, max,i;

    for (i = 1; i <= 10; i++)
    {
        printf("Enter Three Number : ");
        scanf("%d %d %d", &a, &b, &c);
        max = max_number(a, b, c);
        printf("Maximum number is : %d\n", max);
    }
}