/*

 Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function.

Expected Output :
 The sum of the series is : 34 

*/

#include<iostream>
using namespace std ;

// function declaration 

int FactSeries(int number){
  // cout<<"Number is : "<<number is the vai ;
  int fact=1 ;
  int sum = 0;


  for(int i=1;i<=number;i++){
    fact = fact*i;
    sum = sum + (fact/i); 
  }
  
// cout<<fact<<"\n";
// cout<<sum<<"\n";

return sum;
}


int main(){
    int i,number;
    cout<<"Enter The Number : ";
    cin>>number;

    // function call  

     int sumation = FactSeries(number);

     // Summation of this number 

     cout<<"Summation is : "<<sumation<<"\n";

     return 0;
}