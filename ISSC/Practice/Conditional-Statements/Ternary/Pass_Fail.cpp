//​Assign remarks ("Pass"/"Fail") using conditional operators based on marks.

#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    
    string result = (marks >= 40) ? "Pass" : "Fail";
    cout << "Result: " << result << endl;

    return 0;
}
