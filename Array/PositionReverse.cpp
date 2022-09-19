/*
51. Write a C program to read an array of length 6, change the first element by the last, the second element by the fifth and the third element by the fourth. Print the elements of the modified array. Go to the editor
Test Data:
Input the 5 members of the array:
15
20
25
30
35

Expected Output:
array_n[0] = 35
array_n[1] = 30
array_n[2] = 25
array_n[3] = 20
array_n[4] = 15

*/


#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
int a[5],j;
for (int i = 0; i < 5; i++)
{
 cin>>a[i];
}
 
 for (int i = 4; i >=0; i--)
{
    cout<<"n["<<i<<"]"<<a[i]<<"\n";
}

return 0;
}