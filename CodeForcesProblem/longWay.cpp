#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int number,length;
    char name[101];
    cin>>number;
    for(int i=1;i<=number;i++){
         scanf("%s",name);
         length = strlen(name);
         if(length>10){
            cout<<name[0]<<length-2<<name[length-1]<<"\n";
         }
         else
          {
            cout<<name<<"\n";
          }
    }
   
}