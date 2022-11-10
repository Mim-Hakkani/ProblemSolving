/*
Write a program in C to count total number of alphabets, digits and special characters in a string.

Test Data :
Input the string : Welcome to w3resource.com

Expected Output :

Number of Alphabets in the string is : 21
Number of Digits in the string is : 1
Number of Special characters in the string is : 4

*/

#include <iostream>
using namespace std;
int main()
{
    int letterCount = 0, digitCount = 0, chracterCount = 0, i;
    char name[1000];
    cout<<"Input : ";
    fgets(name,sizeof(name),stdin);
    puts(name);

    i = 0;
    while (name[i]!= '\0')
    {
        if ((name[i] >= 'a' && name[i] <= 'z') || (name[i] >= 'A' && name[i] <= 'Z'))
        {
            letterCount++;
        }

        else if (name[i] == ' ' || name[i] == '!' || name[i] == '@' || name[i] == '#' || name[i] == '$' || name[i] == '*' || name[i] == '%' || name[i] == '^' || name[i] == '&' || name[i]=='.')
        {
            chracterCount++;
        }

        else if (name[i] >= '0' && name[i] <= '9')
        {
            digitCount++;
        }
        i++;
    }

    cout << "Number of Alphabets in the string is : " << letterCount << "\n";
    cout << "Number of Digits in the string is : " << digitCount << "\n";
    cout << "Number of Special characters in the string is :" << chracterCount << "\n";
}