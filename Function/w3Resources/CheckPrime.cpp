/*
Write a program in C to check whether a number is a prime number or not using the function.

Test Data :
Input a positive number : 5

Expected Output :
The number 5 is a prime number.


*/

#include<iostream>
#include<math.h>
using namespace std ;

int isPrime(int number){
    
    if(number<=1 || number%2==0) return 0;

    int sqrtNumber = sqrt(number);

    for(int i = 3 ;i<=sqrtNumber;i++){
        if(number%i == 0) {
            return 0;
            }

        else {
            return 1;
        }
    }
}

int main(){
    int number,booleanValue;
    cout<<"Number choose as your wish : ";
    cin>>number;

     booleanValue = isPrime(number);

    if(booleanValue==1) cout<<number<<"It is the Prime Number "<<"\n";
    else cout<<"Not Prime "<<"\n";

    
}