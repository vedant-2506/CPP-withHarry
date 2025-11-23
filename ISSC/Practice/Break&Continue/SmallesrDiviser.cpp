//Find the smallest divisor of a number greater than 1 using break.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number (>1): ";
    cin >> n;

    int smallestDiv = -1;

    for (int i = 2; i <= n; i++) {

        if (n % i == 0) {
            smallestDiv = i;   // First divisor found
            break;             // Stop the loop immediately
        }
    }

    cout << "Smallest divisor of " << n << " is: " << smallestDiv;

    return 0;
}
