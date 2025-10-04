//​Input two numbers, find the maximum using the conditional operator.

#include <iostream>
using namespace std;

int main() {
    int a=0,b=0;

    cout << "Enter a number \n";
    cin >> a>>b;

    a>b ? cout<<a<<" is large. \n"  : cout<<b<<" is large. \n";

    return 0;

} 