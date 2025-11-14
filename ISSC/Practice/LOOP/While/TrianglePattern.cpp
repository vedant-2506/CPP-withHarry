//Print a triangle pattern based on user input (height)


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter height of triangle: ";
    cin >> n;

    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= i) {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

