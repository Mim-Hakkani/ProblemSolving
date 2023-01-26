/*
 Write a program in C to find the sum of the series [ x - x^3 + x^5 + ......].
Test Data :
Input the value of x :2
Input number of terms : 5
Expected Output :
The values of the series:
2
-8
32
-128
512
The sum = 410
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, x, n, sum = 0, pos = 0;
    cout << "Input the value of x :";
    cin >> x;
    cout << "Input number of terms :  ";
    cin >> n;

    for (i = 1; i <= 2 * n; i += 2)
    {
        ++pos;
        if (pos % 2 == 0)
        {
            sum = sum - pow(x, i);
            cout << "-" << pow(x, i) << " ";
        }
        else
        {
            sum = sum + pow(x, i);
            cout << pow(x, i) << " ";
        }
        cout << "\n";
    }

    cout << "Total : " << sum << "\n";
    return 0;
}