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

int maximumNumber(int num[5]){
    
    for(int i =0;i<=4;i++){
        cin>>num[i];
    }
    
    int max = num[0];

    for(int j=1; j<=4; j++){
       if(max<num[j])
       {
        max = num[j];
       }
    }

    return max;
    
    }


    // minimum number check 


    int minimumNumber(int num[5]){
    
    for(int i =0;i<=4;i++){
        cin>>num[i];
    }
    
    int min = num[0];

    for(int j=1; j<=4; j++){
       if(min>num[j])
       {
        min = num[j];
       }
    }

    return min;
    
    }



int main(){
    int num[5];
    cout<<"enter The Numbers : ";

    int maximum  = maximumNumber(num);

    cout<<"Maxinumber is : "<<maximum<<endl;

    int minimum  = minimumNumber(num);

    cout<<"minimum is : "<<minimum<<endl;
}