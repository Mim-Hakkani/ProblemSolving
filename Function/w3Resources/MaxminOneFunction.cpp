/*
Write a C programming to find out maximum and minimum of some values using function which will return an array. 
Test Data :
Input 5 values
25
11
35
65
20
Expected Output :

Number of values you want to input: Input 5 values
Minimum value is: 11
Maximum value is: 65 
*/

#include<iostream>
using namespace std ;

// maximum number check 

int NumberCheck(int num[5]){
    
    for(int i =0;i<=4;i++){
        cin>>num[i];
    }
    
    // check maximum number 

    int max = num[0];

    for(int j=1; j<=4; j++){
       if(max<num[j])
       {
        max = num[j];
       }
    }

    cout<<"Maximum Number is : "<<max<<"\n";


    // check Minimum 


       int min = num[0];

    for(int j=1; j<=4; j++){
       if(min>num[j])
       {
        min = num[j];
       }
    }


    cout<<"Minimum Number is : "<<min<<"\n";


   return 0;
    
    }






int main(){
    int num[5];
    cout<<"enter The Numbers : ";

    NumberCheck(num);



}