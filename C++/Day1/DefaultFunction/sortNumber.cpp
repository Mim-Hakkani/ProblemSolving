#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> a = {"ema", "farida", "asa","comola", "karim"};
    cout << "Before Sort : ";
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";

    // sort functionality

    // sort(a.begin(),a.end());  // sort by assending order

    // cout<<"After Sort : ";
    // for(int i = 0;i<a.size();i++){
    //     cout<<a[i]<<" ";
    // }

    // sort indevidual index  order  output 3 1 7 15 2

    // sort(a.begin()+1,a.begin()+3+1);

    //    for(int i = 0;i<a.size();i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<"\n";

    // sort by decending order

    sort(a.begin(), a.end(),greater<string>());
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}