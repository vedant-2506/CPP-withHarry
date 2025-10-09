//Calculate and print the sum of the series 1 + 1/2 + 1/3 + ... + 1/n


#include <iostream>
using namespace std;

int main() {
    int n;
    double sum = 0.0; // Use double for decimal values

    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i; // Use 1.0 to ensure floating-point division
    }

    cout << "Sum of the series 1 + 1/2 + ... + 1/" << n << " = " << sum << endl;

    return 0;
}
