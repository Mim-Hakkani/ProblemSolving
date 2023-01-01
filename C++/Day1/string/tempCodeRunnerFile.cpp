#include <bits/stdc++.h>
using namespace std;
int main()
{
   string company,employee;
   company = "ehsan marketing";
   employee = "Golam Hakkani Mim ";
   string add = employee + company;
   cout<<add<<"\n";
   // indevidual string show 
   cout<<add[1]<<"\n";
   
   // see the string size  = > name.size()

   cout<<"Comp[any length is : "<<company.size()<<"\n";


   // string shift 1 charactet 

    for(int i=0;i<company.size();i++){
        company[i] = company[i]+1;
    }

    cout<<"Shift one letter : "<<company<<"\n";

    // delete last character of string 

    company.pop_back();
    cout<<"delete the last : "<<company<<"\n";


    // delete the first chracter 

    company.erase(company.begin());
    cout<<"delete the first chracter : "<<company<<"\n";

    // delete any letter 

    company.erase(company.begin()+4);
    cout<<"4 index is delete :: "<<company<<"\n";

}