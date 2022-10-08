/*
47. Write a C program that reads an integer and find all its divisor. Go to the editor
Test Data:
Input an integer: 45
Expected Output:
All the divisor of 45 are:
1
3
5
9
15
45
*/

#include<iostream>
#include<math.h>
using namespace std ;
int main(){
    int n;
    cout<<"Enter The Number " ;
    cin>>n;

  cout<<sqrt(n)<<endl;
  
cout<<"All the divisor of 45 are: ";
    for(int i = 2 ;i<=n/2; i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }

    cout<<"\n";
}