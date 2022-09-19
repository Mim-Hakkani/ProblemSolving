/*
50. Write a C program to read an array of length 5 and print the position and value of the array elements of value less than 5. Go to the editor
Test Data:
Input the 5 members of the array:
15
25
4
35
40

Expected Output:
A[2] = 4.0
*/

#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
int a[5],i ;

// for input value  
for(i=0;i<5;i++){
    cin>>a[i];
}

// for output 

for(i=0;i<5;i++){
    if (a[i]<5)
    {
        /* main section  */

        cout<<"n["<<i<<"] = "<<a[i]<<"\n";
    }
    
}



return 0;
}
