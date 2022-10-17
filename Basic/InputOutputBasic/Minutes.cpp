/*
problem Name :   Write a C program that takes hours and minutes as input, and calculates the total number of minutes.

Input hours: 5
Input minutes: 37

output : Total: 337 minutes.

*/

#include <iostream>
using namespace std;
int main()
{

    // initialization

    int minutes,hour;

    // input
    cout << "Total hour  : ";
    cin >> hour;

    cout << "Total minutes  : ";
    cin >> minutes;
   

    // output
   
    cout <<"Total Minutes " << hour*60 + minutes<< "\n";

    return 0;
}