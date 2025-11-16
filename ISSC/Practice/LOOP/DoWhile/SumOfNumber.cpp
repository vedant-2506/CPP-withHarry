//Read numbers until the user enters 0; compute and print their sum using a do-while loop.

#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter numbers (enter 0 to stop):\n";

    do {
        cin >> num;
        sum += num;
    } while (num != 0);

    cout << "Total Sum = " << sum << endl;

    return 0;
}
