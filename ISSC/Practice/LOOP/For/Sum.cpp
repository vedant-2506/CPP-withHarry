//Print the sum of all integers from 1 to n (user input


#include<iostream>
using namespace std;

int main() {
    int n=0,sum=0;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        
       sum+=i;
    }

    cout <<"Total sum is "<< sum<< " \n";
    
    return 0;
}