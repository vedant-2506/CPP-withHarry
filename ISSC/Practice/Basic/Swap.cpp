//Swap two numbers without using a third variable.
#include<iostream>
using namespace std;
int main()
{
    int a=0,b=0;
    

    cout<<"Enter  first number  :";
    cin>>a;
    cout<<"Enter  second number  :";
    cin>>b;

    a=a+b;
    b=a-b;
    a=a-b;

    cout<<"Number is "<<a << " and "<< b<<"\n";
    return 0;
}
