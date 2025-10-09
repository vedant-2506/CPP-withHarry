//Print the multiplication table for a given number

#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number to print its multiplication table: ";
    cin >> num;

    cout << "\nMultiplication Table of " << num << ":\n";

    for (int i = 1; i <= 10; i++) {
        cout << num << " × " << i << " = " << num * i << endl;
    }

    return 0;
}
