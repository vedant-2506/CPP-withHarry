//Print the smallest number less than or equal to N that is divisible by both 4 and 6.


#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {

        if (i % 12 == 0) {  // divisible by 4 and 6
            cout << "Smallest number divisible by both 4 and 6 is: " << i << endl;
            break;          // stop after first match
        }
    }

    return 0;
}
