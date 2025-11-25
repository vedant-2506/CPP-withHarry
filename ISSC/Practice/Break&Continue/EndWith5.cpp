//Print numbers from 1 to N, but skip those that end in 5 using continue.
//
#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {

        if (i % 10 == 5) {   // Number ends with 5
            continue;        // Skip it
        }

        cout << i << " ";
    }

    return 0;
}
