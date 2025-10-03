//​Input week number (1–7) and print corresponding weekday name.


#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Enter day number (1-7): ";
    cin >> day;

    if (day == 1) {
        cout << "Monday\n";
    }
    else if (day == 2) {
        cout << "Tuesday\n";
    }
    else if (day == 3) {
        cout << "Wednesday\n";
    }
    else if (day == 4) {
        cout << "Thursday\n";
    }
    else if (day == 5) {
        cout << "Friday\n";
    }
    else if (day == 6) {
        cout << "Saturday\n";
    }
    else if (day == 7) {
        cout << "Sunday\n";
    }
    else {
        cout << "Invalid day!\n";
    }

    return 0;
}
