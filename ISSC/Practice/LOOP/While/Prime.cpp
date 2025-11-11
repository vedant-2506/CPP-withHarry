//​Check whether a given number is prime or composite

#include <iostream>
using namespace std;

int main() {
    int num, i = 2;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1) {
        cout << num << " is neither prime nor composite.";
        return 0;
    }

    while (i <= num / 2) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
        i++;
    }

    if (isPrime)
        cout << num << " is Prime";
    else
        cout << num << " is Composite";

    return 0;
}
git addd Prime_Composite.cpp