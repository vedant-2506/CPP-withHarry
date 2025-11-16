//Ask the user repeatedly for a password until correct (demonstrating do-while).

#include <iostream>
using namespace std;

int main() {
    string password;
    const string correctPassword = "12345";  // you can change this

    do {
        cout << "Enter password: ";
        cin >> password;

        if (password != correctPassword)
            cout << "Wrong password! Try again.\n";

    } while (password != correctPassword);

    cout << "Access Granted!\n";

    return 0;
}
