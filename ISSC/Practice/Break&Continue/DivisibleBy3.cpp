//Print numbers from 1 to N, skipping numbers that are divisible by 3.

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {

        if (i % 3 == 0) {
            continue;  // Skip numbers divisible by 3
        }

        cout << i << " ";
    }

    return 0;
}
