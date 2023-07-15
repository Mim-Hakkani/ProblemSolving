/*
33. Write a C program that accepts some integers from the user and find the highest value and the input position. 
Test Data :
Input 5 integers:
5
7
15
23
45
Expected Output:
Highest value: 45
Position: 5

*/

#include<iostream>
using namespace std;
int main()
{
    int numbers[5],pos=0;
    for(int i=0;i<=4;i++){
        cin>>numbers[i];   
    }

    int max = numbers[0];

    for(int i=1;i<=4;i++){
       pos++;
         if(max<numbers[i]){
          max = numbers[i];
         }  
    }
    cout<<"Maximum Number is : "<<max<<endl;
    cout<<"Position of maximum number is : "<<pos<<endl;
    cout<<endl;
    


}