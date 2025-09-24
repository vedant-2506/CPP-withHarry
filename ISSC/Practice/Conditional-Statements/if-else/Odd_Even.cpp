//Check if a number is odd or even.

#include <iostream>
using namespace std;

int main()
 {
    int a=0;

    cout<<"Check number is even or odd \n";
    cout<<"Enter a number :\n";
    cin>>a;

    if(a%2==0)
    cout<<a<<" is even \n";
    else
    cout<<a<<" is odd \n";   

    return 0;
}