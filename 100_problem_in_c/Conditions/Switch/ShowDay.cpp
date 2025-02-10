#include <iostream>
using namespace std;
int main()
{
    int Day;
    cout << "Enter The Day ";
    cin >> Day;
    switch (Day)
    {
    case 1:
        cout << "Monday\n";
        break;
    case 2:
        cout << "TuesDay\n";
        break;
    case 3:
        cout << "WednesDay\n";
        break;

    case 4:
        cout << "Thusday\n";
        break;

    case 5:
        cout << "Friday\n";
        break;

    case 6:
        cout << "Saterday\n";
        break;

    case 7:
        cout << "Sunday\n";
        break;

    default:
        break;
    }
    return 0;
}