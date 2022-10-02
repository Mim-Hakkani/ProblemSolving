/*
 calculate the arithmatic operation using switch case 

  1. Triangle
  2. Circle
  3. Rectangle
  4. Rambos
  5. Trapezoid
  0. exit 



*/

#include<bits/stdc++.h>
using namespace std;
int main (){
    int h,w,r,operationNumber;
    float div;

    cout<<"1.Triangle"<<"\n"<<"2.Circle"<<"\n"<<"3.Rectangle"<<"\n"<<"4.Rambos"<<"\n"<<"5.Trapezoid"<<"\n";
  
    cout<<"Choose operation Number : ";
    cin>>operationNumber ;

    cout<<"Enter height  : ";
    cin>>h;

    cout<<"Enter width : ";
    cin>>w;

    cout<<"Enter radius : ";
    cin>>r;



   switch (operationNumber)
   {
   case 1:
      cout<<"Triangle is :"<<(0.5*h*w)<<"\n";
    break;

    case 2:
    cout<<"Circle is "<<(3.14156*r*r)<<"\n";
    break;

    case 3:
    cout<<"Rectangle is "<<(h*w)<<"\n";
    break;

    case 4:
    cout<<"Rambos is "<<(h*w)/2<<"\n";
    break;

    case 5:
    cout<<"Trapezoid is "<<((h+w)/2)*r<<"\n";
    break;

   
   default:
   cout<<"Invalid output";
    break;
   }



    return 0;
}