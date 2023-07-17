// problem Name : Write a program to check if a character is an alphabet or not.
#include <stdio.h>
int main()
{
    char leter;
    printf("Enter leter : ");
    scanf("%c", &leter);
    if ((leter>='a' &&  leter<='z') || (leter>='A' &&  leter<='Z'))
    {
        printf("%c is the alphabet  \n", leter);
    }

    else
    {
        printf("%c  is not the alphabet\n", leter);
    }

    return 0;
}

/*
input :
Enter a
Enter 15

output :
alphabet
not alphabet
*/