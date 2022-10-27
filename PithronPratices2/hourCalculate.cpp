/*

Write a C program to take two non-negative integers N and M. Here N and M represents time in hours (24 hours
format). You need to print from N to M, if you need to start from beginning again, you can do that. See the
sample input output for more clarification.

Sample Input: Sample Output:

5 12          5 6 7 8 9 10 11 12

21 7          21 22 23 0 1 2 3 4 5 6 7

*/

#include<bits/stdc++.h>
using namespace std;
int main (){
 int a,b;
  
    cin>>a>>b;
    if((a>=0 && a<=24) && (b>=0 && b<=24)){
        
        while(a!=b){
                   
                if(a==24){
                    cout<<"0 ";
                    a=0;
                }else{
                     cout<<a<<" ";
                }

                a++;
        }
        if(a<b) cout<<a<<"\n";
        else cout<<b<<"\n";
    }

    return 0;
}