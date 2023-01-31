/*
25. Write a program in C to display the n terms of square natural number and their sum. 
1 4 9 16 ... n Terms
Test Data :
Input the number of terms : 5
Expected Output :
The square natural upto 5 terms are :1 4 9 16 25
The Sum of Square Natural Number upto 5 terms = 55
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Input the number of terms :";
    cin>>n;
    cout<<"The square natural upto 5 terms are :";
    for(int i =1;i<=n;i++){
        cout<<i*i<<" ";
        sum+=i*i;
    }
    cout<<"\n";
    cout<<"The Sum of Square Natural Number upto "<<n<<" terms = "<<sum<<"\n";
    return 0;

}