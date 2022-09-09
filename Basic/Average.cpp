/*
problem Name : Average 
Write a C program that accepts two item’s weight (floating points' values ) and number of purchase (floating points' values) and calculate the average value of the items

Test Data :
Weight - Item1: 15
No. of item1: 5
Weight - Item2: 25
No. of item2: 4


Expected Output:
Average Value = 19.444444

*/

#include<iostream>
using namespace std;
int main(){
    int item1,item2,weight1,weight2;
    float avg ;
    cout<<"Input the first item 1 :: ";
    cin>>item1;

    cout<<"Input the first item weight1 :: ";
    cin>>weight1;

    cout<<"Input the second item 2 :: ";
    cin>>item2;

    cout<<"Input the second item weight2 :: ";
    cin>>weight2;

    // calculate avg

    avg = (float)((item1*weight1) + (item2*weight2))/(item1+item2);

    cout<<"Average Value = "<<avg<<endl;

    return 0;
}