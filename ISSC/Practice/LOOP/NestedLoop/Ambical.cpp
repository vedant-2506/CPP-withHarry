//Write a program to determine whether two given numbers are amicable numbersa.
// ​Two numbers are said to be amicable if the sum of proper divisors 
//(excluding thenumber itself) of each number equals the other number - (220/284)

#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int sum1 = 0, sum2 = 0;

    // Sum of proper divisors of num1
    for (int i = 1; i < num1; i++) {
        if (num1 % i == 0)
            sum1 += i;
    }

    // Sum of proper divisors of num2
    for (int j = 1; j < num2; j++) {
        if (num2 % j == 0)
            sum2 += j;
    }

    if (sum1 == num2 && sum2 == num1)
        cout << num1 << " and " << num2 << " are Amicable Numbers.\n";
    else
        cout << num1 << " and " << num2 << " are NOT Amicable Numbers.\n";

    return 0;
}
