#include<bits/stdc++.h>
using namespace std;
void RemoveLetter(string &name){
   name.pop_back();
   name.erase(name.begin());
   cout<<"Inside Function : "<<name<<"\n";
}
int main(){
    string name;
    cin>>name;
    RemoveLetter(name);
    // RemoveLetter(name);
   cout<<"Outside Function : "<<name<<"\n";

    return 0;
}