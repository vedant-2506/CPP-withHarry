//Display digits of a number, one per line, using a do-while loop.

#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num == 0) {
        cout << "0\n";
        return 0;
    }

    cout << "Digits (from last to first):\n";

    do {
        int digit = num % 10;
        cout << digit << endl;
        num /= 10;
    } while (num != 0);

    return 0;
}
