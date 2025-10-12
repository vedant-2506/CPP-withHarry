//​Check whether a given number is prime or composite

#include <iostream>
using namespace std;

int main() {
    int n, i;
    bool isPrime = true; 

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n <= 1) {
        cout << n << " is neither prime nor composite." << endl;
        return 0;
    }

    
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout << n << " is a Prime number." << endl;
    else
        cout << n << " is a Composite number." << endl;

    return 0;
}
