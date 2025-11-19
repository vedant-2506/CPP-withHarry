//Generate and print the prime-factored form of numbers 1 to n.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for(int num = 1; num <= n; num++) {
        cout << num << " = ";

        if(num == 1) {  
            cout << "1";
        } else {
            int temp = num;

            for(int i = 2; i <= temp; i++) {
                while(temp % i == 0) {
                    cout << i;
                    temp /= i;

                    if(temp > 1) cout << " × ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}
