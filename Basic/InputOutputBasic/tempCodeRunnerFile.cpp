/*
problem Name : Write a program that converts Centigrade to Fahrenheit.

Input a temperature (in Centigrade): 45

output : 113.000000 degrees Fahrenheit.

*/

#include <iostream>
using namespace std;
int main()
{

    // initialization

    int Centigrade;
    float Fahrenheit;

    // input
    cout << "Centigrade  : ";
    cin >> Centigrade;
   
     
    // output

    Fahrenheit = ((Centigrade *9)/5) +32;
    printf("%0.4f degrees Fahrenheit",Fahrenheit);

    return 0;
}