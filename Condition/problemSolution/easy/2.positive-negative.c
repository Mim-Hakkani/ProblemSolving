// problem Name : Write a program to check if a number is positive, negative, or zero.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the Number : ");
    scanf("%d", &a);
    if(a==0) {
        printf("This is Zero");
        return 0;
    }
    char *checkNumber = a > 0 ? "positive" : "Negative";
    printf("%d is the %s Number", a, checkNumber);
 
}

/*
input :
Enter a number: 7
Enter a number: -7
This is Zero

output :

7 is positive Number
-7 is negative Number
0 is Zero 
*/