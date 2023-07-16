#include<bits/stdc++.h>
using namespace std;
int main(){

    string input_string , reverse_string;
    cin>>input_string;
    // cout<<"input_string ::" << input_string.length();

    for(int i =0 ;i<input_string.length();i++){
        char a = input_string[i];

        if(i%2!=0){
        //   reverse_string += input_string[i]+1;
        // cout<<input_string[i];

        input_string[i] = input_string[i]+1;
        }
        
    }
    cout<<"input string :: "<<input_string<<"\n";
    // cout<<"reverse string :: "<<reverse_string;
    
    return 0;
}