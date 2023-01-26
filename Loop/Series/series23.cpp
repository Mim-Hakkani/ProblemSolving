/*
Write a program in C to display the sum of the series [ 1+x+x^2/2!+x^3/3!+....].
Test Data :
Input the value of x :3
Input number of terms : 5
Expected Output :
The sum is : 16.375000
*/
#include <bits/stdc++.h>
using namespace std;

// function for factrial number
int factarial(int j)
{
    int init = 1;

    for (int i = 1; i <= j; i++)
    {
        init = init * i;
    }

    return init;
}

int main()
{
    int x, n, i, fact;
    float sum = 0;
    cout << "Input the value of x :";
    cin >> x;
    cout << "Input number of terms : ";
    cin >> n;
    for (i = 1; i < n; i++)
    {
        fact = factarial(i);
        sum = sum + (float)(pow(x, i) / fact);
        // cout << fact;
    }
    printf("%0.2f\n", sum + 1);
    return 0;
}