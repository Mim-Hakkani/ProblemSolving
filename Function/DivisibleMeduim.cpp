/*
40. Write a C program to find all numbers which are dividing by 7 and the remainder is equal to 2 or 3 between two given integer numbers. Go to the editor
Test Data :
Input the first integer: 25
Input the second integer: 45
Expected Output:
30
31
37
38
44
*/

#include<iostream>
using namespace std ;

void reminderNumber(int x,int y){
    for(int i = x ; i<y ;i++)
    {
        if(i%7 == 2 || i%7 == 3){
            cout<<i<<endl;
        }
    }
}
int main(){
    int x,y,temp;
    cout<<"Input the first integer:";
    cin>>x;

    cout<<"Input the 2nd integer:";
    cin>>y;

   if(x>y){
       temp =y;
       y = x;
       x =temp;
    }

    reminderNumber(x,y);
}