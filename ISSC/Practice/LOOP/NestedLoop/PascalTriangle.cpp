//Print various formatted patterns  Pascal’s triangle using nested loops.


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {

        // Print spaces
        for (int j = 0; j < n - i; j++)
            cout << " ";

        // Print numbers
        int value = 1;
        for (int k = 0; k <= i; k++) {
            cout << value << " ";
            value = value * (i - k) / (k + 1); // binomial coefficient
        }

        cout << endl;
    }

    return 0;
}
