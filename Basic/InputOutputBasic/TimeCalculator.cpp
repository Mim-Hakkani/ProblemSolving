/*
problem Name :  Write a program in C that takes minutes as input, and display the total number of hours and minutes.

input : minutes: 546

output : 9 Hours, 6 Minutes

*/

#include <iostream>
using namespace std;
int main()
{

    // initialization

    int minutes,hour;

    // input
    cout << "Total Minutes  : ";
    cin >> minutes;
   
   // hour calculate 

   hour = minutes/60;



    // output
    cout  << hour << " Hour"<< ",";
    cout << minutes - (hour*60) << " Minutes " << "\n";

    return 0;
}