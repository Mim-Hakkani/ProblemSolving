#include<bits/stdc++.h>
using namespace std;
class Student
{
private:
    /* data */
public:
 string name;
 int age;
 float mark;

 void printInfo(){
    cout<<name<<"\n"<<age<<"\n"<<mark<<"\n";
 }
    
};



int main(){

    Student s;
    Student s2;
    s.name ="Ehsan Marketing",
    s.age = 41;
    s.mark =5.5;

    s2.name ="Ehsan Marketing2",
    s2.age = 141;
    s2.mark =25.5;

    s.printInfo();
    s2.printInfo();
    return 0;
}