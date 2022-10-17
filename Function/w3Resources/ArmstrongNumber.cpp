/*
 Write a program in C to check armstrong and perfect numbers using the function. 
Test Data :
Input any number: 371
Expected Output :

   The 371 is an armstrong number                                                 
  The 371 is not a Perfect number. 

*/


#include <bits/stdc++.h>
using namespace std;

// function 

int ArmstrongNumber(int number){

    cout<<"Enter The Number : ";
    cin>>number;

    int armstrong = number;

    // cout<<"Number test 1 : "<<<<"\n";

    int countter = to_string(number).size();

    int a,b,sum=0;

     while(number!=0){
       a=  number%10;
       sum = sum + pow(a,countter);
       number = number/10;

    }
 
//   cout<<"Summation of digit : "<<sum<<"\n";

//   cout<<"Number : "<<armstrong<<"\n";

  if(sum == armstrong) cout<<"This is the ArmsStrong Number : "<<sum<<"\n";

  else cout<<"Not Armstrong Number "<<"\n";

    return 0;
} 

int main(){
    
     int number,digit;
     ArmstrongNumber(number);
}