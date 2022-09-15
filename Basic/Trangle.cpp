/*
23. Write a C program that reads three floating values and check if it is possible to make a triangle with them. Also calculate the perimeter of the triangle if the said values are valid. Go to the editor
Test Data :
Input the first number: 25
Input the second number: 15
Input the third number: 35
Expected Output:
Perimeter = 75.0
*/
#include<iostream>
using namespace std;
int main(){
    float a,b,c,peremeter,area;
    cout<<"side1: "; cin>>a;
    cout<<"Base: "; cin>>b;
    cout<<"Height: ";cin>>c;

    if((a+b)>c){
        peremeter = a+b+c;
       area = (b*c)/2;

      printf("Area Of Trange is :: %0.2lf\n",area);
      printf("Premeter Of Trange is :: %0.2lf\n",peremeter);
    }
}