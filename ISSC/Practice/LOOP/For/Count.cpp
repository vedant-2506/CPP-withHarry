//Count and display the number of digits in a number

#include <iostream>
using namespace std;

int main() {
    int num, count = 0;

    cout << "Enter a number: ";
    cin >> num;

    if (num == 0) {
        count = 1; // Special case for 0
    } else {
        for (int n = num; n != 0; n = n / 10) {
            count++;
        }
    }

    cout << "Number of digits: " << count << endl;

    return 0;
}
