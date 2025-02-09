#include<iostream>
using namespace std;
int main(){
    int grade;
    cout<<"Enter The Number: ";
    cin>>grade;
    if(grade<0 && grade>100) cout<<"Invalid Number\n";
    else if(grade>0 && grade<33) cout<<"Sorry You are Fail!! \n";
    else if(grade>=33 && grade<40) cout<<"Grade : D\n";
    else if(grade>=40 && grade<50) cout<<"Grade : C\n";
    else if(grade>=50 && grade<60) cout<<"Grade : B\n";
    else if(grade>=60 && grade<70) cout<<"Grade : A-\n";
    else if(grade>=70 && grade<80) cout<<"Grade : A\n";
    else if(grade>=80 && grade<100) cout<<"Grade : A+\n";
    else cout<<"Invalid Number"<<"\n";
    
    return 0;
}