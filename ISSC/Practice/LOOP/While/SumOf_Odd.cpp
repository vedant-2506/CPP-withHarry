//Print the sum of all odd numbers from 1 to n (user input)

#include <iostream>
using namespace std;

int main() {
    int n, i = 1, sum = 0;

    cout << "Enter the value of n: ";
    cin >> n;

    while (i <= n) {
        if (i % 2 != 0) {  // check if number is odd
            sum += i;
        }
        i++;
    }

    cout << "Sum of all odd numbers from 1 to " << n << " is: " << sum << endl;

    return 0;
}
