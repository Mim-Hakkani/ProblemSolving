// WAP that takes n integer numbers, and multiply all the numbers in the odd indexed position. Indexing starts from 0.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 1;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 1)
        {
            sum *= a[i];
        }
    }
    cout << "Summation of odd index is :: " << sum << "\n";
    return 0;
}