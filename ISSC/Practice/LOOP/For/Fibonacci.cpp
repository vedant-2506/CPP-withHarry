//​Calculate the factorial of a number
#include <iostream>
using namespace std;

int main() {
    int n;
    long long factorial = 1; // use long long for large results

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial of negative number doesn't exist!" ;
    } 
    else {
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial ;
    }

    return 0;
}
