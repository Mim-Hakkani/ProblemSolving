/*
26. Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.
Test Data :
Input the number of terms : 5
Expected Output :
1 + 11 + 111 + 1111 + 11111
The Sum is : 12345
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0, series;
    cout << "Input the number of terms :";
    cin >> n;
    int arr[n];
    cout << "The square natural upto " << n << " terms are :";
    arr[0] = 1;
    cout << arr[0] << "+";
    for (int i = 1; i < n; i++)
    {
        series = arr[i - 1] + pow(10, i);
        arr[i] = series;
        sum += series;
        if (i == n-1)
        {
            cout << series;
        }
        else
        {
            cout << series << "+";
        }
    }
    cout << "\n";
    cout << "The Sum is : " << sum + 1 << "\n";
    return 0;
}