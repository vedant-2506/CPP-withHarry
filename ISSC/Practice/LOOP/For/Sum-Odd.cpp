//Print the sum of all odd numbers from 1 to n (user input)

#include<iostream>
using namespace std;

int main() {
    int n=0 ,sum =0;
    cout << "Enter the value of n: ";
    cin >> n;

    

    for (int i = 1; i <= n; i++) {
        if( i % 2 == 1){
            sum+=i;
        }
    }       
    
    cout << "Sum of " << n << " odd number is " <<sum<<" .\n";

    
    return 0;
}

