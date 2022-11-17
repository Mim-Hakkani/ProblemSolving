/*
vowel number count 
*/
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
    char companyName[1000];
    fgets(companyName,sizeof(companyName),stdin);
    int i =0,count=0;

    while (companyName[i]!='\0')
    {
        if(companyName[i]=='@' ||companyName[i]=='#' || companyName[i]=='$' || companyName[i]=='%' ||companyName[i]=='^' ||companyName[i]=='&' || companyName[i]=='*'|| companyName[i]=='!'){
         count++;
        }
        i++;

    }

    cout<<"Space Count is : "<<count<<"\n";
    return 0;
    
}