#include <iostream>
#include<algorithm>

using namespace std;

int main(){
  string str;
  // Input string.
  cout << "Enter a string: ";
  cin >> str;
  // Function sort is included in the algorithm library.
  sort(str.begin(), str.end());

  if(str.length()>1){
    int operatorCount = str.length()-1;

      cout<<operatorCount;
       cout<<str;

    for(int i=0;i<operatorCount;i++){
        str[i]+='+';
    }


  }

  return 0;
}
