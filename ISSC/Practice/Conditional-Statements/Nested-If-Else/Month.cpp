//​Input month number and display the number of days in the month (consider leap years for February).

#include <iostream>
using namespace std;

int main() {
    int mon, year;

    cout << "Enter month number (1-12): ";
    cin >> mon;

    cout << "Enter year: ";
    cin >> year;

    if( (mon ==1 ) && (mon ==3 ) && (mon == 5 ) && (mon == 7) && (mon == 8) && (mon == 10) && (mon == 12) ){
        cout<<"Days in mount "<<mon<<" is 31 .\n"; 
    }
    else if( (mon == 4 ) && (mon == 6 ) && (mon == 9  ) && (mon == 11) ){
        cout<<"Days in mount "<<mon<<" is 30 .\n"; 
    }
    else{
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
                cout << "Days in mount "<<mon<<" is 29 .\n";
            }
            else {
                cout << "Days in mount "<<mon<<" is 28 .\n";
            }
    }

    return 0;
}