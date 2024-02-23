#include<iostream>
#include<string>
using namespace std;

char mostFrequentCharacter(string str) {
    int countA = 0, countB = 0;
    for (int i=0; i<str.length(); i++) {
        if (str[i] == 'A') {
            countA++;
        } else if (str[i] == 'B') {
            countB++;
        }
    }
    if (countA > countB) {
        return 'A';
    } else if (countB > countA) {
        return 'B';
    } else {
        // If counts are equal, returning 'A' by default
        return 'A';
    }
}

int main() {
    int n;
    cin >> n;
    string t;
    for(int i = 0; i < n; i++) {
        cin >> t;
        char charc = mostFrequentCharacter(t);
        cout << charc << endl;
    }

    return 0;
}
