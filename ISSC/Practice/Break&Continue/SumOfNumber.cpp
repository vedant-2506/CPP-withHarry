//Program to keep summing until the user enters a negative number, then break
// the loop and print the sum.

#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;

    while (true) {
        cout << "Enter a number (negative to stop): ";
        cin >> num;

        if (num < 0) {
            break;    // exit loop
        }

        sum += num;
    }

    cout << "\nTotal Sum = " << sum << endl;

    return 0;
}
