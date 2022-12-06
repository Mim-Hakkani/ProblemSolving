#include <iostream>
using namespace std;
int main()
{
   unsigned long long int i, j, a[60], test, fibo;
    cin >> test;
    for (j = 1; j <= test; j++)
    {
        cin >> fibo;
        if (fibo == 0)
        {
          
            cout << "Fib(0) = 0"<<"\n";
        }

        else if (fibo == 1)
        {
           
             cout << "Fib(1) = 1"<<"\n";
        }

        else
        {
            for (i = 2; i <= fibo; i++)
            {
                a[0] = 0;
                a[1] = 1;
                a[i] = a[i - 1] + a[i - 2];
            }
            cout << "Fib(" << fibo << ") = " << a[fibo] << "\n";
        }
    }

    return 0;
}