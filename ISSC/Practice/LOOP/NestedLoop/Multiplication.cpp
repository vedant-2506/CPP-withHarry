//Print multiplication tables from 2 to 11 using nested for loops.

#include <iostream>
using namespace std;

int main() {
    for(int i = 2; i <= 11; i++) {   // table number
        cout << "\nMultiplication Table of " << i << ":\n";
        
        for(int j = 1; j <= 10; j++) {   // multiplier
            cout << i << " x " << j << " = " << i * j << endl;
        }
    }
    return 0;
}
