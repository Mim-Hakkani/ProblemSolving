#include <bits/stdc++.h>
using namespace std;
int main()
{ 
    vector<int>a ={1,2,3};
    vector<float>b ={1.1,2.2,3.3,4.5,6.8};
    vector<char>c ={'i','l','b'};
    vector<string>s ={"mim","love","bangladesh"};
     // for int 
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    
    }

   cout<<"\n";
 // for float 
    
    for (int i = 0; i < b.size(); i++)
    {
        cout<<b[i]<<" ";
    
    }
    
    cout<<"\n";

    // for char 

    for (int i = 0; i < c.size(); i++)
    {
        cout<<c[i]<<" ";
    
    }
cout<<"\n";

    // for string 

    for (int i = 0; i < s.size(); i++)
    {
        cout<<s[i]<<" ";
    
    }
cout<<"\n";


    return 0;
}