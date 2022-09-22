/*
 linear search : {1,15,25,64,87,34}
*/

#include<iostream>
using namespace std ;

int main(){
int number,a[5];
cout<<"Enter numbers of list  : ";
for(int i=0;i<5;i++){
    cin>>a[i];
}

cout<<"Searching Numbers : ";
cin>>number;

for(int i = 0;i<5;i++)
  if(a[i] == number){
    cout<<"Yes ! Find The Numbers " << number <<endl;
    break;
  } 

}