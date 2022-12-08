#include <iostream>
using namespace std;
int main()
{

    long long int a, b, test;
    double ga, gb;
    cin >> test;
    int year = 0;
    for (int i = 1; i <= test; i++)
    {
        cin >> a >> b >> ga >> gb;
        year = 0;

        while (a <= b)
        { 
            a = a + (a * ga) / 100;
            b = b + (b * gb) / 100;
            year++;
          
            if (year > 100)
            {
                cout << "Mais de 1 seculo.\n";
                break;
            }
        }
        if (year <= 100)
        {
            cout << year << " anos."
                 << "\n";
        }
    }

    return 0;
}