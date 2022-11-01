/*
Write a C program to take one positive integer N, the size of an array as input. Then take an integer array of size
N as input and tell if the array contains only one unique value or not. Print “YES” or “NO”.

Sample Input 1: 
5 
2 4 2 2 4
Sample Output 1:
NO
Sample Input 2: 
5 
4 4 4 4 4
Sample Output 2:
YES


*/

#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
     
     //size of array 
     int a[n];
    
     for( i=0;i<n;i++){
            cin>>a[i];
        }

     int count =1;
     int search = a[0];

        for(i=1;i<n;i++){
            if(search ==a[i]){
                count++;
            }
        }

        if(count==n) cout<<"Yes"<<"\n";
        else cout<<"No"<<"\n";

        return 0;
        
     
     
     

} 
