#include<bits/stdc++.h>
using namespace std;

class User {
    private:
   string name;
   int id;

   public:

   void Set(string n,int idd){
        name=n;
        id =idd;
   }

   void print(){
      cout<<"Name is : "<<name<<"\n"<<"Id : "<<id<<"\n";
   }

};

int main(){
    User u1;
    u1.Set("dsada",150);
    u1.print();
}