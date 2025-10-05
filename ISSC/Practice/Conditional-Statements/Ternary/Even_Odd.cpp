//Use a ternary operator to find if a number is even or odd.

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    
    (num % 2 == 0) ? cout << "Even number\n" : cout << "Odd number\n";

    return 0;
}