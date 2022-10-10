/*

 Write a program in C to swap two numbers using function. Go to the editor
Test Data :
Input 1st number : 2
Input 2nd number : 4
Expected Output :

Before swapping: n1 = 2, n2 = 4                                                  
After swapping: n1 = 4, n2 = 2  


*/


#include<iostream>
using namespace std ;

int SwapNumber(int a,int b){
    
    int temp ;

     temp = a; 
     a=b;
     b=temp;
     cout<<"Swap Number :"<<a<<" "<<b<<"\n";
    
}

int main(){
    int a,b;
    cout<<"Enter Number : ";
    cin>>a;

    cout<<"Enter Number2: ";
    cin>>b;

    cout<<"Two Number is : " << a << b<<"\n"; 

       SwapNumber(a,b);

    return 0;
}


