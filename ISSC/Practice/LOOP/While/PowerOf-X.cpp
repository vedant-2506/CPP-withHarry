//​Find the power (𝑥 ) without using pow()

#include <iostream>
using namespace std;

int main() {
    int x, n;
    long long power = 1;
    int i = 1;

    cout << "Enter base (x): ";
    cin >> x;

    cout << "Enter exponent (n): ";
    cin >> n;

    while (i <= n) {
        power *= x;
        i++;
    }

    cout << x << " raised to the power " << n << " is " << power << endl;
    return 0;
}
