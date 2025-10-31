//​Check if a number is a palindrome

#include <iostream>
using namespace std;

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    while (num != 0) {
        remainder = num % 10;               // get last digit
        reversedNum = reversedNum * 10 + remainder;  // build reversed number
        num /= 10;                          // remove last digit
    }

    if (originalNum == reversedNum)
        cout << originalNum << " is a Palindrome number." << endl;
    else
        cout << originalNum << " is NOT a Palindrome number." << endl;

    return 0;
}
