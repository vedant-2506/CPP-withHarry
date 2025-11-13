//​Display all uppercase ASCII characters with their integer values

#include <iostream>
using namespace std;

int main() {
    char ch = 'A';

    cout << "Uppercase ASCII Characters:\n";
    while (ch <= 'Z') {
        cout << ch << " -> " << int(ch) << endl;
        ch++;
    }

    return 0;
}
