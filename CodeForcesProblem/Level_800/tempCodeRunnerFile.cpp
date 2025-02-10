#include <iostream>
#include <algorithm>
using namespace std;

// int main() {
//     string math;
//     cin >> math;

//     string numbers = "";

//     // শুধু সংখ্যা আলাদা করে নেই
//     for (char c : math) {
//         if (c != '+') {
//             numbers += c;
//         }
//     }

   

//     // সংখ্যাগুলো সাজিয়ে নিই
//     sort(numbers.begin(), numbers.end());



//     // প্রিন্ট করার সময় '+' যোগ করি
//     for (int i = 0; i < numbers.size(); i++) {
//         cout << numbers[i];
//         if (i != numbers.size() - 1) {
//             cout << "+"; // শেষ সংখ্যার পরে '+' বসবে না
//         }
//     }

//     cout << endl;
//     return 0;
// }

int main(){
    string math;
    cin>>math;

    string numbers ; 

    for(char c : math){
       if(c!='+'){
        numbers+=c;
       }
    }
  
    // sort 

    sort(numbers.begin(),numbers.end());
    
    // show as requirements 

    for(int i=0;i<numbers.size();i++){
        cout<<numbers[i];
        if(i!=numbers.size()-1){
            cout<<'+';
        }
    }
    return 0;
}
