/*
a = 5 -> 101


c = 010 - > 3 
*/


#include<bits/stdc++.h>
using namespace std;
int main (){
    int a,c;
    cin>>a ;

    c  = ~a ;
    cout << "C BitWise And Operation "<<c<<"\n";

    return 0;
}