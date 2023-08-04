// problem Name :  Write a program to check if a number is a perfect square.
#include <stdio.h>
#include <math.h>
int main()
{
    int number;
    printf("Enter number : ");
    scanf("%d", &number);
     int sqrtNumber = sqrt(number);
    if (sqrtNumber*sqrtNumber == number)
    {
        printf("%d is the perfect square\n", number);
    }

    else
    {
        printf("%d is not the perfect square\n", number);
    }

    return 0;
}

/*
input :
Enter 4
Enter 15

output :
perfect square
not perfect square
*/