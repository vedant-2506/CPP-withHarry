//Print all numbers from 1 to n (user input)

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Numbers from 1 to " << n << " are:\n";

    for (int i = 1; i <= n; i++) {
        cout << i << " \n";
    }

    cout << endl;
    return 0;
}

