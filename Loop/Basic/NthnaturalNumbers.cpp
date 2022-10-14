/*
 Write a program in C to display n terms of natural number and their sum.
Test Data : 7

Expected Output :
The first 7 natural number is :
1 2 3 4 5 6 7
The Sum of Natural Number upto 7 terms : 28

*/

#include<bits/stdc++.h>
using namespace std;
int main (){
    int sum=0,n;
    cout<<"n terms of natural number : ";
    cin>>n;
   cout<<"The first "<<n<<" natural number is :";
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
        sum  =sum+i;
    }

    cout<<endl<<"The Sum of Natural Number upto "<<n<< "terms : "<<sum<<"\n";
    return 0;
}