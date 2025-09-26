//Check if the input character is the alphabet, digit, or special character.

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) 
    {
            cout << ch << " is an alphabet.\n";
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << ch << " is a digit.\n";
    }
    else 
    {
        cout << ch << " is a special character.\n";
    }

    return 0;
}
