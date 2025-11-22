//Skip printing odd numbers in a loop using continue.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter limit: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {

        if (i % 2 != 0) {
            continue;   // skip odd numbers
        }

        cout << i << " ";   // print only even numbers
    }

    return 0;
}
