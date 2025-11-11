//​Print the first n terms of the Fibonacci series

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    int a = 0, b = 1, next, i = 1;

    cout << "Fibonacci Series: ";

    while (i <= n) {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
        i++;
    }

    return 0;
}

