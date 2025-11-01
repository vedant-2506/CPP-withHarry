// Print all even numbers between 1 and n (user input)

#include <iostream>
using namespace std;

int main() {
    int n, i = 2;  // start from 2 since it’s the first even number

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Even numbers between 1 and " << n << " are: ";

    while (i <= n) {
        cout << i << " ";
        i += 2;   // increment by 2 to get next even number
    }

    cout << endl;
    return 0;
}
