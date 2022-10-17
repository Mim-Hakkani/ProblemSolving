/*
problem Name :   Write a C program that prints the perimeter of a rectangle to take its height and width as input.

Input the height of the Rectangle : 5
Input the width of the Rectangle : 7

output : Perimeter of the Rectangle is : 24.000000.

*/

#include <iostream>
using namespace std;
int main()
{

    // initialization

    int height,width;
    float Perimeter;

    // input
    cout << "Total width  : ";
    cin >> width;

    cout << "Total height  : ";
    cin >> height;
   
     
    // output

    Perimeter = 2*(height+width);
    printf("Perimeter of the Rectangle is : %0.2f",Perimeter);

    return 0;
}