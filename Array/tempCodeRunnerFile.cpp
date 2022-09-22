/*
 linear search : {1,15,25,64,87,34}
*/

#include<iostream>
using namespace std ;

int main(){
int number,a[5],i;
cout<<"Enter numbers of list  : ";
for(int i=0;i<5;i++){
    cin>>a[i];
}

cout<<"Searching Numbers : ";
cin>>number;
int pos=-1;

for( i = 0;i<5;i++){
   pos++;
  if(a[i] == number){
    cout<<"Yes ! Find The Numbers " << number <<"in Position"<<pos<<" "<<endl;
    break;
  } 

}

}