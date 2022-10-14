/*

Write a program in C to get the largest element of an array using the function. Go to the editor
Test Data :
Input the number of elements to be stored in the array :5
Input 5 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
Expected Output :

The largest element in the array is : 5  

*/

#include<iostream>
#include<math.h>
using namespace std ;

int findLargest(int number[5]){
    
    // input numbers 
    for(int i=0;i<=4;i++){
        cin>>number[i];
    }

    // show output 
     int largest = number[0];
    for(int i=1;i<=4;i++){
        if(largest<number[i]){
            largest = number[i];
        }

    }
        return largest;
}

int main(){
    int number[5];
    cout<<"Number five as your wish : ";    
   int large = findLargest(number);
    cout<<"Largest Number is : "<<large<<"\n";
    
}