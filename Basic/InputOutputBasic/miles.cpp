/*
problem Name : Write a C program that converts kilometers per hour to miles per hour.

Input kilometers per hour: 15

output : 9.320568 miles per hour

*/

#include <iostream>
using namespace std;
int main()
{

    // initialization

    int km;
    float miles;

    // input
    cout << "Kilometers Per Hour  : ";
    cin >> km;
   
     
    // output

    miles = km*0.6213;
    printf("%0.4f miles per hour",miles);

    return 0;
}