#include<iostream>
using namespace std;
int main(){
    char letter ;
    cin>>letter;

    if(letter>='A' && letter<='Z') cout<<"Uppercase Letter\n";
    else cout<<"Lowercase Letter";
    return 0;
}