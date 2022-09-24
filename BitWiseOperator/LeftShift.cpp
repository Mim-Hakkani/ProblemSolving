/*
 input number : 2
 leftShift : 2 * 2^2  = 8 or 
 before Shift  00000010  after Shift : 00001000 2 -> 8 
 before Shift  00000011  after Shift : 00001100 2 -> 2 * 2^3 = 16  
*/

#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,LeftShiftingValue,shiftNumber,value;

    cout<<"Enter The Number : ";
    cin>>n;
    cout<<"How Many Shifting ? ";
    cin>>shiftNumber;

    // way 1 (normal way )

    LeftShiftingValue = n*pow(2,shiftNumber);
    cout<<"Shifting Output is : "<<LeftShiftingValue<<endl;


    // way 2 It's Hard Way 
    value = n<<=shiftNumber;
    printf("Value is : %d\n",value);
    
    return 0;
}