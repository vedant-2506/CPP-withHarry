.//Write a program to check whether a given number is a perfect numbera.
// ​A perfect number is a positive integer that is equal to the sum of its proper divisors
// (excluding itself) e.g : 28: 1, 2, 4, 7, 14 → sum = 28

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int sum = 0;

    for (int i = 1; i < num; i++) {
        if (num % i == 0)
            sum += i;
    }

    if (sum == num)
        cout << num << " is a Perfect Number.\n";
    else
        cout << num << " is NOT a Perfect Number.\n";

    return 0;
}
