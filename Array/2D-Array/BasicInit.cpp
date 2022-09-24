/*
  introduction to basic initialization array 
*/
#include<bits/stdc++.h>
using namespace std;
int main (){
 int a[3][4] ={
    {5,10,15,20},
    {3,6,9,12},
    {6,12,18,21}
 };

 for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<"\n";
 }


    return 0;
}