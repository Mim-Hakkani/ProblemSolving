#include <bits/stdc++.h>
using namespace std;
int main()
{ 
    vector<int>a;
    // vector<float>b ={1.1,2.2,3.3,4.5,6.8};
    // vector<char>c ={'i','l','b'};
    // vector<string>s ={"mim","love","bangladesh"};


     // for insert element using int 
    for (int i = 0; i <5; i++)
    {
        a.push_back(i+1);
    }

   cout<<"\n";

//    insert element 

  a.insert(a.begin(),25);


  // insert element in any where 

  a.insert(a.begin()+3,35);

 // for print inserting element 
    
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    
    }
    
   cout<<"\n";
   // delete the last element 

   a.pop_back();
       for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    
    }

       
    cout<<"\n";
       // delete the last element 

       a.erase(a.begin());
       for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    
    }

   

 


    return 0;
}