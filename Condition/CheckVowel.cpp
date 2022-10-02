/*
17. Write a C program to check whether an alphabet is a vowel or consonant. 
Test Data :
k
Expected Output :
The alphabet is a consonant.

*/

#include<bits/stdc++.h>
using namespace std;
int main (){
    char letter ;
    cout<<"Enter The Letter ";
    cin>>letter;
    if(letter=='a' || letter=='e' || letter =='i' || letter=='o' || letter=='u'|| letter=='A' || letter=='E' || letter =='I' || letter=='O' || letter=='U' )
    {
   cout<<"Vowel letter "<<"\n";
    }
 

    else{
        cout<<"Consonent"<<"\n";
    }
    return 0;
}