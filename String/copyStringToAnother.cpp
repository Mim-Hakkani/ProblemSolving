#include<iostream>
#include <cstring>
using namespace std;
int main(){
    char emp[1000];
    cout<<"Employee Name : ";
    fgets(emp,sizeof(emp),stdin);
    int i = 0,vowelCount=0,consonrntCount=0;
    while(emp[i]!='\0'){
        if(emp[i]=='a'||emp[i]=='e'||emp[i]=='i'||emp[i]=='o'||emp[i]=='u'||emp[i]=='A'||emp[i]=='E'||emp[i]=='I'||emp[i]=='O'||emp[i]=='U'){
            vowelCount++;
        }
        else{
            consonrntCount++;
        }
        i++
    }
    puts(emp2);
    return 0;
}