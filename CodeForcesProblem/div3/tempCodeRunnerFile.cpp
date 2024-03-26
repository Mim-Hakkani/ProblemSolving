#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, b;
    vector<int> a;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> b;
        for (int j = 0; j < b; j++) {
            int temp;
            cin >> temp;
            a.push_back(temp); // Add element to the end of the vector
        }

        // Output the elements stored in the vector
        int sum =0;
        for (int num : a) {
            sum += abs(num);;
        }
        cout <<sum<<endl;

        // Clear the vector for the next iteration
        a.clear();
    }

    return 0;
}
