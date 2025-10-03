//Read three integers and find the largest among them.

#include <iostream>
using namespace std;

int main() {
    int a=0, b=0, c=0;

    cout << "To check which number is largest\n";
    cout << "Enter three values: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c) {
        cout << a << " is the largest number\n";
    }
    else if (b >= a && b >= c) {
        cout << b << " is the largest number\n";
    }
    else {
        cout << c << " is the largest number\n";
    }

    // If all are equal
    if (a == b && b == c) {
        cout << "All three numbers are equal\n";
    }

    return 0;
}
