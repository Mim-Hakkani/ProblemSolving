/*
  Summation of 2d Array 
*/
#include<bits/stdc++.h>
using namespace std;
int main (){
 int a[3][4] , b[3][4];

 // for input elements  a[3][4]

cout<<"A[i][j] Elements Are : ";


  for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cin>>a[i][j];
    }
 }
cout<<"\n";
 // for input elements  b[3][4]
cout<<"B[i][j] Elements input Are : ";


  for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cin>>b[i][j];
    }
 }

cout<<"\n";
 // for output elements a[i][j]

cout<<"A[i][j] Elements Are : "<<"\n";


 for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<"\n";
 }


 // for output elements b[i][j]

cout<<"B[i][j] Elements Are : "<<"\n";
 for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<<b[i][j]<<" ";
    }
    cout<<"\n";
 }


 // summation of two dimentional matrix 

 cout<<"Summation of Two Array is : "<<"\n";

 for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<<a[i][j]+b[i][j]<<" ";
    }
    cout<<"\n";
 }



    return 0;
}