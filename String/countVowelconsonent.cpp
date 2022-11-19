/*
 Write a program in C to count total number of vowel or consonant in a string. 

Test Data :
Input the string : Welcome to w3resource.com

Expected Output :

The total number of vowel in the string is : 9 
The total number of consonant in the string is : 12 
*/

#include<iostream>
#include <cstring>
using namespace std;
int main(){
    char emp[1000],emp2[1000];
    cout<<"Employee Name : ";
    fgets(emp,sizeof(emp),stdin);
    cout<<"Copy Employee Name : ";
    strcpy(emp2,emp);
    puts(emp2);
    return 0;
}