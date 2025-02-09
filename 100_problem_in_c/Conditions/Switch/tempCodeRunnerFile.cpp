#include <iostream>
using namespace std;
int main()
{
    char Letter;
    cout << "Enter The Letter: ";
    cin >> Letter;
    
    switch (Letter)
    {
    case 'a': 
    case 'A': 
    case 'e': 
    case 'E': 
    case 'i': 
    case 'I': 
    case 'o': 
    case 'O': 
    case 'u': 
    case 'U': 
        cout << "Vowel\n";
        break;

    default:
        cout << "Consonant\n";
        break;
    }
    return 0;
}
