//​Check if a number is a palindrome


#include <iostream>
using namespace std;

int main() {
    int num, original, rev = 0;
    cout << "Enter a number: ";
    cin >> num;

    original = num;

    // Reverse the number using while loop
    while (num > 0) {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }

    if (original == rev)
        cout << original << " is a Palindrome\n";
    else
        cout << original << " is NOT a Palindrome\n";

    return 0;
}
