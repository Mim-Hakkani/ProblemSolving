// problem name : Reverse Number  125 -> 521

#include<iostream>
using namespace std;
int main(){
    int number,count =0;
    cin>>number;
    int temp = number;

    while(number>0){
       temp = number%10;
       cout<<"value is :: "<<temp;
       number =temp;
     
       if(number ==0) break;

    }

    cout<<count<<endl;

    return 0;
}