//​Find the GCD (HCF) and LCM of two numbers

#include <iostream>
using namespace std;

int main() {
    int num1, num2, a, b, gcd, lcm;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    a = num1;
    b = num2;

    // Find GCD using Euclidean algorithm
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;

    // Find LCM
    lcm = (num1 * num2) / gcd;

    cout << "GCD (HCF) = " << gcd << endl;
    cout << "LCM = " << lcm << endl;

    return 0;
}
