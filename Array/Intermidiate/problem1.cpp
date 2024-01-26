#include <iostream>
#include <vector>
using namespace std;

int main() {
    int product = 1, num;

    cout << "Enter number of elements: ";
    cin >> num;

    vector<int> arr(num);  // Declare a vector of 'num' elements
    vector<int> newarr(num);  // Declare a vector of 'num' elements

    cout << "Enter elements: ";
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
      
    }

int length = arr.size();
int count = 0;

      while (count<length) {
       if(count!=i){
         product*=arr[i];


       
       }

         if(i==length-1){
            // newarr.push_back(product);
            // product=1;
            // count++;

            cout<<i<<product;
         }
      
    }

    // output 

    // for(int i = 0;i<length;i++){
    //     cout<<newarr[i]<<" ";
    // }

    return 0;
}



// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int num;

//     cout << "Enter number of elements: ";
//     cin >> num;

//     vector<int> arr(num);  // Declare a vector of 'num' elements
//     vector<int> newarr(num);  // Declare a vector of 'num' elements

//     cout << "Enter elements: ";
//     for (int i = 0; i < num; i++) {
//         cin >> arr[i];
//     }

//     for (int i = 0; i < num; i++) {
//         int product = 1;
//         for (int j = 0; j < num; j++) {
//             if (i != j) {
//                 product *= arr[j];
//             }
//         }
//         newarr[i] = product;
//     }

//     cout << "New array: ";
//     for (int i = 0; i < num; i++) {
//         cout << newarr[i] << " ";
//     }

//     return 0;
// }

