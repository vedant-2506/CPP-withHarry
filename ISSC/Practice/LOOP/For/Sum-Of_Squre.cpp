//Sum of squares of first n numbers



#include<iostream>
using namespace std;

int main() {
    int n=0 ,sum =0;
    cout << "Enter the value of n: ";
    cin >> n;

    

    for (int i = 1; i <= n; i++) {
        sum+= (i*i);
    }       
    
    cout << "Sum of " << n << " suqure number is " <<sum<<" .\n";

    
    return 0;
}

