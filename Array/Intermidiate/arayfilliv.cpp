#include <iostream>
using namespace std;

int main() {
    int num[15];
    for (int i = 0; i < 15; i++) {
        cin >> num[i];
    }

    int even_count = 0;
    int odd_count = 0;
    int par[5]; // Array to store even numbers
    int impar[5]; // Array to store odd numbers

    for (int i = 0; i < 15; i++) {
        if (num[i] % 2 == 0) {
            if (even_count < 5) {
                par[even_count] = num[i];
                cout << "par[" << even_count << "] = " << par[even_count] << "\n";
                even_count++;
            }
        } else {
            if (odd_count < 5) {
                impar[odd_count] = num[i];
                cout << "impar[" << odd_count << "] = " << impar[odd_count] << "\n";
                odd_count++;
            }
        }
    }

    // Print any remaining elements in impar (odd) array
    for (int i = 0; i < odd_count; i++) {
        cout << "impar[" << i << "] = " << impar[i] << "\n";
    }

    // Print any remaining elements in par (even) array
    for (int i = 0; i < even_count; i++) {
        cout << "par[" << i << "] = " << par[i] << "\n";
    }

    return 0;
}
