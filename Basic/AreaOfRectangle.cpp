/*
problem Name :  Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches. and width of 5 inches

input : height 7 , width 5 

output : area = 35 ; premiter = 24 ;
       

*/


#include<bits/stdc++.h>
using namespace std;

int main(){

//   initialize 
  
  int height,width,area,permiter;

//   input 
  cout<<"Enter Height : ";
  cin>>height;

  cout<<"Enter Width : ";
  cin>>width;

  area = height * width ;
  permiter = 2*(height+width);

  cout<<"Area of Rectangle is  : "<<area<<endl;
  cout<<"Permiter of Rectangle is  : "<<permiter<<endl;



// output 


return 0;
}
