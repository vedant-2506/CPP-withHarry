//Find the first number greater than n that is divisible by 7.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int x = n + 1;   // Start checking from next number

    while (true) {

        if (x % 7 != 0) {
            x++;           
            continue;   // Skip numbers not divisible by 7
        }

        // If divisible by 7, break
        break;
    }

    cout << "First number greater than " << n 
         << " divisible by 7 is: " << x;

    return 0;
}
