/*
  introduction to basic initialization array 
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

 // for input elements  b[3][4]
cout<<"B[i][j] Elements input Are : ";


  for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cin>>b[i][j];
    }
 }

 // for output elements a[i][j]
cout<<"A[i][j] Elements Are : ";


 for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<"\n";
 }


 // for output elements b[i][j]

cout<<"B[i][j] Elements Are : ";
 for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<<b[i][j]<<" ";
    }
    cout<<"\n";
 }


    return 0;
}