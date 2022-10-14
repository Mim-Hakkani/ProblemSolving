/*
39. Write a C program to calculate the sum of all number not divisible by 17 between two given integer numbers. 
Test Data :
Input the first integer: 50 Input the second integer: 99
Expected Output:
Sum: 3521

*/
#include<iostream>
using namespace std ;

int Divisible(int initial,int destination){
    int sum = 0 ;
    for(int i = initial;i<=destination;i++)
    {
        if(i%17!=0){
            sum = sum +i ;
        }
    }

    // cout<<"Sumation is : "<<sum<<endl;

    return sum;
}

int main(){
    int initial,destination,temp;
    cout<<"Enter The First Number : ";
    cin>>initial;
    cout<<"Enter The Second Number : ";

    cin>>destination;

    if(initial>destination){
       temp =destination;
       destination = initial;
       initial =temp;
    }

    int s = Divisible(initial,destination);
    cout<<"Summation number is : "<<s<<endl;
}