//addition, subtraction, and multiplication without using a third variable

#include<iostream>
using namespace std;
int main()
{
    float a=0,b=0;

    cout<<"Enter  value (for division dont enter second value 0) :";
    cin>>a>>b;

    cout<<"Addition is "<<a+b<<"\n";
    cout<<"Subtraction is "<<a-b<<"\n";
    cout<<"Multiplication is "<<a*b<<"\n";
    cout<<"Division is "<<a/b<<"\n";

    return 0;
}