//Allow the user to enter a password up to 3 times. If the correct password is entered, 
//printAccess granted and break. Otherwise, after 3 attempts, print Account locked.

#include <iostream>
using namespace std;

int main() {
    string correctPassword = "admin123";
    string input;

    for (int attempt = 1; attempt <= 3; attempt++) {

        cout << "Enter password (Attempt " << attempt << "/3): ";
        cin >> input;

        if (input == correctPassword) {
            cout << "Access granted\n";
            break;   // Exit when correct password is entered
        }

        // If last attempt failed
        if (attempt == 3) {
            cout << "Account locked\n";
        }
        else {
            cout << "Incorrect password. Try again.\n";
        }
    }

    return 0;
}
