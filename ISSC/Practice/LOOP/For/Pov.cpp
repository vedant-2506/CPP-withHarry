//​Find the power (𝑥 ) without using pow()

#include <iostream>
using namespace std;

int main() {
    int x, n;
    long long power = 1;

    cout << "Enter base (x): ";
    cin >> x;

    cout << "Enter exponent (n): ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        power *= x;
    }

    cout << x << " raised to the power " << n << " = " << power << endl;

    return 0;
}
