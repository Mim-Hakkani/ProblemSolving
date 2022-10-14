/*
Write a program in C to calculate and print the Electricity bill of a given customer. The customer id., name and unit consumed by the user should be taken from the keyboard and display the total amount to pay to the customer. The charge are as follow : 

Unit	Charge/unit
upto 199	@1.20
200 and above but less than 400	@1.50
400 and above but less than 600	@1.80
600 and above	@2.00
If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum bill should be of Rs. 100/-

Test Data :
1001
James
800

Expected Output :
Customer IDNO :1001
Customer Name :James
unit Consumed :800
Amount Charges @Rs. 2.00 per unit : 1600.00
Surchage Amount : 240.00
Net Amount Paid By the Customer : 1840.00


*/

#include<bits/stdc++.h>
using namespace std;
int main (){

    int billnumber,unit;
    char name[20];
    float totalAmount,surchage;

    cout<<"Bill No.";
    cin>>billnumber;
 
    cout<<"Name : ";
    cin>>name;
    
    cout<<"Unit Bill Number : ";
    cin>>unit;

    // personal info 

    cout<<"Customer IDNO : "<<billnumber<<"\n";
    cout<<"Customer Name :"<<name<<"\n";
    cout<<"unit Consumed :"<<unit<<"\n";

    if(unit>0 && unit<=199){
        totalAmount  = unit * 1.20;
        cout<<"Amount Charges @Rs. 1.20 per unit : "<<totalAmount<<"\n";

        cout<<"Surchage Amount : 100 "<<"\n";

        printf("Net Amount Paid By the Customer : %0.2lf\n",totalAmount+100);
    }

    else if(unit>200 && unit<=400){
        totalAmount  = unit * 1.50;
        cout<<"Amount Charges @Rs. 1.50 per unit : "<<totalAmount<<"\n";
         
         surchage = (totalAmount*15)/100;
         cout<<"Surchage Amount : "<<surchage<<"\n";

        printf("Net Amount Paid By the Customer : %0.2lf\n",totalAmount+surchage);    
    }

    else if(unit>400 && unit<=600){
        totalAmount  = unit * 1.80;
        cout<<"Amount Charges @Rs. 1.80 per unit : "<<totalAmount<<"\n";

         surchage = (totalAmount*15)/100;
         cout<<"Surchage Amount : "<<surchage<<"\n";

        printf("Net Amount Paid By the Customer : %0.2lf\n",totalAmount+surchage);    
    }

    else{

       totalAmount  = unit * 2.00;
        cout<<"Amount Charges @Rs. 2.00 per unit : "<<totalAmount<<"\n";

         surchage = (totalAmount*15)/100;
         cout<<"Surchage Amount : "<<surchage<<"\n";

        printf("Net Amount Paid By the Customer : %0.2lf\n",totalAmount+surchage); 
    }

    return 0;
}