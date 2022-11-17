/*
vowel number count 
*/
#include<iostream>
using namespace std;
int main(){
    char companyName[] ="Ehsan Marketing";
    int i =0,count=0;

    while (companyName[i]!='\0')
    {
        if(companyName[i]=='a' || companyName[i]=='A' ||companyName[i]=='i' || companyName[i]=='I' ||companyName[i]=='e' || companyName[i]=='E' ||companyName[i]=='o' || companyName[i]=='u' ||companyName[i]=='O' || companyName[i]=='U'){
         count++;
        }
        i++;

    }

    cout<<"Vowel Count is : "<<count<<"\n";
    return 0;
    
}