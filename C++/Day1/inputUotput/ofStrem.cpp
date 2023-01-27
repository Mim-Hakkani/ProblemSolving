#include<bits/stdc++.h>
using namespace std;
int main(){
    // ofstream used to show the output 
    ofstream of;
    of.open("1.txt");
    of<<"Hellow ami ofstream file base"<<"\n";


    // ifstream is used to input 

    ifstream inp;
    inp.open("input1.txt");
    string name;
    int age;
    double mark;

    inp>>name>>age>>mark;
    // cout<<name << age << mark;

    ofstream details;
    details.open("output.txt");
    details<<name<<age<<mark;



    return 0;
}