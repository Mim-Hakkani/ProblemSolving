/*
Find The Largest Number of this array 
*/

#include<iostream>
using namespace std;

int main(){
    int a[5],large,position,i;
    cout<<"Input Elements are : ";

    // for input data 

    for (i = 0; i < 5; i++)
    {
        /* code */
        cin>>a[i];
    }

  large = a[0] ;
    // for print data 

        for (i = 1; i < 5; i++)
    {
       
     
        if(a[i]>large){
            large = a[i];
            position = i;
        }
      
      if(a[0]==large){
        position = 0;
      }
        
    }

   cout<<"The Largest Number is : "<<"n["<<position<<"] = "<<large<<endl;
    
}