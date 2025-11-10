//Count and display the number of digits in a number


#include <iostream>
using namespace std;

int main() {
    int num, count = 0;
    cout << "Enter a number: ";
    cin >> num;

    int temp = num;  // Store original number

    while (temp != 0) {
        temp /= 10;
        count++;
    }

    cout << "Number of digits in " << num << " = " << count;
    return 0;
}
