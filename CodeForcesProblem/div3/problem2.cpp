#include <iostream>
#include <vector>
#include <algorithm> // Include the algorithm header for STL algorithms
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
        int sum = 0;
        int move = 0;
        for (int k = 0; k < a.size(); k++) { // Use a.size() instead of a.length()
            sum += a[k];
        }

        if (sum % 3 == 0) {
            move = 0;
        } else {
            int removeIndex;
            for (int l = 0; l < a.size(); l++) { // Use a.size() instead of a.length()
                int remainingValue = sum - a[l];
                if (remainingValue % 3 == 0) {
                    move = 1;
                } else {
                    removeIndex = 0;
                    for (int k = 0; k < a.size() - 1; k++) { // Use a.size() instead of a.length()
                        int remain2 = a[k] - 1;
                        if (remain2 % 3 == 0) {
                            move = 1;
                        }
                        else{
                          move =2;
                        }
                    }
                }
            }
        }

        cout << "move: " << move << endl;

        // Clear the vector for the next iteration
        a.clear();
    }

    return 0;
}
