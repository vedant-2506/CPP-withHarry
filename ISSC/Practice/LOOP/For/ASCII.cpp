//​Display all uppercase ASCII characters with their integer values

#include <iostream>
using namespace std;

int main() {
    cout << "Uppercase ASCII Characters and Their Integer Values:\n";
    cout << "----------------------------------------------\n";

    for (char ch = 'A'; ch <= 'Z'; ch++) {
        cout << ch << " = " << int(ch) << endl;
    }

    return 0;
}
