//Print the first n terms of the Fibonacci series

#include <iostream>
using namespace std;

int main() {
    int n;
    int first = 0, second = 1, next;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; i++) {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }

    cout << "\n";
    return 0;
}
