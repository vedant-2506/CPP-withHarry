//Reverse a number entered by the user

#include <iostream>
using namespace std;

int main() {
    int num, rev = 0;

    cout << "Enter a number: ";
    cin >> num;

    for (int n = num; n > 0; n = n / 10) {
        int digit = n % 10;
        rev = rev * 10 + digit;
    }

    cout << "Reversed number: " << rev << endl;

    return 0;
}
