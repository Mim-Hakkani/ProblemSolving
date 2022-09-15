/*
30. Write a C program to find and print the square of each one of the even values from 1 to a specified value. Go to the editor
Test Data :
List of square of each one of the even values from 1 to a 4 :
Expected Output:
2^2 = 4
4^2 = 16

*/

#include<iostream>
using namespace std;
int main(){
    int a;
    cout << "Maximum Range of Number ";

    // input five integer number 
     cin>>a;

    for(int j =2 ; j<=a;j+=2){

      // calculate the squre 

      cout<<j<<"^2 = "<<j*j<<endl;
    

    }

}