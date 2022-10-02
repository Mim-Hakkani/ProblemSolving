/*
 calculate the arithmatic operation using switch case 

  1. Addition
  2. Subsraction
  3. Multiplication
  4. Division
  5. Modoulas
  0. exit 

  press 1 
  num : 10
  num 2 : 5 

  addition is : 15 

*/

#include<bits/stdc++.h>
using namespace std;
int main (){
    int a,b,total,operationNumber;
    float div;

    cout<<"1.Addition"<<"\n"<<"2.Substraction"<<"\n"<<"3.Multiplication"<<"\n"<<"4.Division"<<"\n"<<"5.Modulas"<<"\n";
  
    cout<<"Choose operation Number : ";
    cin>>operationNumber ;

    cout<<"Enter Number 1 : ";
    cin>>a;

    cout<<"Enter Number 2 : ";
    cin>>b;



   switch (operationNumber)
   {
   case 1:
      cout<<"Addition is "<<a+b<<"\n";
    break;

    case 2:
    cout<<"Substraction is "<<a-b<<"\n";
    break;

    case 3:
    cout<<"Multiplication is "<<a*b<<"\n";
    break;

    case 4:
    cout<<"Division is "<<a/b<<"\n";
    break;

    case 5:
    cout<<"Modulas is "<<a%b<<"\n";
    break;

   
   default:
   cout<<"Invalid output";
    break;
   }



    return 0;
}