/*

input : 

1 2 3
4 5 6
7 8 9

output :

1 2 3 
6 9 8 
7 4 5
*/

#include<iostream>
using namespace std;
int main(){
    int a[3][3],i,j;

// get input 
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>a[i][j];
        }
    }

    cout<<"Output of 2d matrix is : "<<"\n";
       for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            if(i==0){
                cout<<a[i][j]<<" ";
            }
            if(j==2 && i!=0){
               
                  cout<<a[i][j]<<" "; 
            }
         

   
        }
        cout<<"\n";
    }
}

/*
 unsolved this problem 
*/