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