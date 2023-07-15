/*
vowel number count 
*/
#include<iostream>
using namespace std;
int main(){
    char companyName[] ="Ehsan Marketing is the Best Company That i have seen.";
    int i =0,count=0;

    while (companyName[i]!='\0')
    {
        if(companyName[i]==' '){
         count++;
        }
        i++;

    }

    cout<<"Space Count is : "<<count<<"\n";
    return 0;
    
}