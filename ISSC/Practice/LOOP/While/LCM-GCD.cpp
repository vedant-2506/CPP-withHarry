//​Find the GCD (HCF) and LCM of two numbers

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int x = a, y = b;

    // GCD using while loop (Euclid’s Algorithm)
    while (x != y) {
        if (x > y)
            x = x - y;
        else
            y = y - x;
    }

    int gcd = x;
    int lcm = (a * b) / gcd;

    cout << "GCD (HCF) = " << gcd << endl;
    cout << "LCM = " << lcm << endl;

    return 0;
}
