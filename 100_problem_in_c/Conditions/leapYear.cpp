#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter The Year: ";
    cin >> year;
    if ((year % 400 == 0 || year % 4 == 0) && year % 100 != 0)
        cout << "This is the leap year.\n";

    else
        cout << "Not a Leap Year.." << "\n";

    return 0;
}