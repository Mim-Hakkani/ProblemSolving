#include<bits/stdc++.h>
using namespace std;

// class recursive 

class Person{
    public:
    string name;
    Person *fname,*mname;

    void print(){
        cout<<"Name : "<<name<<"\n";
        cout<<"Father Name : "<<fname->name<<"\n";
        cout<<"Mother Name : "<<mname->name<<"\n";
    }
 
};


int main(){

    Person p;
    p.name = "Hakkani";
    p.fname = new Person;
    p.mname = new Person;
    p.fname->name = "A.Karim";
    p.mname->name = "Farida";
       p.print();
}