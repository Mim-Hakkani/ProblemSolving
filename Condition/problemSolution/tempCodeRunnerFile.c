// // problem Name :  Write a program to check if a number is a perfect square.
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int number;
//     printf("Enter number : ");
//     scanf("%d", &number);
//      int sqrtNumber = sqrt(number);
//     if (sqrtNumber*sqrtNumber == number)
//     {
//         printf("%d is the perfect number\n", number);
//     }

//     else
//     {
//         printf("%d is not the perfect number\n", number);
//     }

//     return 0;
// }

// /*
// input :
// Enter 5
// Enter 15

// output :
// nor Divisible
// Divisible
// */



#include <stdio.h>

// Function to check if a number is perfect
int isPerfectNumber(int num) {
    int i, sum = 0;
    
    // Find the sum of proper divisors
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    
    // Check if the sum is equal to the number
    if (sum == num) {
        return 1; // The number is perfect
    } else {
        return 0; // The number is not perfect
    }
}

int main() {
    int number;
    
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    
    // Check if the number is perfect
    if (isPerfectNumber(number)) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }
    
    return 0;
}
