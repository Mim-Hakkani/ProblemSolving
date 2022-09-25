/*
 Normal Way 

 problem Name : 
 58. Write a C program that accepts 4 real numbers from the keyboard and print out the difference of the maximum and minimum values of these four numbers. Go to the editor
Input four numbers: 1.54 1.236 1.3625 1.002
Difference is 0.5380
*/

#include<bits/stdc++.h>
using namespace std;
int main (){
 int a,b,c,d,maxi,mini,first,second,fmin,smin;
 cout<<"Enter Four Numbers : ";
 cin>>a>>b>>c>>d;

 // finding maximum 
  first = max(a,b);
  second = max(first,c);
  maxi =max(second,d);

 cout<<"Maximum"<<maxi<<endl;

 cout<<a<<b<<c<<d<<endl;

 // finind minimum 

  fmin = min(a,b);

  
  smin = min(fmin,c);

  mini =min(smin,d);
    cout<<mini<<endl;

    int diff = maxi - mini; 

//   cout<<"Minimum"<<mini<<endl;

  cout<<"Difference : "<<diff<<endl;
    return 0;
}