//Check and print all Armstrong numbers in a range using nested loops.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int start, end;

    cout << "Enter start of range: ";
    cin >> start;
    cout << "Enter end of range: ";
    cin >> end;

    cout << "\nArmstrong numbers:\n";

    for(int num = start; num <= end; num++) {

        int temp = num;
        int digits = 0;

        // Count digits
        int t = num;
        while(t > 0) {
            digits++;
            t /= 10;
        }

        int sum = 0;

        // Nested loop: extract each digit and raise power
        temp = num;
        while(temp > 0) {
            int digit = temp % 10;

            // Calculate digit^digits manually using loop
            int power = 1;
            for(int i = 1; i <= digits; i++) {
                power *= digit;
            }

            sum += power;
            temp /= 10;
        }

        if(sum == num)
            cout << num << " ";
    }

    return 0;
}
