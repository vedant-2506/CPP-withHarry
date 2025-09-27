//Read marks for five subjects and assign a grade based on percentage ranges (A/B/C/D/E/F).

#include <iostream>
using namespace std;

int main() {
    int mark = 0;

    cout << "Enter your marks out of 100: ";
    cin >> mark;

    if (mark < 0 || mark > 100) {
        cout << "Invalid input! Enter marks between 0 and 100.\n";
    }
    else if (mark >= 0 && mark <= 30) {
        cout << "Grade: F\n";
    }
    else if (mark >= 31 && mark <= 40) {
        cout << "Grade: E\n";
    }
    else if (mark >= 41 && mark <= 50) {
        cout << "Grade: D\n";
    }
    else if (mark >= 51 && mark <= 70) {
        cout << "Grade: C\n";
    }
    else if (mark >= 71 && mark <= 90) {
        cout << "Grade: B\n";
    }
    else {
        cout << "Grade: A\n";
    }

    return 0;
}
