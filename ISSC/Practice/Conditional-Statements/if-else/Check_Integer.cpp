//Read two integers and check if they are equal, or determine which is larger.

#include<iostream>
using namespace std;

int main()
{
    int n=0,m=0;
    
    cout<<"Enter two numbers and check which one is largest .\n";
    cout<<"Emter a number : \n";
    cin>>n>>m;

    if(n == m )
    cout<<n <<" and "<< m<< " are equale  numbers : \n";

    if(n > m )
    cout<<n <<" is largeer than  "<< m<< ". \n";
   
    if(n < m )
    cout<<n <<" is samller than  "<< m<< ". \n";
    
    return 0;
}