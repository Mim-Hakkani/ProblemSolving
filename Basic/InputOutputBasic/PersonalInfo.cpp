/*
problem Name : Write a program in C that reads a forename, surname and year of birth and display the names and the year one after another sequentially.

input : 
        Input your firstname: Tom
        Input your lastname: Davis
        Input your year of birth: 1982

output : Tom Davis 1982

*/

#include <iostream>
using namespace std;
int main()
{

    // initialization

    int DateOfBirth;
    char firstName[25],lastName[20];

    // input
    cout << "First Name : ";
    cin >> firstName;

    cout << "Last Name : ";
    cin >> lastName;

    cout << "Date Of Birth  : ";
    cin >> DateOfBirth;

    // output
    cout << "Hi I am  : " << firstName <<" " <<lastName << " " << DateOfBirth<< "\n";

    return 0;
}