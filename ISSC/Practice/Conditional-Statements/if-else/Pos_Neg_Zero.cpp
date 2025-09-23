//Read an integer and determine whether it is positive, negative, or zero.

#include<iostream>
using namespace std;

int main()
{
    int n=0;
    
    cout<<"Check number is positive, negative, or zero.\n";
    cout<<"Emter a number :";
    cin>>n;

    if(n == 0)
    {
        cout<<"Number is Zero \n ";
    }
    else if(n > 0)
    {
        cout<<n <<" Number is positive \n ";
    }
    else if(n < 0)
    {
        cout<<n <<" Number is negative  \n";
    }

    return 0;
}