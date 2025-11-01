//​ Print all numbers from 1 to n (user input)


#include <iostream>
using namespace std;

int main() {
    int n, i = 1;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Numbers from 1 to " << n << " are: ";

    while (i <= n) {
        cout << i << " ";
        i++;
    }

    cout << endl;
    return 0;
}
