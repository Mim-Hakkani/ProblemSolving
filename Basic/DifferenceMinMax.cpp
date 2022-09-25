/*
difference Between maximum and minimum number 
*/

#include<iostream>
using namespace std;
int main(){
    int a[4],max,min,i,difference;
    for(int i =0;i<4;i++){
        cin>>a[i];
    }


    // find the maximum 

     max = a[0];
    for( i =1;i<4;i++){
        if(max<a[i]){
            max = a[i];
        }
    }
    cout<<"Maximum : "<<max<<endl;


   
   // find the minimum
   

     min=a[0];
     for(int i =1;i<4;i++){
        if(a[i]<min){
            min = a[i];
        }
    }

    cout<<"Minimim number is : "<<min<<"\n";

    difference = max-min;
    cout<<"Difference Between : "<<difference<<"\n";

}