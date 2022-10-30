/*
team in programming contest 

input : 3
     1 0 1
     0 1 1
     0 0 1

output :2

*/

#include<iostream>
using namespace std;
int main()
{
    int problemNumber,a,b,c,solved=0;
    cin>>problemNumber;

    for(int i=1;i<=problemNumber;i++){
        cin>>a>>b>>c;
        if(a+b+c>=2){
            solved++;
        }
    }
    cout<<solved<<"\n";
    return 0;
} 
