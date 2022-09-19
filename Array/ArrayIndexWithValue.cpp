/*
48. Write a C program to read and print the elements of an array of length 7, before print replace every negative number, zero with 100. Go to the editor
Test Data:
Input the 5 members of the array:
25
45
35
65
15

Expected Output:
Array values are:
n[0] = 25
n[1] = 45
n[2] = 35
n[3] = 65
n[4] = 15
*/

#include<iostream>
using namespace std;
int main(){
    int n,elements[7],count=0;
    
    cout<<"Enter The Number Of elements : ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>elements[i];      
    }
  
  cout<<"Output is :: "<<"\n";

    for (int i = 0; i < n; i++)
    {
         if(elements[i]>0){
            cout<<"n["<<count++<<"] = "<<elements[i] <<"\n";
        }
    }
    
}