//Print all even numbers between 1 and n (user input)

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if(i % 2 == 0){
            cout << i << " \n";
        }
       
    }

    
    return 0;
}

