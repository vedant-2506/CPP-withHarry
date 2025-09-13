//addition, subtraction, and multiplication using a third variable

#include<iostream>
using namespace std;
int main()
{
    int a=0,b=0;
    float x=0,y=0,z=0;

    cout<<"Enter  value  :";
    cin>>a>>b;

    x=a+b;
    y=a-b;
    z=a*b;
    cout<<"Addition is "<<x<<"\n";
    cout<<"Subtraction is "<<y<<"\n";
    cout<<"Multiplication is "<<z<<"\n";
    

    return 0;
}