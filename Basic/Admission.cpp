/*
 Write a C program to find the eligibility of admission for a professional course based on the following criteria: 

Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 or Total in Maths and Physics >=140 ------------------------------------- 

Input the marks obtained in Physics :65 Input the marks obtained in Chemistry :51 Input the marks obtained in Mathematics :72 

 Total marks of Maths,Physics and Chemistry : 188
 Total marks of Maths and Physics : 137 

output : 
The candidate is not eligible.

*/

#include<bits/stdc++.h>
using namespace std;
int main (){
    int m,p,cm,total,totalTwo;

    cout<<"Math :";
    cin>>m;
    cout<<"Phy :";
    cin>>p;
    cout<<"Chem :";
    cin>>cm;

    total = m+p+cm;

    totalTwo = m+p;

    if((m>=65 && p>=55 && cm>=50) && (total>=190 || totalTwo >=140))
    {
        cout<<"The candidate is eligible"<<"\n";
    }

    else cout<<"The candidate is not eligible"<<"\n";
    
    return 0;
}