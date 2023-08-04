// problem Name :  Write a program to check if a number is divisible by both 2 and 3.
#include <stdio.h>
int main()
{
    int number;
    printf("Enter three number : ");
    scanf("%d", &number);
    if (number % 2 == 0 || number % 3 == 0)
    {
        printf("%d Divisible by 2 and 3\n", number);
    }

    else
    {
        printf("%d Not Divisible by 2 and 3\n", number);
    }

    return 0;
}

/*
input :
Enter 5
Enter 15

output :
nor Divisible
Divisible
*/