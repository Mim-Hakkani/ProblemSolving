/*
 Write a C program that reads an integer and check the specified range where it belongs. Print an error message if the number is negative and greater than 80.

Test Data :
Input an integer: 15
Expected Output:
Range [0, 20]

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    
   int number;
   cin>>number;
   if(number>=0 && number<=20) cout<<"[0, 20]"<<endl;
   else if(number>20 && number<=40) cout<<"[20, 40]"<<endl;
   else if(number>40 && number<=60) cout<<"[40, 60]"<<endl;
   else if(number>60 && number<=80) cout<<"[60, 80]"<<endl;
   else cout<<"OutSide The Range ..try again "<<endl;
     return 0;

}
