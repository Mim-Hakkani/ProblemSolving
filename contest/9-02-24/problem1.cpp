#include <iostream>
using namespace std;

int main() {
    int num;
    cin>>num;
    string word[num];
    
   for(int i = 0 ; i<num;i++){
    cin>>word[i];
    
   }

   for(int i = 0 ; i<num;i++){
    string str = word[i];
     int len = str.length();


    if (len >= 2 && str.substr(len - 2) == "us") {
        str = str.substr(0, len - 2) + "i";  // Replace "us" with "i"
    }
    cout<<str<<"\n";
   }
    return 0;
}
