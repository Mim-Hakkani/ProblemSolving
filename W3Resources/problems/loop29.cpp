/*
29. Write a C program to check whether a given number is an armstrong number or not.
Test Data :
Input a number: 153
Expected Output :
153 is an Armstrong number.
*/

#include <bits/stdc++.h>
using namespace std;

int Number_of_digit(int number)
{

    // cout << "number" << number;
    int digit = 0, sum = 0;
    int mod, num;
    while (number >= 1)
    {
        ++digit;
        mod = number / 10;
        number = mod;
    }

    // cout << digit << "\n";
    return digit;
};

void Check_armstrong(int digit, int number)
{

    int sum = 0, mod;
    int prev = number;
    // cout << "digit" << digit;
    while (number >= 1)
    {
        mod = number % 10;
        sum += pow(mod, digit);
        number /= 10;
    }

    // check armsstrong

    if (prev == sum)
        cout << "Armstrong Number"
             << "\n";
    else
        cout << "Not Armstrong !! "
             << "\n";
};

int main()
{
    int number, mod;
    cout << "Input The Number : ";
    cin >> number;
    int digitCount = Number_of_digit(number);

    Check_armstrong(digitCount, number);

    // return 0;
}