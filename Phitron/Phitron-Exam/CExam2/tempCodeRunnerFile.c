/*
Write a C program that will take a string  as input from you and change the cases of the characters.If the letter is capital, change it into small and if the letter is small change it into capital letter. Look at the test case and explanation for more clarification.

Sample Input:
hElLoWorld

Sample Output:
HeLlOwORLD

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    char changes[1000];
    fgets(changes, sizeof(changes), stdin);

    int i = 0;
    while (changes[i] != '\0')
    {

        if (changes[i] >= 'a' && changes[i] <= 'z')
        {
            changes[i] = changes[i] - 32;
        }
        else if (changes[i] >= 'A' && changes[i] <= 'Z')
        {
            changes[i] = changes[i] + 32;
        }

        i++;
    }

    puts(changes);

    return 0;
}