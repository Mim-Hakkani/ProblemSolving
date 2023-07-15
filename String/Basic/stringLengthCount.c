/*
2. Write a program in C to find the length of a string without using library function.

Test Data :
Input the string : w3resource.com

Expected Output :

Length of the string is : 15
*/
#include <stdio.h>
#include <string.h>
int main()
{

    char stringData[1000], count = 0;
    printf("Input the String : ");
    fgets(stringData, sizeof(stringData), stdin);
    printf("Length of the string is : ");

    int i = 0;
    while (stringData[i] != '\0')
    {
        count++;
        i++;
    }
    printf("%d\n", count - 1);
    printf("Output String is : ");
    puts(stringData);
    return 0;
}