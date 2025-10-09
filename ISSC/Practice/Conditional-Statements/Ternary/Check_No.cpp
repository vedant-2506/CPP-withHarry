//Use nested conditional operators to classify a number as positive/negative/zero.

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    
    (num > 0) ? cout << "Positive number\n" :
    (num < 0) ? cout << "Negative number\n" :
                cout << "Zero\n";

    return 0;
}



