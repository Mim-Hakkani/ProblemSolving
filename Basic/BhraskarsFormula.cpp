/*
20. Write a C program to print the roots of Bhaskara’s formula from the given three floating numbers. Display a message if it is not possible to find the roots. 
Test Data :
Input the first number(a): 25
Input the second number(b): 35
Input the third number(c): 12
Expected Output:
Root1 = -0.60000
Root2 = -0.80000


*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    
   float a,b,c,product,root1,root2;
   cin >>a>>b>>c;
    product = sqrt(((b*b) - (4*a*c)));
    root1= (-b+product) /(2*a);
    root2= (-b-product) /(2*a);
 
    // cout<<root1<<endl;
    // cout<<root2<<endl;

    printf("Root1 is : %f\n",root1);
    printf("Root1 is : %f\n",root2);
 
     return 0;

}
