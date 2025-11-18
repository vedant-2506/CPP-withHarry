//Find and display all prime numbers between 1 and 1000000

#include <iostream>
using namespace std;

int main() {
    cout << "Prime numbers between 1 and 1,000,000:\n";

    for(int num = 2; num <= 1000000; num++) {
        bool isPrime = true;

        // Check divisibility
        for(int i = 2; i * i <= num; i++) {
            if(num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if(isPrime) {
            cout << num << " ";
        }
    }

    return 0;
}
