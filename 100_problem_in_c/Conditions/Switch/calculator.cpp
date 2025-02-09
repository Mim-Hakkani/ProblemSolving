#include <iostream>
using namespace std;
int main()
{
    int Number, num1, num2;
    cout << "Select Menu: \n";
    cout << "\t 1.Addition \n";
    cout << "\t 2.Substraction \n";
    cout << "\t 3.Multiplication \n";
    cout << "\t 4.Division: \n";
    cout << "\t 5.Reminder: \n";
    cout<<"You Selected ";
    cin >> Number;
    cout << "Enter Two Number :";
    cin >> num1 >> num2;

    switch (Number)
    {
    case 1:

        cout << "Summation : " << num1 + num2 << "\n";
        break;
    case 2:
        cout << "Substraction : " << num1 - num2 << "\n";
        break;
    case 3:
        cout << "Multiplication : " << num1 * num2 << "\n";
        break;

    case 4:
        cout << "Division : " << num1 / num2 << "\n";
        break;

    case 5:
        cout << "Reminder : " << num1 % num2 << "\n";
        break;

    default:
        break;
    }
    return 0;
}