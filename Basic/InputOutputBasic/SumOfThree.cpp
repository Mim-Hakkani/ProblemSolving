/*
problem Name : Write a program in C to calculate the sum of three numbers with getting input in one line separated by a comma.
input : Input three numbers separated by comma : 5,10,15
output : The sum of three numbers : 30

*/

#include <iostream>
using namespace std;
int main()
{

    // initialization

    int a, b, c;
    char comma;

    // input
    cout << "Input Three Number : ";
    cin >> a >> comma >> b >> comma >> c;

    // output
    cout << "The sum of the given numbers : " << a + b + c << "\n";

    return 0;
}