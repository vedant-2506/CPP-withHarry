//Swap two numbers using a third variable.
#include<iostream>
using namespace std;
int main()
{
    int a=0,b=0,c=0;
    

    cout<<"Enter  first number  :";
    cin>>a;
    cout<<"Enter  second number  :";
    cin>>b;

    c=a;
    a=b;
    b=c;

    cout<<"Number is "<<a << " and "<< b<<"\n";
    return 0;
}