/*

Pattern Series :   
*     
**    
* *   
*  *  
*   * 
******

*/

#include<iostream>
using namespace std;

int main(){

int i,j,n;
cout<<"Number : ";
cin>>n;

for(i=1;i<=n;i++){


    // for show number 
    for(int k=1;k<=n;k++)
    {
       if( i==n || k==1 || k==i ){
        printf("*");
       }
       else{
        cout<<" ";
       }
        
    }

    cout<<"\n";

}



cout<<"\n";
}