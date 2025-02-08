#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    string name;
    cin >> name;

    unordered_set<char> uniqueChars(name.begin(), name.end());

    if (uniqueChars.size() % 2 == 0)
        cout << "CHAT WITH HER!" << "\n";
    else
        cout << "IGNORE HIM!" << "\n";

    return 0;
}
