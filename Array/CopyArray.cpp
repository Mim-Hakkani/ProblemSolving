/*
copy array one elements all value to array two values 
array1 : [100,25,35,40]
array2 : [100,25,35,40]
*/

#include<iostream>
using namespace std ;

int main(){
    
    int a[5],b[5];
    cout<<"Array One elements : ";
    for(int i =0 ;i<5;i++){
        cin>>a[i];
        cout<<a[i]<<" ";

        // copy elements from one two another 
        b[i] =a[i];
    }
       cout<<"\n";
       cout<<"Array two elements : ";
        for(int i =0 ;i<5;i++){
            cout<<b[i]<<" ";
        }
        cout<<"\n";
}